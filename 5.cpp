#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Введите размерность массивов: ";
    cin >> n;

    int* array1 = new int[n];
    int* array2 = new int[n];
    int* minArray = new int[n];

    cout << "Введите элементы первого массива:" << endl;
    for (int i = 0; i < n; i++) 
        cin >> array1[i];

    cout << "Введите элементы второго массива:" << endl;
    for (int i = 0; i < n; i++)
        cin >> array2[i];

    for (int i = 0; i < n; i++) 
        minArray[i] = (array1[i] < array2[i]) ? array1[i] : array2[i];

    cout << "Третий массив:" << endl;
    for (int i = 0; i < n; i++) 
        cout << minArray[i] << " ";

    cout << endl;

    delete[] array1;
    delete[] array2;
    delete[] minArray;

    return 0;
}