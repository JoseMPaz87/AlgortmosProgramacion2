#include <iostream>
using namespace std;

float potencia (float, int);



int main (void)
{
	float const pi = 3.1416;
	float radio;
	cout << "Introduzca el radio de una espera: ";
	cin >> radio;
	cout << "Superficie: " << 4 * pi * potencia (radio, 2) << endl;
	cout << "Volumen: " << 4/3.0 * pi * potencia (radio, 3) << endl;
	return 0;
}

float potencia (float r, int n)
{
	float p = 1;
	for (int i = 1; i <= n ; i++)
		p *= r;
	return p;
}
