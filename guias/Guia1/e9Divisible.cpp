#include <iostream>
using namespace std;

bool esDivisible (int, int);

int main (void)
{
	int m, n;
	
	cout << "Introduzca dos números: " << endl;
	cin >> m >> n;
	if (esDivisible (m,n))
		cout << m << " es divisibles por " << n << endl;
	else
		cout << m << " no es divisibles por " << n  << endl;
		
	return 0;
}

bool esDivisible (int m, int n)
{
	if (m % n)
		return false;
	
	return true;	 
}
