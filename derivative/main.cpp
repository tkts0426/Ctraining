#include <iostream>

#include "calc_path_dep_op.h"

int main()
{
    double S_0=100.0, r=0.03, sigma=0.2;
    BSModel model(S_0, r, sigma);

    double T = 1.0 / 12.0, K = 100.0;
    int N=30;

    ArthmAsianCall option(T, K, N);

    long M=3000;
    std::cout << "Asian call option = "
              << option.pricing_by_mc(model, M) << std::endl;

    return 0;
}