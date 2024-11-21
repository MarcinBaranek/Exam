//
// Created by Marcin Baranek on 03/11/2024.
//

#ifndef MILSTEIN_CORRECTIONS_H
#define MILSTEIN_CORRECTIONS_H
#include "domain.h"

//Funkcja oblicza przyrost dyfuzji w nastepujacy sposob
//  krok 1: obliczamy wartość `dw`, ktora jest rowna pierwiastkowi z `dt` przemnozona przez wynik metody `normal_random`
//  krok 2: zwraca sume wyniku metody `milstein_corrections` z iloczynem `dw` i wyniku metody `diffusion` wolanej z argumentem `input`
double milstein_diffusion_increment(const struct Point input, const double dt);
#endif //MILSTEIN_CORRECTIONS_H
