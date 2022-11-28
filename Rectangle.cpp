//
// Created by vincent on 2022-11-24.
//

#include "Rectangle.h"

Rectangle::Rectangle(const char* color, double width, double height) :
Shape(color), width(width), height(height) {
}

double Rectangle::getArea() const {
    return (height*width);
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}
