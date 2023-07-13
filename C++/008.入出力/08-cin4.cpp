#include<iostream>

int main(){
    std::cout << "整数を入力してください \n";
    int total = 0;
    int n;
    while(std::cin >> n){
        total += n;
    }
    std::cout << total << std::endl;
}