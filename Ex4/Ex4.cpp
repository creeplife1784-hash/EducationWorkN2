
#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Hello World!" << endl;
    cout << endl;

    int height, width;

    cout << "Введите высоту прямоугольника: ";
    cin >> height;
    cout << "Введите ширину прямоугольника: ";
    cin >> width;

    if (height <= 0 || width <= 0) {
        cout << "Ошибка: высота и ширина должны быть положительными числами!";
        return 1;
    }

    for (int row = 0; row < height; ++row){
        for (int col = 0; col < width; ++col) {
            cout << '*';
        }
        cout << endl;
    }
}
