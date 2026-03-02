
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Hello World!" << endl;
    cout << endl;

    int number;

    while (true) {
        cout << "Введите число: ";
        cin >> number;

        if (number > 0) { break; }
        else { cout << "Введено некоректное число!"; }
    }

    for (int i = number; i >= 1; i--) { cout << i << " "; }
}

