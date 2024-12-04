//
// Created by Marcin Baranek on 03/11/2024.
//

#include "milstein_corrections.h"
#include "domain.h"
#include "derivative.h"

double milstein_corrections(const struct Point input, const double dt, const double dw)
{
    return 0.5 * diffusion(input) * derivative(input, dt) * (dw * dw - dt);
}

double milstein_diffusion_increment(const struct Point input, const double dt)
{
    return 0.123;
}
