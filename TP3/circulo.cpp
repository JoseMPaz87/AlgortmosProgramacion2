#include "circulo.h"

Circulo::Circulo ()
{
	cout << "Se construye por defecto un circulo" << endl;
	radio = NULO;
}

Circulo::Circulo (double rad, string col): Figura (col)
{
	cout << "Se construye con parametro un circulo" << endl;
	radio = rad;
}

Circulo::~Circulo ()
{
	cout << "Se destruye un circulo" << endl;
}

double Circulo::obtener_radio ()
{
	return radio;
}

double Circulo::superficie ()
{
	return PI * radio * radio;
}

void Circulo::mostrar ()
{
	cout << "Figura Circulo, cuyos parametros son:" << endl;
	cout << "Radio: " << obtener_radio () << endl;
	cout << "Color: " << obtener_color () << endl; 
	cout << "Superficie: " << superficie () << endl; 
}
