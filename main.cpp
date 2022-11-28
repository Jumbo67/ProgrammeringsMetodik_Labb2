#include <iostream>
#include <vector>
#include "memory"
#include "Shape.h"
#include "Cylinder.h"
#include "Parallel_Piped.h"
#include "Rounded_Rectangle.h"

using shape_ptr = std::unique_ptr<Shape>;
void getData(std::vector<shape_ptr>& shapes);

int main() {

    std::vector<shape_ptr> ptrList;

    ptrList.push_back(std::make_unique<Rectangle>("Red", 10, 10));
    ptrList.push_back(std::make_unique<Cylinder>("Black", 10, 10));
    ptrList.push_back(std::make_unique<Circle>("Violet", 10));
    ptrList.push_back(std::make_unique<Parallel_Piped>("Purple", 10, 10, 10));
    ptrList.push_back(std::make_unique<Rounded_Rectangle>("Blue", 10, 10, 10));

    getData(ptrList);

    return 0;
}

void getData(std::vector<shape_ptr>& shapes) {
    for(auto& shape : shapes) {
            std::cout << "Type: " << typeid(*shape).name() << ", " << "Color: " << shape->getColor() << ", area: " << shape->getArea();
            Cylinder* cy_p = dynamic_cast<Cylinder*>(shape.get());
            Parallel_Piped* pp_p = dynamic_cast<Parallel_Piped*>(shape.get());
        if (cy_p)
            std::cout << ", Volume: " << cy_p->getVolume() << "\n";
        else if (pp_p)
            std::cout << ", Volume: " << pp_p->getVolume() << "\n";
        else
        {
            std::cout << "\n";
        }
    }
}