//
// Created by vincent on 2022-11-24.
//

#include "Shape.h"

const std::string &Shape::getColor() const {
    return color;
}

void Shape::setColor(const std::string &color) {
    Shape::color = color;
}

double Shape::getArea() const {
    return area;
}

void Shape::setArea(double area) {
    Shape::area = area;
}

Shape::Shape(std::string color, double area) : color(color), area(area) {
}

