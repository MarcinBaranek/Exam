//
// Created by Marcin Baranek on 01/11/2024.
//
#include "euler.h"
#include "domain.h"
#include "euler_increments.h"

struct Point euler_next_point(const struct Point* input, const struct EulerOptions options)
{
    struct Point result;
    result.time = input->time + options.dt;
    result.space_variable = input->space_variable
        + drift_increment(*input, options.dt)
        + diffusion_increment(*input, options.dt);
    return result;
}

struct Point eluer_last_point(const struct Point initial_point, const struct EulerOptions options)
{
    struct Point result = initial_point;
    int i = 0;
    for (i =0; i < options.number_of_steps; i++)
    {
        result = euler_next_point(&result, options);
    }
    return result;
}
