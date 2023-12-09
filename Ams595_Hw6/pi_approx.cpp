#pragma once
#include <cmath>

//I don't know why my cmath do not contain M_PI, so I cannot follow the pdf instruction
#ifndef M_PI
#define M_PI 3.1415926535897932384626433
#endif

struct PiResults
{
public:
    double approx;
    double error;
};

//define f(x)
static double f(double x)
{
    return sqrt(1 - x * x);
}

static PiResults pi_approx(int N) 
{

    double sum = 0;
    double dx = 1.0 / N;

    //to avoid cast 
    for (double k = 1; k <= N; k++) 
    {
        // take the dx to the front of the sum
        sum += (f(k * dx) + f((k - 1.0) * dx)) / 2;
    }

    double pi_approximation = sum * dx * 4;

    double error = std::abs(pi_approximation - M_PI);

    PiResults results;
    results.approx = pi_approximation;
    results.error = error;

    return results;
}
