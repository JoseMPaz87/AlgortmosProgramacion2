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
	cout << "Figura Rectangulo, cuyos parametros son:" << endl;
	cout << "Base: " << obtener_base () << endl;
	cout << "Altura: " << obtener_altura () << endl;	
	cout << "Color: " << obtener_tipo_de_figura () << endl; 
	cout << "Superficie: " << superficie () << endl;  
}
