//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H

#include <iostream>

class Shape {
    const char* color;
public:
    Shape(const char* color);
    const char* getColor() const;
    virtual double getArea() const = 0;
    virtual ~Shape() = default;

};


#endif //LABB2_SHAPE_H
