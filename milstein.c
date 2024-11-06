//
// Created by Marcin Baranek on 03/11/2024.
//

#include "milstein.h"
#include "domain.h"

// Metoda zwraca nowy `Point` z
// atrybutem `time` rownym atrybutowi `time` obiektu `input` powiekszonym o `dt`.
// Atrybut `space_variable` powinien byc rownym sumie nastepujacych składnikow:
// 1. `space_variable` z obiektu `input`,
// 2. wynikowi metody `drift_increment`,
// 3. wynikowi metody `milstein_diffusion_increment`.
// Metody wymienione w 2. oraz 3. powinny byc wywolywane z `Point` majacymi wartosci jak `input` oraz `dt` zaczerpnietym z opcji
struct Point milstein_next_point(const struct Point* input, const struct MilsteinOptions options)
{
    // TODO FIX ME
    struct Point result;
    return result;
}

struct Point milstein_last_point(const struct Point initial_point, const struct MilsteinOptions options)
{
    struct Point result = initial_point;
    int i = 0;
    for (i =0; i < options.number_of_steps; i++)
    {
        // TODO odkomentowac linijke ponizej i poprawnie wywolac funkcje `eulers_next_point`
        // result = milstein_next_point();
    }
    return result;
}
