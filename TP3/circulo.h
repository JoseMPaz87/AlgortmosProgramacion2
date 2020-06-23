#ifndef _CIRCULO_H_
#define _CIRCULO_H_
#include "figura.h"
#include <iostream>
#include <sstream> 
#include <string>
#define PI 3.1416


class Circulo: public Figura 
{
	private:
	double radio;
	public:
	//PRE: Ninguno
	//POS: radio = 0
	Circulo ();
	//PRE: rad>0, tipo = C o R o T
	//POS: radio = rad, tipo (padre) = tipo 
	Circulo (double rad, string tipo);
	//PRE: Ninguno
	//POS: Ninguno
	~Circulo ();
	//PRE: Ninguno
	//POS: Retorna radio
	double obtener_radio ();
	//PRE: radio debe esta instanciado
	//POS: Retorna la superficie
	double superficie ();
	//PRE: tipo y radio deben estar instanciados
	//POS: Muestra el tipo, radio y superficie
	void mostrar ();

};

#endif
