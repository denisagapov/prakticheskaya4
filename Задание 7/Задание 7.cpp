#include <iostream>
using namespace std;

int factorial(int i)
{
    if (i == 0) return 1;
    else return i * factorial(i - 1);
}
int main()
{
    setlocale(NULL, "rus");
    double n;
    cout << "Введите число:" << endl;
    do {
        cin >> n;
        if (n == 0)
            break;
        cout << "Факториал числа " << n << " = " << factorial(n) << endl;
    } while (n != 0);
    system("pause");
}