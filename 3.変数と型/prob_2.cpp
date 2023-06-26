#include<iostream>
#include<complex>

int main(){
    
    unsigned a = 10;
    int b = 3;
    double z = 4.3;

    auto c = a + b;
    auto d = a + z;
    
    std::cout << typeid(a).name() << std::endl;
    std::cout << typeid(b).name() << std::endl;
    std::cout << typeid(c).name() << std::endl;
    std::cout << typeid(d).name() << std::endl;
    std::cout << typeid(z).name() << std::endl;
    
    return 0;
}