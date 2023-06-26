#include<iostream>
#include<string>

int main(){

    std::string str_1 = "Hello, world!";
    str_1.replace(7, 5, "Nippon");
    std::cout << str_1 << std::endl;

    char cstr[] = "Hello";
    std::cout << &cstr << std::endl;
}