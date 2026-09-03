#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

std::vector<int> numbers;
std::vector<std::string> names {"Ксения", "Аврора", "Мария", "Ольга"};
std::map<std::string, int> peoples;

int main(){

    //задание 1
    for (int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }

    for (int i = 0; i <= numbers.size(); i++){
        std::cout << numbers[i] << "\t";
    }std::cout << std::endl;

    std::cout << "Размер вектора - " << numbers.size() << std::endl;

    numbers.pop_back();

    std::cout << "Размер вектора после удаления из него последнего элемента - " << numbers.size() << std::endl;

    //задание 2
    for(std::vector<std::string>::iterator iterator = names.begin(); iterator != names.end(); iterator++){
        std::cout << *iterator << "\t";
    }std::cout << std::endl;

    for (auto& name : names){
        std::cout << name << "\t";
    }std::cout << std::endl;

    names.push_back("Алиса");

    for (auto& name : names){
        std::cout << name << "\t";
    }std::cout << std::endl;

    //задание 3
    peoples["Сергей"] = 18;
    peoples["Родион"] = 20;
    peoples["Антон"] = 25;
    peoples["Иван"] = 10;
    peoples["Билли"] = 19;
    
    for(auto iterator = peoples.begin(); iterator != peoples.end(); iterator++){
        std::cout << iterator->first << "\t" << iterator->second << std::endl;
    }
    std::string name;
    std::cout << "Какой у вас имя? Введите: "; std::cin >> name;
    std::cout << name << "\t" << peoples[name] << std::endl;

    {
        std::vector<int> numbers{3552, 24, 2, 42, 5, 224, 1, 33};
        std::sort(numbers.begin(), numbers.end());
        for (int& number : numbers){
            std::cout << number << "\t";
        }std::cout << std::endl;
    }

    return 0;
}