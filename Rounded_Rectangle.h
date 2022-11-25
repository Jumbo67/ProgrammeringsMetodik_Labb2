//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_ROUNDED_RECTANGLE_H
#define LABB2_ROUNDED_RECTANGLE_H


#include "Rectangle.h"
#include "math.h"

class Rounded_Rectangle : public Rectangle{
    double cornerRadius;

    Rounded_Rectangle(std::string color,
                      double width, double height, double cornerRadius);
    double getArea() const;

};


#endif //LABB2_ROUNDED_RECTANGLE_H
