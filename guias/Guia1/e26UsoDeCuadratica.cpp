#include <iostream>
#include "e24e25Cuadratica.h"

using namespace std;

int main (void)
{
	double a, b, c;
	double * raiz;
	cout << "Ingrese los coeficientes a,b y c de una cuadratica:" << endl;
	cin >> a >> b >> c;
	
	if ((raiz = obtener_raices (a, b, c)) != NULL)
	{
		cout << "Las raices Reales son " << raiz[0] << ' ' << raiz[1] << endl;
		delete[] raiz;
	}			
	
	return 0;
}

