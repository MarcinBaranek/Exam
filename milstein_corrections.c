//
// Created by Marcin Baranek on 03/11/2024.
//

#include "milstein_corrections.h"

#include <math.h>

#include "domain.h"
#include "derivative.h"
#include "random.h"

double milstein_corrections(const struct Point input, const double dt, const double dw)
{
    return 0.5 * diffusion(input) * derivative(input, dt) * (dw * dw - dt);
}

double milstein_diffusion_increment(const struct Point input, const double dt)
{
    double dw = sqrt(dt) * normal_random();
    return milstein_corrections(input, dt, dw) + dw * diffusion(input);
}
