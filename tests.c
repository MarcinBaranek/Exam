//
// Created by Marcin Baranek on 01/11/2024.
//

#include "tests.h"
#include <stdio.h>
#include "domain.h"
#include "euler_increments.h"
#include "euler.h"
#include "milstein_corrections.h"
#include "milstein.h"
#include "derivative.h"

struct Point TEST_POINT={0.1, 3.33};


void test_drift_increment()
{
    printf("Testing drift increment:\t");
    printf("%f\n", drift_increment(TEST_POINT, 0.05));
}


void test_diffusion_increment()
{
    printf("Testing diffusion increment:\t");
    printf("%f\n", diffusion_increment(TEST_POINT, 0.14));
}

void test_euler_last_point()
{
    struct EulerOptions options;
    options.dt = 0.05;
    options.initial_time = 0.3;
    options.number_of_steps = 9;
    struct Point last_point = eluer_last_point(TEST_POINT, options);
    printf("Testing Last time:\t\t");
    printf("%f\n", last_point.time);
    printf("Testing Last point:\t\t");
    printf("%f\n", last_point.space_variable);
}

void test_derivative()
{
    printf("Testing derivative:\t");
    printf("%f\n", derivative(TEST_POINT, 0.03));
}


void test_milstein_diffusion_increment()
{
    printf("Testing Milstein diffusion increment:\t");
    printf("%f\n", milstein_diffusion_increment(TEST_POINT, 0.19));
}

void test_milstein_last_point()
{
    struct MilsteinOptions options;
    options.dt = 0.17;
    options.initial_time = 0.3;
    options.number_of_steps = 13;
    struct Point last_point = milstein_last_point(TEST_POINT, options);
    printf("Testing Milstein Last time:\t\t");
    printf("%f\n", last_point.time);
    printf("Testing Milstein Last point:\t\t");
    printf("%f\n", last_point.space_variable);
}


void all_tests()
{
    // test_drift_increment();
    // test_diffusion_increment();
    // test_euler_last_point();
    // printf("===========================");
    // printf("===========================\n");
    test_derivative();
    test_milstein_diffusion_increment();
    test_milstein_last_point();
}
