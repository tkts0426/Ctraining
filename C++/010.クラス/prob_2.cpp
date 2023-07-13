#include<iostream>
#include<vector>
#include<chrono>

class X{
public:
    std::vector<double> vec;

    X() = default;
    X(X&& x) noexcept : vec(x.vec) {}
    // X(const X& x) : vec(x.vec) {}
};

X f(){
    X x; 
    x.vec.resize(10000);

    return x;
}

int main(){
    std::chrono::system_clock::time_point t_0 = std::chrono::system_clock::now();
    for (int i=0; i < 1000; ++i) X x(f());
    std::chrono::system_clock::time_point t_1 = std::chrono::system_clock::now();
    // std::chrono::seconds s = std::chrono::duration_cast<std::chrono::seconds> (t_1 - t_0).count();

    std::cout << std::chrono::duration_cast<std::chrono::seconds> (t_1 - t_0).count() << std::endl;
}