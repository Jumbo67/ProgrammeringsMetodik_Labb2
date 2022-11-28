//
// Created by vincent on 2022-11-24.
//

#ifndef LABB2_PARALLEL_PIPED_H
#define LABB2_PARALLEL_PIPED_H


#include "Rectangle.h"

class Parallel_Piped : public Rectangle{
    double length;
public:
    Parallel_Piped(const char* color, double width, double height, double length);

    double getArea() const override;
    double getVolume() const;
};


#endif //LABB2_PARALLEL_PIPED_H
