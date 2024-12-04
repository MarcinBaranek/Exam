//
// Created by Marcin Baranek on 01/11/2024.
//
#include "domain.h"
#include "euler_increments.h"
#include <math.h>
#include "random.h"

double diffusion_increment(const struct Point input, const double dt)
{
    return sqrt(dt) * normal_random() * diffusion(input);
}

double drift_increment(const struct Point input, const double dt)
{
    return drift(input) * dt;
}
