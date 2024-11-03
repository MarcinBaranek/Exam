//
// Created by Marcin Baranek on 01/11/2024.
//
#ifndef EULER_INCREMENTS_H
#define EULER_INCREMENTS_H
#include "domain.h"

// Oblicza pierwiastek z `dt` pomnozony przez liczbe
// wygenerowaną przez metode `normal_random` pomnożona przez
// wynik z metody `diffusion` wolanej z argumentem `input`
double diffusion_increment(const struct Point input, const double dt);


// Zwraca `dt` pomnozony przez
// wynik z metody `drift` wolanej z argumentem `input`
double drift_increment(const struct Point input, const double dt);
#endif //EULER_INCREMENTS_H
