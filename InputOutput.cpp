#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
float number1;
float number2;
float sum;
float difference;
float average;
float product;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите первое число: ";
    cin >> number1;
    cout <<endl << "Введите второе число: ";
    cin >> number2;
    
    sum = number1 + number2;
    cout << endl << "Сумма чисел равна: "<< sum;
    
    difference = number1 - number2;
    cout << endl<< endl << "При вычитании из первого числа второго получим: "<< difference;
    
    average = (abs(number1) + abs(number2)) / 2;
    cout << endl << endl << "Среднее арифметическое модулей чисел равно: "<<average;
    
    product = number1 * number2;
    cout << endl << endl << "Произведение чисел равно: "<< product;

    return(0);
}
