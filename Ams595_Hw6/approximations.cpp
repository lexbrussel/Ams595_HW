#pragma once
#include <vector>
#include "pi_approx.cpp"

static double* approximations(const std::vector<int>& input)
{
    size_t size = input.size();

    // Allocate memory for the array dynamically
    double* pi_approx_array = new double[size];

    for (size_t i = 0; i < size; i++) 
    {
        PiResults results = pi_approx(input[i]);
        pi_approx_array[i] = results.approx;
    }

    return pi_approx_array;
}