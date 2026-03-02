
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

    for (int i = 2; i <= 20; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
}
