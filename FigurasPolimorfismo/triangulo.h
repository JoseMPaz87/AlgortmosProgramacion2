#ifndef _TRIANGULO_H_
#define _TRIANGULO_H_

#include "figura.h"

class Triangulo: public Figura
{
	private:
	double base;
	double altura;
	public:
	Triangulo ();
	Triangulo (double bas, double alt, string tipo);
	~Triangulo ();
	double obtener_base ();
	double obtener_altura ();
	double superficie ();
	void mostrar ();
};
#endif
