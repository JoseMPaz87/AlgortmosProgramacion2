#include "triangulo.h"

Triangulo::Triangulo ()
{
	cout << "Se construye por defecto un triangulo" << endl;
	base = NULO;
	altura = NULO;
}

Triangulo::Triangulo (double bas, double alt, string col) : Figura(col)
{
	cout << "Se construye con parametro un triangulo" << endl;
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
	cout << "Figura Triangulo, cuyos parametros son:" << endl;
	cout << "Base: " << obtener_base () << endl;
	cout << "Altura: " << obtener_altura () << endl;	
	cout << "Color: " << obtener_color () << endl; 
	cout << "Superficie: " << superficie () << endl;  
}
