#ifndef _AHORCADO_H_
#define _AHORCADO_H_
#include <iostream>
//La numero de fallos coincidira con la longitud de la palabra a adivinar
class Ahorcado
{
	private:
	char * palabra_a_adivinar;
	int n_fallos;
	
	public:
	Ahorcado();
	int obtener_n_fallos (void);
	void establecer_n_fallos (int n);
	char * obtener_palabra_a_adivinar (void);
	void establecer_n_fallos (char * palabra);
};
#endif
