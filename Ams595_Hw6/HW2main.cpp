#include <iostream>

#include "pi_approx.cpp"
#include "approximations.cpp"


int main()
{

    int iteration = 10000;
    PiResults results = pi_approx(iteration);

    std::cout << "-Print the pi approximation and error for N = 10000 using Q1: " << std::endl;
    std::cout << "Approximated Pi of 10000 iter: " << results.approx << std::endl;
    std::cout << "Absolute Error of 10000 iter: " << results.error << std::endl;




    std::cout << "-Creat a vector and print element using Q2: " << std::endl;
    std::vector<int> input {10, 100, 1000, 10000, 100000, 1000000, 10000000};

    double* pi_approx_array = approximations(input);

    for (size_t i = 0; i < input.size(); i++)
    {
        std::cout << "Approximation for PI for " << input[i] << " iterations: " << pi_approx_array[i] << std::endl;
    }


    std::cin.get();

	return 0;
}