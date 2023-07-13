#include<iostream>

int main(){

    std::cout << " | 0 1 2 3 4 5 6 7 8 9 A B C D E F\n";
    std::cout << "-|--------------------------------";
    
    char ch = 0x20;
    int row = 6;
    int col = 16;
    int N = row * col;

    int i = 0;
    int j = 2;
    while(i <= N){
        if (i % col == 0 && j-1 <= row) std::cout << "\n" << j++ << "|";
        std::cout << " " << ch++;
        i++;
    }

    return 0;
}