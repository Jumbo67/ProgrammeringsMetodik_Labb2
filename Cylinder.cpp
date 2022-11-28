//
// Created by vincent on 2022-11-24.
//

#include "Cylinder.h"

Cylinder::Cylinder(const char* color, double diameter, double height) : Circle(color, diameter), height(height) {
}

double Cylinder::getArea() const {
    return (2*Circle::getArea()) + (2*M_PI*(Circle::getDiameter()/2)*height);
}

double Cylinder::getVolume() const {
    return Circle::getArea() * height;
}
