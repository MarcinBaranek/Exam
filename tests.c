//
// Created by Marcin Baranek on 01/11/2024.
//

#include "tests.h"
#include <stdio.h>
#include "domain.h"
#include "euler_increments.h"
#include "euler.h"

struct Point TEST_POINT={0.3, 7};


void test_drift_increment()
{
    printf("Testing drift increment:\t");
    printf("%f\n", drift_increment(TEST_POINT, 0.1));
}


void test_diffusion_increment()
{
    printf("Testing diffusion increment:\t");
    printf("%f\n", diffusion_increment(TEST_POINT, 0.1));
}

void test_euler_last_point()
{
    struct EulerOptions options;
    options.dt = 0.1;
    options.initial_time = 0.;
    options.number_of_steps = 7;
    struct Point last_point = eluer_last_point(TEST_POINT, options);
    printf("Testing Last time:\t\t");
    printf("%f\n", last_point.time);
    printf("Testing Last point:\t\t");
    printf("%f\n", last_point.space_variable);
}

void all_tests()
{
    test_drift_increment();
    test_diffusion_increment();
    test_euler_last_point();
}