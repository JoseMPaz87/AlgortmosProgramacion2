#ifndef _AHORCADO_H_
#define _AHORCADO_H_
#include <iostream>
#include "string.h"
#include "tipos.h"
#include "idiomas.h"

#define SIMBOLO_OCULTO '-'
#define NULO 0
#define FIN_DEL_ARREGLO '\0'
#define POSICION_INICIAL 0

using namespace std;

class Ahorcado
{
	private:
	uint n_intentos;
	char * palabra_oculta;
	char * palabra_descubierta;
		
	public:
	//Constructor por defecto
	//Precondiciones:-
	//Postcondiciones: Construye un Ahorcado, donde n_intentos = 0
	// palabra_oculta = NULO y palabra_descubierta = NULO
	//Imprime la dirección de memoria de palabra_oculta y palabra_descubierta.
	Ahorcado();
	
	//Constructor con parámetros
	//Precondiciones: n_intentos es de tipo unsigned int, palabra_oculta y
	// palabra_descubierta son de tipo char *
	//Postcondiciones: this->n_intentos = n_intentos, a this->palabra_oculta y this->palabra_descubierta
	//se les pide memoria dinámica, a this->palabra_oculta se le copia el contenido de palabra_oculta,
	//mientras que a this->palabra_descubierta se le copia guiones.
	//Imprime la dirección de memoria de palabra_oculta y palabra_descubierta
	Ahorcado (uint n_intentos, char * palabra_oculta);
	
	//Constructor por copia
	//Precondiciones: a es del tipo Ahorcado y se para por referencia
	//Postcondiciones:n_intentos = a.n_intentos, a this->palabra_oculta y this->palabra_descubierta
	//se les pide memoria dinámica y se les copia el contenido de a.palabra_oculta y a.palabra_descubierta
	//respectivamente
	Ahorcado (const Ahorcado & a);
	
	//Destructor
	//Precondiciones:-
	//Postcondiciones:Destruye la memoria pedida para palabra_oculta y palabra_descuberta
	//Imprime la dirección de memoria de palabra_oculta y palabra_descubierta
	~Ahorcado();
	
	//Obtiene el número de intentos
	//Precondiciones:-
	//Postcondiciones:devuelve n_intentos
	uint obtener_n_intentos (void);
	
	//Establece el número de intentos
	//Precondiciones: n_intentos es de tipo unsigned int
	//Postcondiciones:this->n_intentos = n_intentos
	void establecer_n_intentos (uint n_intentos);
	
	//Obtiene la palabra oculta
	//Precondiciones:-
	//Postcondiciones: devuelve palabra_oculta
	char * obtener_palabra_oculta (void);
	
	//Establece palabra oculta
	//Precondiciones: palabra_oculta es del tipo char * y no apunta al NULO
	//Postcondiciones: this_palabra_oculta = palabra_oculta
	void establecer_palabra_oculta (char * palabra_oculta);
	
	//Obtiene la palabra descubierta
	//Precondiciones:-
	//Postcondiciones: devuelve palabra_descubierta
	char * obtener_palabra_descubierta (void);
	
	//Establece palabra descubierta
	//Precondiciones: palabra_descubierta es del tipo char * y no apunta al NULO
	//Postcondiciones: this_palabra_descubierta = palabra_descubierta
	void establecer_palabra_descubierta (char * palabra_descubierta);
	
	//Arriesga una letra
	//Precondiciones: letra es de tipo char 
	//Postcondiciones: devuelve un estado para que dependiendo de él se modifique ahorcado
	estado_t arriesgar (char letra);
	
	//Arrienda una cadena
	//Precondiciones: cadena es de tipo char *
	//Postcondiciones: devuelve un estado para que dependiendo de él se modifique ahorcado
	estado_t arriesgar (char * cadena);
};
#endif
