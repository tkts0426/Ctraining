#include<iostream>

// unsignedとintの比較では，unsigned に i が引っ張られるので，for文の中の不等式でFalse担ってしまう
int main(){
    int end = 10; 
    
    for (int i=-10; i <= end; ++i){

        std::cout << i << std::endl;

    }
    return 0;
}