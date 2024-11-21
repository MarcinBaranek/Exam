//
// Created by Marcin Baranek on 03/11/2024.
//

#include "derivative.h"

double derivative(const struct Point input, const double dt)
{
    struct Point point = input;
    point.space_variable += dt;
    return (diffusion(point) - diffusion(input)) / dt;
}
