//
// Created by vincent on 2022-11-24.
//

#include "Rounded_Rectangle.h"

Rounded_Rectangle::Rounded_Rectangle(std::string color, double width, double height, double cornerRadius) :
        Rectangle(color, width, height), cornerRadius(cornerRadius)
                                     {
}

double Rounded_Rectangle::getArea() const {
    return Rectangle::getArea() - pow(cornerRadius, 2) * (4 - M_PI);
}
