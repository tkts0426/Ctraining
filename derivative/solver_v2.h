#ifndef SolverV2_h
#define SolverV2_h

class Function {
public:
    virtual double value(double x) = 0;
    virtual double deriv(double x) = 0;
};

double solver_bisection(Function* func, double target, double l_side, double r_side, double threshold)
{
    double l = l_side;
    double r = r_side;
    double mid = (l_side + r_side) / 2;

    double y_l = func->value(l) - target;
    double y_mid = func->value(mid) - target;

    while (mid - l > threshold) {
        if ((y_l > 0 && y_mid > 0) || (y_l < 0 && y_mid < 0)) {
            l = mid;
            y_l = y_mid;
        }
        else {
            r = mid;
        }
        mid = (l + r) / 2;
        y_mid = func->value(mid) - target;
    }

    return mid;
}

double solver_newton_raphson(Function* func, double target, double guess, double threshold)
{
    double x_prev = guess;
    double x = x_prev - (func -> value(x_prev) - target) / func -> deriv(x_prev);

    while(x - x_prev > threshold || x_prev - x > threshold){
        x_prev = x;
        x = x_prev - (func -> value(x_prev) - target) / func -> deriv(x_prev);
    }
    return x;
}

#endif