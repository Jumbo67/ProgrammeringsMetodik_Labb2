//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_CIRCLE_H
#define LABB2_CIRCLE_H


#include "Shape.h"
#include "math.h"

class Circle : public Shape{
    double diameter;
public:
    Circle(std::string color, double diameter);
    double getDiameter() const;
    double getArea() const;
};


#endif //LABB2_CIRCLE_H
