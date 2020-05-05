#include <iostream>
using namespace std;

int main (void)
{
	float f;
	
	cout << "Introduzca un número: ";
	cin >> f;
	
	if (f != 0)
	{
		if (f > 0)
			cout << "El numero es positivo" << endl;
		else
			cout << "El numero es negativo" << endl;
	}
	else
		cout << "El numero es cero" << endl;
		
	return 0;
}
