#include<iostream>
#include<regex>

int main(){

    std::string str = "my address is 194-0013, but her addres is 153-0042";
    // std::regex rx(R"(\d{3}-\d{4})");
    // std::regex rx_(R"(-)");

    // std::sregex_iterator it(str.begin(), str.end(), rx);
    // std::sregex_iterator end;
    // while (it != end){
    //     std::string str_ = (it++) -> str();
    //     std::sregex_token_iterator it_(str_.begin(), str_.end(), rx_, -1);
    //     std::sregex_token_iterator end_;
    //     while (it_ != end_){
    //         std::cout << *it_++ << std::endl;
    //     }
    // }

    std::regex rx(R"(\d+)");
    std::sregex_iterator it(str.begin(), str.end(), rx);
    std::sregex_iterator end;
    while (it != end){
        std::cout << (it++ -> str()) << std::endl;
    }

    return 0;
}