//
// Created by vincent on 2022-11-24.
//

#include "Circle.h"

Circle::Circle(const char* color, double diameter) : Shape(color), diameter(diameter) {
}

double Circle::getArea() const {
    return M_PI * pow(diameter/2, 2);
}

double Circle::getDiameter() const{
    return diameter;
}
