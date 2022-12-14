//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_CYLINDER_H
#define LABB2_CYLINDER_H


#include "Circle.h"

class Cylinder : public Circle {
    double height;
public:
    Cylinder(const char* color, double diameter, double height);
    double getArea() const;
    double getVolume() const;
};


#endif //LABB2_CYLINDER_H
