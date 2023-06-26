#include<iostream>

// void myReverse(int* a, int* fin_a){

//     size_t n = fin_a - a;
//     if (n == 1) {
//         // do nothing
//     }else{
//         int b[] = a;
//         for (size_t i=0; i < n; i++){
            
//             a[i] = a[n-i];
//         }
//     }

// }

// answer
template<typename T>
void myReverse(T a, T fin_a){
    while(a < fin_a){
        --fin_a;
        auto tmp = *fin_a;
        *fin_a = *a;
        *a = tmp;
        ++a;
    }
}

int main(){

    int a[] = {2, 9, 4, 1, 5, 3};
    myReverse(a, std::end(a));
    for (auto i : a) std::cout << i << ", ";
    std::cout << std::endl;

    int b[] = {3};
    myReverse(b, std::end(b));
    for (auto i : b) std::cout << i << ", ";
    std::cout << std::endl;
    // std::cout << std::end(b) - b << std::endl;
}