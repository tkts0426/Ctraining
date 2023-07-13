#include<iostream>
#include<string>
#include<fstream>

int main(){

    std::ifstream infile("numbers.dat");

    int total = 0;
    std::string line_number;
    while(getline(infile, line_number)){
        total += stoi(line_number);
    }
    std::cout << total << std::endl;
    infile.close();
    
    return 0;
}