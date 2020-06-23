#include "circulo.h"

Circulo::Circulo ()
{
	radio = NULO;
}

Circulo::Circulo (double rad, string tipo): Figura (tipo)
{
	radio = rad;
}

Circulo::~Circulo ()
{
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
	cout << "Color: " << obtener_tipo_de_figura () << endl; 
	cout << "Superficie: " << superficie () << endl; 
}
