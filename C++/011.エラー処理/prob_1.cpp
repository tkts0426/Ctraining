#include<iostream>
#include<string>
#include<vector>
#include<cfenv>
#include<exception>
#include<unordered_map>

int main(){

    std::unordered_map<std::string, int> dic{ {"one", 1}, {"two", 2}, {"three", 3}};
    
    std::string  target = "four";
    try{
        std::cout << dic.at(target) << std::endl;
    }
    catch (std::out_of_range& e){
        std::cerr << e.what() << std::endl;
    }
    // std::cout << dic[target] << std::endl;
    std::cout << "pass" << std::endl;

    return 0;
}