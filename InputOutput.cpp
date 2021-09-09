#include <iostream>
#include <Windows.h>
using namespace std;
float number1;
float number2;
float sum;
float difference;
float average;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите первое число: ";
    cin >> number1;
    cout <<endl << "Введите второе число: ";
    cin >> number2;
    
    sum = number1 + number2;
    cout << endl << "Сумма чисел равна: "<< sum;

    return(0);
}
