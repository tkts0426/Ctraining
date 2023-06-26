#include<iostream>

int main(){
    
    int i = 0;
    start:
        if (i++ == 10) goto end;
        std::cout << i << std::endl;
        goto start;
    end:
        ;
    return 0;
}