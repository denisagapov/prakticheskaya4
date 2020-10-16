#include <iostream>
#include <cmath>
using namespace std;
int a, b, c;
float x;

void discriminant(int a, int b, int c)
{
    if ((b * b - 4 * a * c) > 0)
    {
        x = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1 = " << x << endl;
        x = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x2 = " << x << endl;
    }
    else if ((b * b - 4 * a * c) == 0)
    {
        x = (-b / (2 * a));
        cout << "x1 = x2 = " << x << endl;
    }
    else
    {
        cout << "Корней нет" << endl;
    }
}
void vieta(int a, int b, int c)
{
    int n = 0;
    float x1, x2 = c / a;
    if (c / a >= 0)
        for (; x2 >= -c / a; x2 -= 0.00001)
        {
            x1 = (c / a) / x2;
            if (x1 + x2 == -b / a)
            {
                n = 1;
                break;
            }
        }
    else
        for (; x2 <= -c / a; x2 += 0.00001)
        {
            x1 = (c / a) / x2;
            if (x1 + x2 == -b / a)
            {
                n = 1;
                break;
            }
        }
    if (n == 1)
        cout << "x1= " << x1 << "\nx2= " << x2;
    else cout << "нет корней";
}
void output_type()
{
    cout << "Выберите метод решения?\n\t1) через дискриминант\n\t2) через виета" << endl;
    int number;
    cin >> number;
    switch (number)
    {
    case 1:
        discriminant(a, b, c);
        break;
    case 2:
        vieta(a, b, c);
        break;
    default:
        break;
    }
}
void input()
{
    cout << "Ax^2 + Bx + C = 0" << endl;
    cout << endl << "Введите A" << endl;
    cin >> a;
    cout << "Введите B" << endl;
    cin >> b;
    cout << "Введите C" << endl;
    cin >> c;
}

int main()
{
    setlocale(NULL, "rus");
    input();
    output_type();
    system("pause");
}
