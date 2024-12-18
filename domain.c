//
// Created by Marcin Baranek on 01/11/2024.
//

#include "domain.h"

double drift(const struct Point point)
{
    return 1.74 * point.space_variable;
}

double diffusion(const struct Point point)
{
    return 0.2 * point.space_variable + 0.1 * point.time;
}
