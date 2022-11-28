//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_ROUNDED_RECTANGLE_H
#define LABB2_ROUNDED_RECTANGLE_H


#include "Rectangle.h"
#include "cmath"
#include "Circle.h"

class Rounded_Rectangle : public Rectangle{
    Circle circle_radius;
public:
    Rounded_Rectangle(const char* color, double width, double height, double radius);
    double getArea() const;

};


#endif //LABB2_ROUNDED_RECTANGLE_H
