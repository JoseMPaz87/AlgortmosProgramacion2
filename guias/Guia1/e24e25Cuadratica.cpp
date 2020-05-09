#include "e24e25Cuadratica.h"

bool tiene_raices_reales (double a, double b, double c)
{
	bool raiz_real = true;
	if ((b*b-4*a*c)<0)
		raiz_real = false;

	return raiz_real;
}

double * obtener_raices (double a, double b, double c)
{
	const int CANTIDAD_DE_RAICES = 2;
	double * raiz;
	
	if (!tiene_raices_reales (a,b,c))
	{
		cout << "No tiene raices reales" << endl;
		return NULL;
	}
	raiz = new double[CANTIDAD_DE_RAICES];
	raiz[0] = (-b + sqrt (b*b - 4*a*c) )/(2*a);
	raiz[1] = (-b - sqrt (b*b - 4*a*c) )/(2*a);
	
	return raiz;
}
