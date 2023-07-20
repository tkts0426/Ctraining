#ifndef CalcPathDepOption_h
#define CalcPathDepOption_h

#include "model.h"

class PathDepOption
{
public:
    double T; // expiry
    int N;    // the number of samples

    double pricing_by_mc(BSModel model, long M);
    virtual double payoff(SamplePath& sample_path)=0;
};

class ArthmAsianCall: public PathDepOption
{
public:
    // set strike price
    double K;

    // constructor
    ArthmAsianCall(double T_, double K_, int N_)
    {
        T = T_; K = K_; N = N_;
    }
    double payoff(SamplePath& sample_path);
};

#endif