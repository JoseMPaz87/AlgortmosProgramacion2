#include <iostream>
using namespace std;

int main (void)
{
	float n1, n2;
	
	cout << "Introduzca dos numeros reales: " << endl;
	cin >> n1 >> n2;
	
	if (n1 != n2)
	{
		if (n1 > n2)
			cout << n1 << endl;
		else
			cout << n2 << endl;
	}
	else
		cout << n1 << endl;
		
	return 0;
}

