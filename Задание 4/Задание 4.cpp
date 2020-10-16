

#include <iostream>
#include <cmath>
using namespace std;
int f(int i)
{
    if (i == 0) return 1;
    else return i * f(i - 1);
}
int main()
{
    setlocale(NULL, "rus");
    float x, sin;
    int n;
    cout << "Введите x: " << endl;
    cin >> x;
    cout << "Введите n: " << endl;
    cin >> n;
    sin = x;
    for (int i = 1; i <= n;i++)
    {
        sin += pow(-1, i) * pow(x, 2 * i + 1) / f(2 * i + 1);
    }
    cout << "\nsin(x) = " << sin << endl;
    system("pause");
}
