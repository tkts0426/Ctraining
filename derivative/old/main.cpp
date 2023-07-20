#include <iostream>

// 自作関数
#include "calc_euro_type_op.h"
#include "solver.h"

class Intermediary: public EuroCall{

private:
    double S_0, r;

public:
    // constructor
    Intermediary(double S_0_, double r_, double T_, double K_): EuroCall(T_, K_) { S_0 = S_0_, r = r_; }

    double value(double sigma)
    {
        return pricing_by_BS(S_0, sigma, r);
    }
    double deriv(double sigma)
    {
        return vega_by_BS(S_0, sigma, r);
    }
};

int main()
{
    double S_0 = 100.0;
    double r = 0.1;
    double T = 1.0;
    double K = 100.0;
    Intermediary Call(S_0, r, T, K); // black price

    double threshold = 0.01;
    double l_side = 0.01, r_side = 1.0;
    double target = 12.56; // market price
    double guess = 0.23;
    std::cout << "Implied volatility by Newton-Raphson method: "
              << solver_newton_raphson(&Call, target, guess, threshold)
              << std::endl;

    return 0;
}