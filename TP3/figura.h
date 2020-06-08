#ifndef _FIGURA_H_
#define _FIGURA_H_

#include <iostream>
using namespace std;
const unsigned NULO = 0;

class Figura
{
	private:
	string color;
	public:
	Figura ();
	Figura (string col);
	string obtener_color ();
	virtual ~Figura (){std::cout << "Se destruye una figura" << std::endl;}
	virtual double superficie () = 0;
	virtual void mostrar() = 0;
};


#endif
