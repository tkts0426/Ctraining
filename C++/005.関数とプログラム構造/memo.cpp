#include<iostream>
#include<string>

void f1(int x){
    std::cout << ++x << std::endl;
}
void f2(const int x){
    std::cout << x+1 << std::endl;
}
void f3(int& x){
    std::cout << ++x << std::endl;
}
void f4(const int& x){
    std::cout << x + 1 << std::endl;
}
void f5(int&& x){
    std::cout << ++x << std::endl;
}
void f6(const int&& x){
    std::cout << x + 1 << std::endl;
}
void f7(int *x){
    std::cout << ++(*x) << std::endl;
}
void f8(const int *x){
    std::cout << (*x) + 1 << std::endl;
}

// void myswap(int& a, int& b){
//     int tmp = a;

//     a = b;
//     b = tmp;    
// }
template <typename T>
void myswap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}

int main(){
    
    int a = 1;
    int b = 2;

    myswap(a, b);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}