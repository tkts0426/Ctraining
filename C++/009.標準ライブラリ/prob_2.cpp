#include<algorithm>
#include<iostream>
#include<vector>
#include<set>

void printSet(std::set<int> &s){
    std::cout << "size = " << s.size() << std::endl;
    for(std::set<int>::iterator it = s.begin(); it != s.end(); ++it){
        std::cout << *it << ", ";
    }
    std::cout << std::endl << std::endl;
}

int main(){

    std::vector<int> v0{0,1,2,1,0,2,1};
    std::vector v1 = v0;
    // std::sort(v1.begin(), v1.end());
    // v1.erase(unique(v1.begin(), v1.end()), v1.end());

    // for (auto i : v1) std::cout << i << ", ";
    // std::cout << std::endl;

    std::set<int> st(v0.cbegin(), v0.cend());
    std::vector<int> v2(st.cbegin(), st.cend());
    for (auto i : v2){
        std::cout << i;
    }
    std::cout << std::endl;



    return 0;
}