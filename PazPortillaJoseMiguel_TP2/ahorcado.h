#ifndef _AHORCADO_H_
#define _AHORCADO_H_
#include <iostream>
#include "string.h"
#include "tipos.h"
#include "idiomas.h"
using namespace std;
//La numero de fallos coincidira con la longitud de la palabra a adivinar
class Ahorcado
{
	private:
	uint n_intentos;
	char * palabra_oculta;
	char * palabra_descubierta;
		
	public:
	Ahorcado();
	Ahorcado (uint n_intentos, char * palabra_oculta);
	Ahorcado (const Ahorcado & a);
	~Ahorcado();
	uint obtener_n_intentos (void);
	void establecer_n_intentos (uint n_intentos);
	char * obtener_palabra_oculta (void);
	void establecer_palabra_oculta (char * palabra_oculta);
	char * obtener_palabra_descubierta (void);
	void establecer_palabra_descubierta (char * palabra_descubierta);
	estado_t arriesgar (char letra);
	estado_t arriesgar (char * cadena);
};
#endif
