#include <iostream>
using namespace std;

void reverseMassive(int mass[], int size)
{
	int n = size - 1;
	for (int i = 0; i < size / 2; i++, n--)
		swap(mass[i], mass[n]);
}
int main()
{
	int mass[10];
	for (int i = 0; i < size(mass); i++)
	{
		mass[i] = rand() % 10;
		cout << mass[i] << " ";
	}
	cout << endl;
	reverseMassive(mass, 10);
	for (int i = 0; i < size(mass); i++)
		cout << mass[i] << " ";
	cout << endl;
	system("pause");
}