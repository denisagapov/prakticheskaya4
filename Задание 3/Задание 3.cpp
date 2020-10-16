

#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "rus");
    float x, ln;
    int n;
    bool znak = false;
    cout << "Введите x: " << endl;
    cin >> x;
    cout << "Введите n: " << endl;
    cin >> n;
    ln = x;
    for (int i = 2; i <= n; i++)
    {
        if (!znak)
            ln -= pow(x, i) / i;
        else ln += pow(x, i) / i;
        znak = !znak;
    }
    cout << "\nln(1+x)= " << ln << endl;
    system("pause");
}
