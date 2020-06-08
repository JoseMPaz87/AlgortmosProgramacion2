#include "rectangulo.h"

Rectangulo::Rectangulo ()
{
	cout << "Se construye por defecto un rectangulo" << endl;
	base = NULO;
	altura = NULO;
}

Rectangulo::Rectangulo (double bas, double alt, string col): Figura (col)
{
	cout << "Se construye con parametro un rectangulo" << endl;
	base = bas;
	altura = alt;
}

Rectangulo::~Rectangulo ()
{
	cout << "Se destruye un rectangulo" << endl;
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
	cout << "Color: " << obtener_color () << endl; 
	cout << "Superficie: " << superficie () << endl;  
}
