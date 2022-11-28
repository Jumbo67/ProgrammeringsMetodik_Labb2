//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_RECTANGLE_H
#define LABB2_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape{
    double width, height;

public:
    Rectangle(const char* color, double width, double height);
    double getArea() const;
    double getWidth() const;
    double getHeight() const;

};


#endif //LABB2_RECTANGLE_H
