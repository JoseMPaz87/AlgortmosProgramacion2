#ifndef _FIGURA_H_
#define _FIGURA_H_

#include <iostream>
#include "idiomas.h"

#ifndef NULL
#define NULL 0
#endif
#define TAB "\t"
using namespace std;
const unsigned NULO = 0;

class Figura
{
	private:
	string tipo;
	public:
	//PRE: Ninguno
	//POS: Ninguno
	Figura ();
	//PRE: t = C o R o T
	//POS: tipo = t
	Figura (string t);
	//PRE: Ninguno
	//POS: Retorna tipo
	string obtener_tipo ();
	//PRE: Ninguno
	//POS: Ninguno
	virtual ~Figura (){}
	//PRE: Ninguno
	//POS: Es definido por sus herederos
	virtual double superficie () = 0;
	//PRE: Ninguno
	//POS: Es definido por sus herederos
	virtual void mostrar() = 0;
};
#endif
