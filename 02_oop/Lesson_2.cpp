#include <iostream>
using namespace std;

class Rectangle{
    public:
    void setWidth(double w){
        width = w;
    }

    void setHeight(double h){
        height = h;
    }

    double area(){
        return width * height;
    }

    double perimeter(){
        return (height + width) * 2;
    }

    Rectangle(double w = 0, double h = 0): width(w), height(h){ }

    private:
    double width;
    double height; 
};

class Student{
    private:
    int age;
    std::string name;
    public:
    Student(int a = 18, std::string n = "Undefined"): age(a), name(n){ }

    void setName(const std::string &n){
        name = n;
    }
    void setAge(int a){
        age = a;
    }
    std::string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
};

class Test{
    public:
    Test(){
        cout << "Object created\n";
    }
    ~Test(){
        cout << "Object deleted\n";
    }
};

class Point{
    public:
    int x, y;
    Point(int x, int y): x(x), y(y){}
    void print(){
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main(){
    /*Rectangle rec1;
    {
        double h1, w1; cout << "Введите высоту 1 прямоугольника: "; cin >> h1; cout << "Введите длину 1 прямоугольника: "; cin >> w1;
        rec1.setHeight(h1);
        rec1.setWidth(w1);
    }
    
    Rectangle rec2(5, 10);
    
    cout << "Площадь первого прямоугольника - " << rec1.area() << ";\tПериметр первого прямоугольника - " << rec1.perimeter() << ";\n";
    cout << "Площадь первого прямоугольника - " << rec2.area() << ";\tПериметр первого прямоугольника - " << rec2.perimeter() << ";\n";

    Student student1;{
        int age; std::string name;
        cout << "Введите имя студента 1: "; cin >> name; cout << "Введите возраст 1 студента: "; cin >> age;
        student1.setAge(age);
        student1.setName(name);
    }
    Student student2(18, "Ivan");

    Student student3;{
        int age; std::string name;
        cout << "Введите имя студента 3: "; cin >> name; cout << "Введите возраст 3 студента: "; cin >> age;
        student3.setAge(age);
        student3.setName(name);
    }
    cout << "Студент 1: возраст: " << student1.getAge() << ", имя: " << student1.getName() << endl;
    cout << "Студент 2: возраст: " << student2.getAge() << ", имя: " << student2.getName() << endl;
    cout << "Студент 3: возраст: " << student3.getAge() << ", имя: " << student3.getName() << endl;

    {
        Test test;
    }*/

    Point* point = new Point(2, 4);
    point->print();
    delete point;
    point = nullptr;

    Student* students = new Student[3];
    students[0] = Student(18, "Ivan");
    students[1] = Student(19, "Dmitry");
    students[2] = Student(19, "Sergey");
    for (int i = 0; i < 3; i++){
        cout << "Name: " << students[i].getName() << "\tAge: " << students[i].getAge() << endl;
    }
    delete[] students;
    students = nullptr;

    return 0;
}