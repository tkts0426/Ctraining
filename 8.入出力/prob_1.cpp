#include<iostream>
#include<string>
#include<fstream>

int main(){

    int n = 1000;
    std::ofstream outfile("numbers.dat", std::ios_base::out);

    for (int i = 1; i <= n; i++){
        outfile << i << "\n";
    }


    return 0;
}