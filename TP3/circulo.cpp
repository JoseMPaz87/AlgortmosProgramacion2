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
	cout << ETIQUETA_CIRCULO << endl;
	cout << TAB << ETIQUETA_RADIO << obtener_radio () << endl;
	cout << TAB << ETIQUETA_SUPERFICIE << superficie () << endl; 
}

