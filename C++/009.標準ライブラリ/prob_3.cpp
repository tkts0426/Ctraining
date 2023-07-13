#include<iostream>


int main(){

    int i = 0;
    std::cout << i << std::endl;

    [&i] (int a){
        i = a;
    }(3);

    std::cout << i << std::endl;

    auto f = [&i]() { ++i; };

    f();
    f();
    f();

    std::cout << i << std::endl;

    return 0;
}