#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>

int main(){

    double x = 0.1;

    std::stringstream ss;
    ss << std::hexfloat << x;
    std::cout << ss.str() << std::endl;

    if (x == stod(ss.str())) std::cout << "match!!" << std::endl;
    else std::cout << "not match" << std::endl;


    return 0;
}