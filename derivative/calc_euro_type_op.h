#ifndef CalcEuroTypeOp_h
#define CalcEuroTypeOp_h

class EuroCall{

public:
    double T, K;
    
    // constructor
    EuroCall(double T_, double K_) {T = T_, K = K_;}
    
    double d_plus(double S_0, double sigma, double r);
    double d_minus(double S_0, double sigma, double r);
    
    double pricing_by_BS(double S_0, double sigma, double r);
    double vega_by_BS(double S_0, double sigma, double r);

};

#endif