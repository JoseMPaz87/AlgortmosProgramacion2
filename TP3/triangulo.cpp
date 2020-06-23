#include "triangulo.h"

Triangulo::Triangulo ()
{
	base = NULO;
	altura = NULO;
}

Triangulo::Triangulo (double bas, double alt, string tipo) : Figura(tipo)
{
	base = bas;
	altura = alt;
}

Triangulo::~Triangulo ()
{
}

double Triangulo::obtener_base ()
{
	return base;
}

double Triangulo::obtener_altura ()
{
	return altura;
}

double Triangulo::superficie ()
{
	return (base * altura)/2;
}

void Triangulo::mostrar ()
{
	cout << ETIQUETA_TRIANGULO << endl;
	cout << TAB << ETIQUETA_BASE << obtener_base () << endl;
	cout << TAB << ETIQUETA_ALTURA << obtener_altura () << endl;	
	cout << TAB << ETIQUETA_SUPERFICIE << superficie () << endl; 
}
