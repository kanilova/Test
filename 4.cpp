#include <iostream>
using namespace std;

int main() 
{
    int f, s, n;
    cout << "Введите первый член арифметической прогрессии (f): ";
    cin >> f;
    cout << "Введите шаг арифметической прогрессии (s): ";
    cin >> s;
    cout << "Введите число для проверки (n): ";
    cin >> n;

    if ((n - f) % s == 0) 
        cout << "Число " << n << " является членом арифметической прогрессии." << endl;
    else
        cout << "Число " << n << " не является членом арифметической прогрессии." << endl;

    return 0;
}