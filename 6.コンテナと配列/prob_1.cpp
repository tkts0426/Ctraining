#include<iostream>
#include<vector>

int total(std::vector<std::vector<int>> vec){
    
    int total = 0;
    for (auto sub_vec : vec){
        for (auto val : sub_vec){
            total += val;
        }
    }

    return total; 
}

int main(){

    std::vector<std::vector<int>> m{{1,2,3}, {4,5,6}};

    std::cout << total(m) << std::endl;


    return 0;
}
