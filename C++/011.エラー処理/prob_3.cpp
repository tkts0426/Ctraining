#include<iostream>
#include<string>
#include<vector>
#include<cfenv>
#include<exception>
#include<unordered_map>
#include<climits>
#include <cassert>
#include<limits>
#include<algorithm>

void report_fexcept(){
    if (std::fetestexcept(FE_DIVBYZERO)) std::cout << "FE_DIVBYZERO \n";
    if (fetestexcept(FE_INEXACT)) std::cout << "FE_INEXACT \n";
    if (fetestexcept(FE_OVERFLOW)) std::cout << "FE_OVERFLOW \n";
    if (fetestexcept(FE_UNDERFLOW)) std::cout << "FE_UNDERFLOW \n";
    if (fetestexcept(FE_INVALID)) std::cout << "FEINVSLID \n";
    feclearexcept(FE_ALL_EXCEPT);
    std::cout << std::endl;
}

template<typename T>
size_t binarySearch(T key, const std::vector<T>& vec){

    if(!std::is_sorted(vec.cbegin(), vec.cend())){
        throw std::runtime_error("Exceptional Error : not sorted");
    }
    int n = vec.size();
    int low = 0;
    int high = n-1;
    int mid;

    while(low <= high){
        // mid = (low + high) / 2;
        mid = low + (high - low) / 2;
        std::cout << low << ", " << mid << ", " << high << std::endl;
        assert(low <= mid && mid <= high);

        if (key <= vec[mid]) high = mid - 1;
        else if (key > vec[high]) low = mid + 1;
        else return mid;
    }
    return n;
}

int main(){

    try{
        int n = std::numeric_limits<int>::max() / 2 + 2;
        std::vector<int> v(n);
        int target = 1;
        size_t pos = binarySearch(target, v);
        if (pos == v.size()){
            std::cout << "not find \n"; 
        }else{
            assert(v[pos] == target);
            std::cout << v[pos] << std::endl;
        }
    }catch(std::exception& e){
        std::cerr << e.what() << std::endl;
    }

    return 0;
}