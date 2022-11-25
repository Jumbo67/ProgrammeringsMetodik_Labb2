//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_SHAPE_H
#define LABB2_SHAPE_H

#include <iostream>

class Shape {
    std::string color;
public:
    Shape(std::string color);
    const std::string &getColor() const;
    void setColor(const std::string &color);
    virtual double getArea() const = 0;

};


#endif //LABB2_SHAPE_H
