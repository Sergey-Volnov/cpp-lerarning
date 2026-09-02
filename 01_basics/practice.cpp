#include <iostream>
using namespace std;

void doubleValue(int& x) {
    x = x * 2;
}

int main() {
    int a = 7;
    doubleValue(a);
    cout << a << endl;
    return 0;
}
