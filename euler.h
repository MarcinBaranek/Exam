//
// Created by Marcin Baranek on 01/11/2024.
//

#ifndef EULER_H
#define EULER_H
struct EulerOptions
{
    double dt;
    double initial_time;
    int number_of_steps;
};

struct Point eluer_last_point(const struct Point initial_point, const struct EulerOptions options);
#endif //EULER_H
