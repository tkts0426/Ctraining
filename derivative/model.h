#ifndef Model_h
#define Model_h

#include<vector>

// 略記の定義
typedef std::vector<double> SamplePath;

class BSModel
{
public:
    double S_0, r, sigma;
    
    // constructor
    BSModel(double S_0_, double r_, double sigma_)
    {
        S_0 = S_0_; r = r_; sigma = sigma_;
        
        // fix a seed
        std::srand(time(NULL));
    }
    void generate_sample_path(double T, int N, SamplePath& sample_path);
};



#endif