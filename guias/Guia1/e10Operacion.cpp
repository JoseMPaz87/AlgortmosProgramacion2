#include <iostream>
using namespace std;

int main (void)
{
	char operacion;
	float n, m;
	cout << "Introduzca dos números:" << endl;
	cin >> n >> m;
	cout << "Introduzca la operacion(+,-,*,/): ";
	cin >> operacion;
	
	switch (operacion)
	{
		case '+':
		cout << n + m << endl;
		break;
		case '-':
		cout << n - m << endl;
		break;
		case '*':
		cout << n * m << endl;
		break;
		case '/':
		cout << n / m << endl;
		break;
		default:
		cout << "No introdujo una de las opciones"<< endl;
	}
	
	return 0;
}

