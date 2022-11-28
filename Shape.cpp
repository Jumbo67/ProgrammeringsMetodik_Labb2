//
// Created by vincent on 2022-11-24.
//

#include "Shape.h"

Shape::Shape(const char* color) : color(color){
}
const char* Shape::getColor() const {
    return this->color;
}
