#include<iostream>

int main(){

    // auto. meemory
    // int a[5];
    // int b[] = {2,3,4,5,6,7,8};
    // size_t n = std::end(b) - std::begin(b); //最列の長さ
    // std::cout << std::end(b) << std::endl;

    // free store
    size_t n = 5;
    int *a = new int[n] {2,3,4,5,6};

    std::cout << a << std::endl;

    delete[] a;

    return 0;
}