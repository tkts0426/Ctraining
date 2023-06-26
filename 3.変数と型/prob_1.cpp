#include<iostream>
#include<complex>

int main(){
    
    std::cout << "文字リテラル : (^_^)" << std::endl;
    std::cout << R"XXX(生文字リテラル : (^_^) )XXX" << std::endl;

    std::cout << "文字リテラル : \{^_^\}" << std::endl;
    std::cout << R"XXX(生文字リテラル : \{^_^\} )XXX" << std::endl;
    
    return 0;
}