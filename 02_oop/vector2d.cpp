#include <iostream>
using namespace std;

class Vector2D{
    public:
    int x, y;

    Vector2D(int x = 0, int y = 0): x(x), y(y){}

    void print(){
        cout <<"(" << x << ", " << y << ')' <<  endl;
    }

    Vector2D operator + (const Vector2D& vector) const {
        return Vector2D(x + vector.x, y + vector.y);
    }

    bool operator ==(const Vector2D& vector) const {
        if (x != vector.x || y != vector.y) return false;
        return true;
    }
};

ostream& operator << (ostream& stream, const Vector2D& vector){
    stream << "(" << vector.x << ", " << vector.y << ')';
    return stream;
}

int main(){
    Vector2D v1 = Vector2D(1, 2);
    Vector2D v2 = Vector2D(3, 4);

    cout << v1 << " + " << v2 << " = " << v1 + v2 << endl;

    if (v1 == v2)
        cout << v1 << " == " << v2 << endl;
    else
        cout << v1 << " != " << v2 << endl;
    
    return 0;
}