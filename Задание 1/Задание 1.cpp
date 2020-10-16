

#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    int a;
    cout << "Введите число" << endl;
    cin >> a;
    cout << "Число " << a << " без остатка делится на: ";
    for (int i = 1; i <= 9; i++)
    {
        if (a % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    system("pause");
}
