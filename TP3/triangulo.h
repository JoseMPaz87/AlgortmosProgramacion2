#ifndef _TRIANGULO_H_
#define _TRIANGULO_H_

#include "figura.h"

class Triangulo: public Figura
{
	private:
	double base;
	double altura;
	public:
	//PRE: Ninguno
	//POS: base = 0, altura = 0
	Triangulo ();
	//PRE: b>0, a>0, tipo = C o R o T
	//POS: base = b, altura = a, tipo (padre) = tipo 
	Triangulo (double bas, double alt, string tipo);
	//PRE: Ninguno
	//POS: Ninguno
	~Triangulo ();
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
