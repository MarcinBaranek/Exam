//
// Created by Marcin Baranek on 03/11/2024.
//

#ifndef DERIVATIVE_H
#define DERIVATIVE_H
#include "domain.h"
// Oblicza iloraz roznicowy funckji `diffusion` ze wzgledu na zmienna przestrzenna.
// By obliczyc iloraz `f`, ktora bierze dwa argumenty `t` oraz `x` musimy obliczyc
// `(f(t,x + h) - f(t,x)) / h`
// gdzie `h` powinno byc male. Na potrzeby tej metody `h=dt`
double derivative(const struct Point input, const double dt);
#endif //DERIVATIVE_H
