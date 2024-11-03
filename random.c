//
// Created by Marcin Baranek on 01/11/2024.
//
#include <stdlib.h>
#include <math.h>
#include "random.h"

double normal_random() {
    double u1 = (double)rand() / RAND_MAX;
    double u2 = (double)rand() / RAND_MAX;
    return sqrt(-2.0 * log(u1)) * cos(2.0 * M_PI * u2);
}
