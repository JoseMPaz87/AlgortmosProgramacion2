#include <iostream>
using namespace std;

int main (void)
{
	int num;
	cout << "Introduzca un numero inicial: ";
	cin >> num;
	for (int i = 0; i < 20;i++)
		cout << num++ << ' ';
	cout << endl;
	return 0;
}

