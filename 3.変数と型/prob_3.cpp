#include<iostream>
#include<complex>
#include<memory>


int main(){
    
    using cplx = std::complex<double>;
    std::shared_ptr<cplx> p = std::make_shared<cplx> (5, 10);

    std::cout << abs(*p) << std::endl;
    
    return 0;
}