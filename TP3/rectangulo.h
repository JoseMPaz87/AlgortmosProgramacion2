#ifndef _RECTANGULO_H_
#define _RECTANGULO_H_

#include "figura.h"

class Rectangulo: public Figura
{
	private:
	double base;
	double altura;
	public:
	//PRE: Ninguno
	//POS: base = 0, altura = 0
	Rectangulo ();
	//PRE: b>0, a>0, tipo = C o R o T
	//POS: base = b, altura = a, tipo (padre) = tipo 
	Rectangulo (double b, double a, string tipo);
	//PRE: Ninguno
	//POS: Ninguno
	~Rectangulo ();
	//PRE: Ninguno
	//POS: Retorna base
	double obtener_base ();
	//PRE: Ninguno
	//POS: Retorna altura
	double obtener_altura ();
	//PRE: base y altura debe esta instanciado
	//POS: Retorna la superficie
	double superficie ();
	//PRE: tipo, base y altura deben estar instanciados
	//POS: Muestra el tipo, base, altura y superficie
	void mostrar ();
};

#endif
