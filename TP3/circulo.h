#ifndef _CIRCULO_H_
#define _CIRCULO_H_
#include "figura.h"
#define PI 3.1416

class Circulo: public Figura 
{
	private:
	double radio;
	public:
	Circulo ();
	Circulo (double rad, string col);
	~Circulo ();
	double obtener_radio ();
	double superficie ();
	void mostrar ();
};

#endif
