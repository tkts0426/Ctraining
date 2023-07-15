#include <iostream>

// 自作関数
// #include "solver.h"
#include "solver_v2.h"

// double f1(double x) {return x*x - 2;}
// double df(double x) {return 2*x;}

class NewFunction : public Function
{
    public:
        double value(double x) {return x*x - 2;}
        double deriv(double x) {return  2*x;}
} func_1;

class NewFunctionV2 : public Function
{
private:
    double a;

public:
    // constructor
    NewFunctionV2(double a_) {a = a_;}

    double value(double x) {return x*x - a;}
    double deriv(double x) {return 2*x;}

} func_2(3.0);

int main(){
    
    double threshold = 0.001;
    double l_side = 0.0; double r_side = 2.0;
    double target = 0.0;

    std::cout << "root of func_1 by bisection: "
              << solver_bisection(&func_1, target, l_side, r_side, threshold)
              << std::endl;

    double guess = 1.0;
    std::cout << "root of func_2 by Newton-Raphson method"
              << solver_newton_raphson(&func_2, target, guess, threshold)
              << std::endl;
              
    return 0;

}