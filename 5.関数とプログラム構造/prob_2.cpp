// prob_2, prob_3について
#include<iostream>
#include<string>

template <typename T>
void myswap(T* a, T* b){
    T tmp = *b;
    *b = *a;
    *a = tmp;
};

int main(){

    int a = 1;
    int b = 2;
    myswap(&a, &b);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    
    double c = 1.5;
    double d = 2.5;
    myswap(&c, &d);
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    
    std::string e = "taka";
    std::string f = "toshi";
    myswap(&e, &f);
    std::cout << e << std::endl;
    std::cout << f << std::endl;

    return 0;
}