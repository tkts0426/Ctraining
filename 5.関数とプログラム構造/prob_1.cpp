#include<iostream>

int factorial(int n);

int main(){

    for (int n=1; n <= 15; ++n){
        std::cout << "f(" << n << ")= " << factorial(n) << std::endl;
    }

    return 0;
}

int factorial(int n){
    
    int prod = 1;

    for (int i=1; i <= n; i++){
        prod *= i;
    }

    return prod;
}