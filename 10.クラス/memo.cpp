#include<iostream>
#include<string>
#include<vector>

class Person{
// private:
//     std::string name;
//     int age;

// 継承クラスからのアクセスが可能に（関数をもちいて）
protected:
    std::string name;
    int age;

public:

    Person(const std::string& newName, int newAge) : 
        name(newName), age(newAge) {}

    void eat() {std::cout << name << ":eat()\n";}
    // 同じ名前で継承クラスが関数をつける際に必要
    virtual void show() {std::cout << name << "(" << age << ")\n";}
};


class Student : public Person{
private:
    int id;

public:
    Student(const std::string& newName, int newAge, int newId) : Person(newName, newAge), id(newId) {}

    void study() { std::cout << id << ": study()"; }
    void show() override { std::cout << id << ":" << name << "(" << age << ")\n"; }
};

int main(){

    // std::string x = "hirano";
    // std::string&& target = std::move(x);

    // std::cout << &x << std::endl;
    // std::cout << &target << std::endl;

    Person t("takatoshi", 25);

    Student n("nanako", 24, 775);

    std::vector<Person*> people = {&t, &n};
    for (auto p : people){
        p -> show();
    }

    return 0;
}