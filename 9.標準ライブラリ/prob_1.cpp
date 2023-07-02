#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

template<typename T>
void myReverse(T initial, T final){
    while(initial < final){
        std::swap(*(initial++), *(--final));
    }
}

int main(){

    int a[] = {2,9,4,1,5,3};
    myReverse(a, std::end(a));
    for (auto i : a){
        std::cout << i;
    }
    std::cout << std::endl;


    double b[] = {3.5};
    myReverse(b, std::end(b));
    for (auto i : b){
        std::cout << i;
    }
    std::cout << std::endl;

    std::vector<int> c;
    myReverse(c.begin(), c.end());
    for (auto i : c){
        std::cout << i;
    }
    std::cout << std::endl;


    return 0;
}