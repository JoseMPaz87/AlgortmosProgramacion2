#ifndef _RECTANGULO_H_
#define _RECTANGULO_H_

#include "figura.h"

class Rectangulo: public Figura
{
	private:
	double base;
	double altura;
	public:
	Rectangulo ();
	Rectangulo (double b, double a, string col);
	~Rectangulo ();
	double obtener_base ();
	double obtener_altura ();
	double superficie ();
	void mostrar ();
};

#endif
