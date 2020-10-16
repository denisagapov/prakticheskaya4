#include <iostream>
using namespace std;

void sort(int mass[], int size)
{
	int key = 0;
	int i = 0;
	for (int j = 1; j < size; j++) {
		key = mass[j];
		i = j - 1;
		while (i >= 0 && mass[i] < key) {
			mass[i + 1] = mass[i];
			i = i - 1;
			mass[i + 1] = key;
		}
	}
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
	sort(mass, 10);
	for (int i = 0; i < size(mass); i++)
		cout << mass[i] << " ";
	cout << endl;
	system("pause");
}