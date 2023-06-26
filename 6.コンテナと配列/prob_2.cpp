#include<iostream>
#include<unordered_map>
#include<string>

using person = std::pair<std::string, int>;

// // hirano's answer
// std::string hash(person pochi){
//     return pochi.first;
// }

namespace std{
    template<>
    struct hash<person>{
        size_t operator()(const person& p) const{
            size_t h_1 = hash<string>() (p.first);
            size_t h_2 = hash<int>() (p.second);
            return h_1 ^ h_2;
        }
    };
}
int main(){

    std::unordered_map<std::string, int> people;
    auto taro = std::make_pair("taro", 32);
    // people[hash(taro)] = 100;

    people[taro] = 100;

    std::cout << people[taro] << std::endl;

    return 0;
}
