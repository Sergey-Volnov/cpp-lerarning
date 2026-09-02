#include <iostream>
using namespace std;

class Animal{
    public:
    string name;
    Animal(string name) : name(name) {}
    virtual void speak() const = 0;
};

class Dog : public Animal{
    public:
    Dog(string name) : Animal(name) {}
    void speak() const override {
        cout << "Woof\n";
    }
};

class Cat : public Animal{
    public:
    Cat(string name) : Animal(name) {}
    void speak() const override {
        cout << "Meow\n";
    }
};

int main(){
    //Animal animal;
    Cat cat = Cat("Murzic");
    Dog dog = Dog("Sharic");
    return 0;
}