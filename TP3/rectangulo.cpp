#include "rectangulo.h"

Rectangulo::Rectangulo ()
{
	base = NULO;
	altura = NULO;
}

Rectangulo::Rectangulo (double bas, double alt, string tipo): Figura (tipo)
{
	base = bas;
	altura = alt;
}

Rectangulo::~Rectangulo ()
{
}

double Rectangulo::obtener_base ()
{
	return base;
}

double Rectangulo::obtener_altura ()
{
	return altura;
}

double Rectangulo::superficie ()
{
	return base * altura;
}

void Rectangulo::mostrar ()
{
	cout << ETIQUETA_RECTANGULO << endl;
	cout << TAB << ETIQUETA_BASE << obtener_base () << endl;
	cout << TAB << ETIQUETA_ALTURA << obtener_altura () << endl;	
	cout << TAB << ETIQUETA_SUPERFICIE << superficie () << endl;  
}
