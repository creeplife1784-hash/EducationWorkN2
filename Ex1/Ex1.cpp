
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "Hello World!" << endl;

    while (true) {
        cout << "Введите число: ";
        cin >> number;

        if (number > 0) { break; }
        else { cout << "Введено некоректное число!"; }
    }

    int sum = 0;
    for (int i = 1; i <= number; i++) { sum += i; }

    cout << "Сумма чисел от 1 до " << number << " равна " << sum;
}