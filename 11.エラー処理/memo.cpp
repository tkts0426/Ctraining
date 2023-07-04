#include<iostream>
#include<string>
#include<vector>
#include<cfenv>
#include<exception>


void report_fexcept(){
    if (std::fetestexcept(FE_DIVBYZERO)) std::cout << "FE_DIVBYZERO \n";
    if (fetestexcept(FE_INEXACT)) std::cout << "FE_INEXACT \n";
    if (fetestexcept(FE_OVERFLOW)) std::cout << "FE_OVERFLOW \n";
    if (fetestexcept(FE_UNDERFLOW)) std::cout << "FE_UNDERFLOW \n";
    if (fetestexcept(FE_INVALID)) std::cout << "FEINVSLID \n";
    feclearexcept(FE_ALL_EXCEPT);
    std::cout << std::endl;
}

int main(){

    double d;
    float f;

    d = 0;
    std::cout << 1.0 / d << std::endl;
    report_fexcept();

    std::vector<int> v{1,2,3};
    try{
        std::cout << v.at(4) << std::endl;
    }
    catch(std::out_of_range& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "pass" << std::endl;
    return 0;
}