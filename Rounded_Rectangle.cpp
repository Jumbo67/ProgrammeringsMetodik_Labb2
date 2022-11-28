//
// Created by vincent on 2022-11-24.
//

#include "Rounded_Rectangle.h"

Rounded_Rectangle::Rounded_Rectangle(const char* color, double width, double height, double radius) :
        Rectangle(color, width, height), circle_radius("None",radius)
                                     {
}

double Rounded_Rectangle::getArea() const {
    double radius = circle_radius.getDiameter()/2;
    Rectangle corner_rec("None", radius, radius);
    return Rectangle::getArea() - 4 * corner_rec.getArea() + circle_radius.getArea();
}
