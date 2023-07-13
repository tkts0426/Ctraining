#include<iostream>
#include<vector>
#include<chrono>
#include<algorithm>

class Person{
public:
    std::string name;
    int age;
    Person(const std::string newName, int newAge) : name(newName), age(newAge) {}

};
bool operator< (const Person& lhs, const Person& rhs) {
        return lhs.age <= rhs.age;
}

int main(){

    std::vector<Person> people;
    people.emplace_back("takatoshi", 25);
    people.emplace_back("nanako", 24);
    people.emplace_back("konomi", 3);

    sort(people.begin(), people.end());
    for (auto p : people) std::cout << p.name << "(" << p.age << ")" << std::endl;

}
