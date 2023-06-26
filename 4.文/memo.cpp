#include<iostream>
#include<iomanip> // setw()のために必要

int main(){

    // 短い処理（１文）なら，｛｝は使わなくて良さそう？社内ルールによるのかな
    // int a = 10;
    // if (a % 2 == 1) std::cout << "OK" << std::endl;
    // else std::cout << "not OK" << std::endl;

    // const int N = 9;
    // for (int i=1; i<=N; i++){
    //     for (int j=1; j<=N; j++){
    //         std::cout << std::setw(3) << i*j;
    //     }
    //     std::cout << std::endl;
    // }

    int i =0;
    while (++i < 5) std::cout << "hello world" << std::endl;

    return 0;
}