//
// Created by vincent on 2022-11-24.
//

#include "Shape.h"

Shape::Shape(std::string color) : color(color){
}

const std::string &Shape::getColor() const {
    return color;
}

void Shape::setColor(const std::string &color) {
    Shape::color = color;
}

