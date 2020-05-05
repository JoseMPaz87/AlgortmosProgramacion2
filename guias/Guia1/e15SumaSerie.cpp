#include <iostream>
using namespace std;

int main (void)
{
	int acum = 0, n;
	cout << "Introduzca un número(0 para terminar): ";
	cin >> n;
	while(n)
	{
		acum += n;
		cout << n << ' ' << acum << endl;
		cout << "Introduzca un número(0 para terminar): ";
		cin >> n;
	}
	
	return 0;
}
