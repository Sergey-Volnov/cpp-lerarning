#include <iostream>
using namespace std;

class Shape{
    public:
    virtual double area() = 0;
    virtual ~Shape() {};
};

class Circle : public Shape{
    public:
    double radius;
    Circle(double r) : radius(r) {}
    ~Circle(){}
    double area(){
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape{
    public:
    double width, height;
    Rectangle(double width, double height) : width(width), height(height) {}
    double area(){
        return width * height;
    }
};

int main(){
    Shape* shapes[3];
    shapes[0] = new Circle(2);
    shapes[1] = new Rectangle(2, 5);
    shapes[2] = new Circle(1);


    for (int i = 0; i < 3; i++) {
        cout << "Area: " << shapes[i]->area() << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete shapes[i];
    }

    return 0;
}