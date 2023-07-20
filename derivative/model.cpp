#include <iostream>
#include <cmath>

#include "model.h"

const double pi = 4.0 * atan(1.0);

// output the point followd by normal distribution with mean 0 and variance 1
double gauss_sample()
{
    double u1 = (std::rand() + 1.0) / (RAND_MAX + 1.0);
    double u2 = (std::rand() + 1.0) / (RAND_MAX + 1.0);

    return sqrt(-2.0 * log(u1)) * cos(2.0 * pi * u2);
}

void BSModel::generate_sample_path(double T, int N, SamplePath& sample_path)
{
    double S_t = S_0;
    for (int k=0; k<N; k++)
    {   
        sample_path[k] = S_t * exp((r - sigma*sigma*0.5)*(T/N) + sigma * sqrt(T/N) * gauss_sample());
        S_t = sample_path[k];
    }
}