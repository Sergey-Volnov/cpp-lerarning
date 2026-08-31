#include <iostream>
#include <cmath>
#include <iterator>
using namespace std;

long long factorial(int num)
{
    long long temp = 1;
    for (int i = 1; i <= num; i++){
        temp = temp * i;
    }
    return temp;
}

int max(int a, int b){
    if (a >= b){
        return a;
    }
    return b;
}

double power(double base, int exp){
    double temp = 1;
    for (int i = 1; i <= exp; i++){
        temp = temp * base;
    }
    return temp;
}

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void swap20(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap21(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

 int main(){
    { //задача 1
        string name; int age; double height;
        cout << "Input name: "; getline(cin, name);
        cout << "Input age: "; cin >> age;
        cout << "Input height (float number): "; cin >> height;
        cout << "Name - " << name << "; Age - " << age << "; Height - " << height;
    }

    { //задача 2
        int num1, num2;
        cout << "Введите два числа: "; cin >> num1 >> num2;
        cout << "Сумма - " << num1 + num2 << "; Произведение - " << num1 * num2 << "; Частное - " << num1/num2 << "; Разность - " << num1 - num2 << endl;
    }

    {//задача 3
        int num;
        cout << "Введите число: "; cin >> num;
        cout << "Последняя цифра числа - " << num % 10 << "; Целая часть от деления на 2 - " << num / 2 << endl;
    }

    {//задача 4
        int weight, height;
        cout << "Введите ширину прямоугольника: "; cin >> weight;
        cout << "Введите длину прямоугольника: "; cin >> height;
        cout << "P = " << (weight + height) * 2 << "; S = " << weight * height;
    }

    {//задача 5
        int age;
        cout << "Введите свой возраст: "; cin >> age;
        if (age <= 0){
            cout << "Некорректный возраст";
        }
        else if (age < 12){
            cout << "Ребенок\n";
        }
        else if(age <= 17){
            cout << "Подросток";
        }
        else if(age <= 64){
            cout << "Взрослый";
        }
        else{
            cout << "Пенсионер";
        }
    }

    {//задача 6
        int num;
        cout << "Введите число: "; cin >> num;
        if(num % 2 == 0){
            cout << "Число " << num << " - четное";
        }
        else{
            cout << "Число " << num << " - нечетное";
        }
        if(num > 0){
            cout << "Число " << num << " - положительное";
        }
        else{
            cout << "Число " << num << " - отрицательное";
        }
        if(num % 3 == 0){
            cout << "Число " << num << " - кратно трем";
        }
        else{
            cout << "Число " << num << " - не кратно трем";
        }
    }

    {//задача 7
        int num1, num2, num3;
        cout << "Введите три числа: "; cin >> num1 >> num2 >> num3;
        if (num1 >= num2 && num1 >= num3){
            cout << "Максимальное число - " << num1;
        }
        else if (num2 >= num1 && num2 >= num3){
            cout << "Максимальное число - " << num2;
        }
        else{
            cout << "Максимальное число - " << num3;
        }
    }

    {//Задача 8: 
        for (int num = 0; num <= 100; num++){
            if (num % 15 == 0){
                cout << "FizzBuzz\n";
            }
            else if (num % 3 == 0){
                cout << "Fizz\n";
            }
            else if (num % 5 == 0){
                cout << "Buzz\n";
            }
            else{
                cout << num << endl;
            }

        }
    }

    {//Задача 9:
        int num;
        cout << "Введите число, факториал которого хотите посчитать: "; cin >> num;
        cout << "Факториал " << num << " = " << factorial(num); 
    }

    {//задача 10
        for (int i = 1; i <= 10; i++){
            for (int j = 1; j <= 10; j++){
                cout << i*j << "\t";
            }
            cout << endl;
        }
    }

    {//задача 11
        int num1, num2;
        cout << "Введите два числа: "; cin >> num1 >> num2;
        cout << "Максимальное число - " << max(num1, num2) << endl;
    }
    
    {//задача 12
        int num1, num2;
        cout << "Введите два числа (1 - число, 2 - степень): "; cin >> num1 >> num2;
        cout << num1 << "^" << num2 << " = " << power(num1, num2) << endl;
    }

    {//задача 13
        for (int i = 1; i <= 100; i++){
            if (isPrime(i)){
                cout << i << "\t";
            }
        }
        cout << endl;
    }

    {//задача 14
        int array[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum = 0, max = array[0], min = array[0]; 
        for (int n : array){
            if (n > max)
                max = n;
            if (n < min)
                min = n;
            sum += n;
        }
        cout << "Максимальный элемент массива - " << max << endl;
        cout << "Минимальный элемент массива - " << min << endl;
        cout << "Сумма элементов массива - " << sum << endl;
    }

    {//задача 15
        int arr1[3] {1, 2, 3}, arr2[std::size(arr1)]{};
        for (int i = std::size(arr1) - 1; i >= 0; i--){
            arr2[std::size(arr2) - 1- i] = arr1[i];
        }
        cout << "Исходный массив: - "; for(int n : arr1){ cout << n << "\t";} cout << endl;
        cout << "Перевернутый массив: - "; for(int n : arr2){ cout << n << "\t";} cout << endl;
    }

    {//задание 16 - 18
        std::string string;
        cout << "Введите строку: "; getline(cin, string);
        cout << "Длина строки - " << size(string) << endl;
        if (size(string) != 0){
            int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
            for (char n : string){
                if((n == 'A') || (n == 'a'))
                    countA++;
                else if((n == 'e') || (n == 'E'))
                    countE++;
                else if((n == 'u') || (n == 'U'))
                    countU++;
                else if((n == 'i') || (n == 'I'))
                    countI++;
                else if((n == 'o') || (n == 'O'))
                    countO++;
            }
            cout << "Первый символ - " << string[0] << endl;
            cout << "Последний символ - " << string[size(string) - 1] << endl;
            cout << "Перевернутая строка - "; for(int i = size(string) - 1; i >= 0; i--) { cout << string[i];} cout << " \n";
            cout << "Ков-во \'a\' в строке - " << countA << endl;
            cout << "Ков-во \'e\' в строке - " << countE << endl;
            cout << "Ков-во \'o\' в строке - " << countO << endl;
            cout << "Ков-во \'i\' в строке - " << countI << endl;
            cout << "Ков-во \'u\' в строке - " << countU << endl;
        }
        else {
            cout << "Строка пустая, поэтому у нее нет ни первого ни последнего элементов ни букв \'a\', \'e\', \'i\', \'o\', \'u\', а также в перевернутом состоянии она такая же пустая";
        
        }
    }

    {//задание 19
        int x = 10;
        int *px = &x;
        cout << "Переменная x до измененния значения указателя = " << x << endl;
        *px = 20;
        cout << "Переменная x после изменения значения указателя = " << x << endl;
        cout << "Указатель *px = " << px << endl;
    }

    {//задание 20
        int a, b;
        cout << "Введите 2 числа: "; cin >> a >> b;
        cout << "Ваши числа до применения функции swap(int &a, int &b): a = " << a << " b = " << b << endl;
        swap20(a, b);
        cout << "Ваши числа после применения функции swap(int &a, int &b): a = " << a << " b = " << b << endl;
    }
    
    {//задание 21
        int a, b;
        cout << "Введите 2 числа: "; cin >> a >> b;
        cout << "Ваши числа до применения функции swap(int *a, int *b): a = " << a << " b = " << b << endl;
        swap21(&a, &b);
        cout << "Ваши числа после применения функции swap(int *a, int *b): a = " << a << " b = " << b << endl;
    }

    return 0;
 }