//
// Created by Marcin Baranek on 01/11/2024.
//
#include "euler.h"
#include "domain.h"

// Metoda zwraca nowy `Point` z
// atrybutem `time` rownym atrybutowi `time` obiektu `input` powiekszonym o `dt`.
// Atrybut `space_variable` powinien byc rownym sumie nastepujacych składnikow:
// 1. `space_variable` z obiektu `input`,
// 2. wynikowi metody `drift_increment`,
// 3. wynikowi metody `diffusion_increment`.
// Metody wymienione w 2. oraz 3. powinny byc wywolywane z `Point` majacymi wartosci jak `input` oraz `dt` zaczerpnietym z opcji
struct Point eulers_next_point(const struct Point* input, const struct EulerOptions options)
{
    // TODO FIX ME
    struct Point result;
    return result;
}

struct Point eluer_last_point(const struct Point initial_point, const struct EulerOptions options)
{
    struct Point result = initial_point;
    for (int i =0; i < options.number_of_steps; i++)
    {
        // TODO odkomentowac linijke ponizej i poprawnie wywolac funkcje `eulers_next_point`
        // result = eulers_next_point();
    }
    return result;
}
