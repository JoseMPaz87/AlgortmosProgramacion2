#ifndef _FIGURA_H_
#define _FIGURA_H_

#include <iostream>
using namespace std;
const unsigned NULO = 0;

class Figura
{
	private:
	string tipo_de_figura;
	public:
	Figura ();
	Figura (string tipo_de_figura);
	string obtener_tipo_de_figura ();
	virtual ~Figura (){std::cout << "Se destruye una figura" << std::endl;}
	virtual double superficie () = 0;
	virtual void mostrar() = 0;
};


#endif
