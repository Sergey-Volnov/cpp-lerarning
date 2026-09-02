#include <iostream>
using namespace std;

void print(const string& s){
    cout << s << endl;
}
int max(const int& num1, const int& num2){
    if (num1 > num2) return num1;
    return num2;
}

int global = 5;

int main(){

    int local = 1;

    {//задание 1
        const string name = "Sergey";
        print(name);
        int num1 = 5, num2 = 2;
        cout << "Max - " << max(num1, num2) << endl;
    }

    {//задание 2
        char arr[][20] {"aaaaa", "bbb", "cccc", "dd", "e"};
        for(const auto& s : arr){// случай 1
            cout << s << "\t";
        }cout << endl;

        for(auto s : arr){//случай 2
            cout << s << "\t";
        }cout << endl;

        /*
        Разница в том, что видимо тк в 1 случае используется константный указатель, создается указатель, который ссылается
        на элемент массива, а в случае 2 происходит новое создание переменной, но это лишь моя догадка и в чем разница для 
        меня не очень понятно, т к создается либо новая область памяти, либо указатель, который тоже новая область памяти.
        Я лишь дошел до начала функций на metanit, мб расскажут об этом позже там, но сейчас особую разницу на этом сайте
        не раскрыли.
        */
    }
    
    {//задание 3
        int local = 2;
        cout << "Local in {} - " << local << endl; //2
    }
    cout << "Local in \'main()\' - " << local << endl; //1
    cout << "global in \'main\' - " << global << endl; //5
}