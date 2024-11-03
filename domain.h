//
// Created by Marcin Baranek on 01/11/2024.
//

#ifndef DOMAIN_H
#define DOMAIN_H
struct Point
{
    double time;
    double space_variable;
};

double drift(const struct Point point);
double diffusion(const struct Point point);
#endif //DOMAIN_H
