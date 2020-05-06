#include <iostream>
using namespace std;

int main (void)
{
	const int LONGITUD_VECTOR = 21;
	int fahrenheit[LONGITUD_VECTOR];
	float celsius[LONGITUD_VECTOR];
	for (int i = 0, t = 0; i < LONGITUD_VECTOR; i++,t+=10)
	{
		fahrenheit[i] = t;
		celsius[i] = 5.0/9 * (fahrenheit[i] -32);
	}
	cout << "Fahrenheit: ";
	for (int i = 0, t = 0; i < LONGITUD_VECTOR; i++,t+=10)
	{
		cout << fahrenheit[i] << ' ';
	}
	cout << endl;
	cout << "Celsius: ";
	for (int i = 0, t = 0; i < LONGITUD_VECTOR; i++,t+=10)
	{
		cout << celsius[i] << ' ';
	}
	cout << endl;
	
	return 0;
}

