#include<iostream>
#include<string>
#include<regex>

int main(){

    std::string str_1 = "Hello, world!";
    str_1.replace(7, 5, "Nippon");
    std::cout << str_1 << std::endl;

    char cstr[] = "Hello";
    std::cout << &cstr << std::endl;

    std::regex rx(R"(\d{3}-\d{4})");
    std::string comment = "私は，333-0823ではなく，547-0071に住んでいます．";
    std::sregex_iterator it(comment.begin(), comment.end(), rx);
    std::sregex_iterator end;
    while(it != end){
        std::cout << (it++) -> str()  << std::endl;
    }
}