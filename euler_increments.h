//
// Created by Marcin Baranek on 01/11/2024.
//
#ifndef EULER_INCREMENTS_H
#define EULER_INCREMENTS_H
#include "domain.h"


double diffusion_increment(const struct Point input, const double dt);


double drift_increment(const struct Point input, const double dt);
#endif //EULER_INCREMENTS_H
