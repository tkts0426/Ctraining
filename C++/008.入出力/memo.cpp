#include<iostream>
#include<string>
#include<fstream>

int main(){

    // fileへの出力
    // std::ofstream outfile("test.dat", std::ios_base::out); 
    // outfile << "A 2 3 5\n";
    // outfile << "B 7 11 13\n";
    // outfile << "C 17 19 23";
    // outfile.close();

    // // fileからのインポート
    // std::ifstream infile("test.txt");
    // std::string line;

    // while(getline(infile, line)){
    //     std::cout << line << std::endl;
    // }
    // infile.close();
    // return 0;

    std::ifstream datafile("test.dat");
    std::string label;
    int x, y, z;
    while(datafile >> label >> x >> y >> z){
        std::cout << label << " : " << x + y + z << std::endl;
    }
    datafile.close();
}