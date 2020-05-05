#include <iostream>
using namespace std;

int main (void)
{
	int n;
	cout << "Ingrese un número entero: ";
	cin >> n;
	if (n%2)
		cout << "El número es impar" << endl;
	else
		cout << "El número es par" << endl;
	return 0;
}

