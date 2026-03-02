
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Hello World!" << endl;
    cout << endl;

    int point;

    while (true) {
        cout << "Меню:" << endl << "1. Сказать привет." << endl << "2. Сумма чисел." << endl << "3. Выход." << endl << "Выберите пункт: ";
        cin >> point;

        if (point == 1) { cout << "Привет!" << endl; cout << endl; }

        else if (point == 2) {
            int number;

            while (true) {
                cout << "Введите число: ";
                cin >> number;

                if (number > 0) { break; }
                else { cout << "Введено некоректное число!" << endl; }
            }

            int sum = 0;
            for (int i = 1; i <= number; i++) { sum += i; }

            cout << "Сумма чисел от 1 до " << number << " равна: " << sum << endl;
            cout << endl;
        }

        else if (point == 3) {
            cout << "Выход из программы.." << endl << "Досвидание! ";
            return 0;
        }
        
    }
    
}

