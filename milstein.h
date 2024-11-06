//
// Created by Marcin Baranek on 03/11/2024.
//

#ifndef MILSTEIN_H
#define MILSTEIN_H
#include "domain.h"
struct MilsteinOptions
{
    double dt;
    double initial_time;
    int number_of_steps;
};
struct Point milstein_last_point(const struct Point initial_point, const struct MilsteinOptions options);
#endif //MILSTEIN_H
