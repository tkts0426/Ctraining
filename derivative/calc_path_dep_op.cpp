#include <iostream>
#include <cmath>

#include "calc_path_dep_op.h"

double PathDepOption::pricing_by_mc(BSModel model, long M)
{
    double H = 0.0; 
    SamplePath sample_path(N);

    for (long i=0; i<M; i++)
    {
        model.generate_sample_path(T, N, sample_path);
        H = (i*H + payoff(sample_path)) / (i + 1.0);
    }
    return exp(-model.r * T) * H;
}

double ArthmAsianCall::payoff(SamplePath& sample_path)
{
    double ave = 0.0;
    for (int k=0; k < N; k++) ave = (k * ave + sample_path[k]) / (k + 1.0);
    
    if (ave < K) return 0.0;

    return ave - K;
}