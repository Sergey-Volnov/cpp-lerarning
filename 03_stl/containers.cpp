#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include<numeric>
#include <memory>

std::vector<int> numbers;
std::vector<std::string> names {"Ксения", "Аврора", "Мария", "Ольга"};
std::map<std::string, int> peoples;

int main(){

    //задание 1
    for (int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }

    for (int i = 0; i < numbers.size(); i++){
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

    //задание 4
    {
        std::vector<int> numbers{3552, 24, 2, 42, 5, 224, 1, 33};
        std::sort(numbers.begin(), numbers.end());
        for (int& number : numbers){
            std::cout << number << "\t";
        }std::cout << std::endl;
        std::cout << "Max element: " << *std::max_element(numbers.begin(), numbers.end()) << std::endl;
        std::cout << "Min element: " << *std::min_element(numbers.begin(), numbers.end()) << std::endl;
        std::cout << "Sum vector's elemets: " << std::accumulate(numbers.begin(), numbers.end(), 0) << std::endl;
        if(std::find(numbers.begin(), numbers.end(), 5) == numbers.end())
        std::cout << "\'5\' нет в массиве" << std::endl;
    else
        std::cout << "\'5\' есть массиве" << std::endl;
    }
    
    //задание 5
    {
        std::vector<int> numbers{3552, 24, 2, 42, 5, 224, 1, 33};
        std::sort(numbers.begin(), numbers.end(), [](int x, int y) { return x > y; } );
        std::for_each(numbers.begin(), numbers.end(), [](int x) { std::cout << x << "\t"; } );
        std::cout << std::endl;
    }

    //задание 6
    {
        std::unique_ptr<int> ptr = std::make_unique<int>(10);
        std::cout << "ptr = " << *ptr << std::endl;
        std::unique_ptr<int> ptr2 = std::move(ptr);
        if(ptr == nullptr)
            std::cout << "Теперь ptr пустой" << std::endl;
        else
            std::cout << "ptr = " << *ptr << std::endl;
        std::cout << "ptr2 = " << *ptr2 << std::endl;
        std::shared_ptr<int> sptr1 = std::make_shared<int>(20);
        std::shared_ptr<int> sptr2 = sptr1;
        std::cout << "sptr1: adress = " << sptr1 << ",\t" << "value = " << *sptr1 << std::endl;
        std::cout << "sptr2: adress = " << sptr2 << ",\t" << "value = " << *sptr2 << std::endl;
    }

    return 0;
}