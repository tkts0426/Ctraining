#include<iostream>
#include<string>

class Person {

public:
    std::string name;
    int age;

    // default constructor
    Person() { std::cout << "[constructor]" << std::endl; }

    // copy constructor_1
    // Person(const std::string& newName, int newAge){
    //     std::cout << "copy" << std::endl;
    //     name = newName;
    //     age = newAge;
    // }
    // // copy constructor_2
    // Person(const Person& x){
    //     std::cout << "copy" << std::endl;
    //     name = x.name;
    //     age = x.age;
    // }
    
    // copy constructor
    Person(Person& x) : name(x.name), age(x.age) { std::cout << "[copy]" << std::endl;}
    
    // distrucctor
    ~Person(){}
    
    // move constructor
    Person(Person&& x) noexcept : name(x.name), age(x.age) { std::cout << "[move]" << std::endl; }
    
    // copy operator
    Person& operator = (const Person& x){
        std::cout << "[assign]" << std::endl;
        if (this != &x){
            name = x.name;
            age = x.age;
        }
        return *this;
    }

};
Person f(){
    Person masato;
    masato.name = "Masato";
    masato.age = 0;

    return masato;
}

int main(){

    //case 1
    Person taro;
    taro.name = "Taro";
    taro.age = 32;
    std::cout << taro.name << " " << taro.age << std::endl;
    std::cout << "*****************************************"<< std::endl;

    // case 2
    Person A(taro);
    std::cout << A.name << " " << A.age << std::endl;
    std::cout << "*****************************************"<< std::endl;

    // case 3
    Person B;
    B = taro;
    std::cout << B.name << " " << B.age << std::endl;
    std::cout << "*****************************************"<< std::endl;

    // case 4
    Person C(f());
    std::cout << C.name << " " << C.age << std::endl;
    std::cout << "*****************************************"<< std::endl;


    return 0;
}