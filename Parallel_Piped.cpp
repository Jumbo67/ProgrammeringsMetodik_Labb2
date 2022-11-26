//
// Created by vincent on 2022-11-24.
//

#include "Parallel_Piped.h"

Parallel_Piped::Parallel_Piped(std::string color, double width, double height, double length) :
Rectangle(color, width, height), length(length)
{

}

double Parallel_Piped::getArea() const {
    return 2 * (length * Rectangle::getWidth() + length * Rectangle::getHeight() + Rectangle::getArea());
}

double Parallel_Piped::getVolume() const {
    return length * Rectangle::getArea();
}