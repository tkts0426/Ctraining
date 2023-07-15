#ifndef SolverV1_h
#define SolverV1_h

double solver_bisection(double (*func)(double x), double target, double l_side, double r_side, double threshold)
{
    double l = l_side; 
    double r = r_side; 
    double mid = (l_side + r_side) / 2;

    double y_l = func(l) - target;
    double y_mid = func(mid) - target;

    while(mid - l > threshold){
        if ((y_l > 0 && y_mid > 0) || (y_l < 0 && y_mid < 0)){
            l = mid;
            y_l = y_mid;
        }else{
            r = mid;
        }
        mid = (l + r) / 2;
        y_mid = func(mid) - target;
    }
    
    return mid;
}


#endif