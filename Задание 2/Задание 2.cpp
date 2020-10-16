#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    float a, b, x;
    cout << "Ax = B" << endl;
    cout << endl << "Введите A" << endl;
    cin >> a;
    cout << "Введите B" << endl;
    cin >> b;
    if (a != 0)
    {
        x = b / a;
        cout << "\nx = " << x << endl;
    }
    else cout << "на 0 делить нельзя!" << endl;
    system("pause");
}