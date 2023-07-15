#include <iostream>
#include <cmath>

#include "calc_euro_type_op.h"


double N(double x){

    double gamma = 0.2316419;
    double a_1 = 0.319381530; double a_2 = -0.356563782;
    double a_3 = 1.781477937; double a_4 = -1.821255978;
    double a_5 = 1.330274429;

    double pi = 4.0 * atan(1.0);
    double k = 1.0 / (1.0 + gamma*x);

    if (x >= 0.0){
        return 1.0 - (a_1 + k*(a_2 + k*(a_3 + k*(a_4 + a_5*k)))) * k * exp(-x*x / 2.0) / sqrt(2.0 * pi);
    }
    else return 1.0 - N(-x);
}

double EuroCall::d_plus(double S_0, double sigma, double r){

    return (log(S_0 / K) + (r + 0.5 * pow(sigma, 2.0))*T) / (sigma*sqrt(T));
}

double EuroCall::d_minus(double S_0, double sigma, double r){

    return d_plus(S_0, sigma, r) - sigma*sqrt(T);
}

double EuroCall::pricing_by_BS(double S_0, double sigma, double r){

    return S_0 * N(d_plus(S_0, sigma, r)) - K * exp(-r * T) * N(d_minus(S_0, sigma, r));
}

double EuroCall::vega_by_BS(double S_0, double sigma, double r){
    
    double pi = 4.0 * atan(1.0);
    
    return S_0 * exp(-d_plus(S_0, sigma, r) * d_plus(S_0, sigma, r) / 2.0) * sqrt(T) / sqrt(2.0 * pi);
}

