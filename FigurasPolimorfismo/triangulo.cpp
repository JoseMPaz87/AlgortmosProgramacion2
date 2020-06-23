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
	cout << "Figura Triangulo, cuyos parametros son:" << endl;
	cout << "Base: " << obtener_base () << endl;
	cout << "Altura: " << obtener_altura () << endl;	
	cout << "Color: " << obtener_tipo_de_figura () << endl; 
	cout << "Superficie: " << superficie () << endl;  
}
