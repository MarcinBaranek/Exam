cmake_minimum_required(VERSION 3.26)

project(
        Exam
        VERSION 1.0
        LANGUAGES C)

add_executable(Exam main.c
        random.c
        domain.c
        domain.h
        euler.c
        euler.h
        euler_increments.c
        euler_increments.h
        tests.c
        tests.h
        milstein_corrections.c
        milstein_corrections.h
        milstein.c
        milstein.h
        derivative.c
        derivative.h)
