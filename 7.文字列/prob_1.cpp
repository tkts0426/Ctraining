#include<iostream>
#include<string>



int main(){

    std::string str = "Hello, World!";
    const char* cstr = str.c_str();
    
    // std::cout << cstr << std::endl;

    size_t n = std::end(str) - std::begin(str);
    std::cout << n << std::endl;
    for (size_t i = n-1; i != -1; --i){
        // std::cout << i << std::endl;
        std::cout << cstr[i];
    }
    std::cout << std::endl;

    return 0;
}
