#ifndef _AHORCADO_H_
#define _AHORCADO_H_
#include <iostream>
#include <stdio.h>
#include "string.h"
#include "tipos.h"
#include "idiomas.h"

#define SIMBOLO_DESCUBIERTO '-'
#define NULO 0
#define SIMBOLO_FIN_DE_CADENA '\0'
#define POSICION_INICIAL 0
#define ESPACIO_FIN_DE_CADENA 1
#define SIMBOLO_BARRA  "#######################################"
#define N_FRACASO_LETRA 1
#define N_FRACASO_PALABRA 2
#define DESPLAZAMIENTO "\t\t"

using namespace std;


class Ahorcado
{
	private:
	uint n_intentos;
	char * palabra_oculta;
	char * palabra_descubierta;
	estado_t estado;
		
	public:
	/*Constructor por defecto	
	Precondiciones: Ninguna
	Postcondiciones: Construye un objeto Ahorcado, donde n_intentos = 0, estado = BIEN,
	palabra_oculta = NULO y palabra_descubierta = NULO
	Imprime la dirección de memoria de palabra_oculta y palabra_descubierta.*/
	Ahorcado();
	
	/*Constructor con parámetros
	Precondiciones: estado es un estado valido, n_intentos es de tipo entero sin signo, palabra_oculta y
	palabra_descubierta son palabras no nulas
	Postcondiciones: n_intentos = n, palabra_oculta se le pide memoria dinámica y se le copia el contenido 		de palabra, mientras que a palabra_descubierta se le copia guiones segun le largo de la palabra.
	Imprime la dirección de memoria de palabra_oculta y palabra_descubierta*/
	Ahorcado (uint n, char * palabra);
	
	/*Constructor por copia
	Precondiciones: a es del tipo Ahorcado y se para por referencia y se asegura que no será modificado con
	la palabra const.
	Postcondiciones:n_intentos = a.n_intentos, a palabra_oculta = a.palabra_oculta y palabra_descubierta = 		a.palabra_descubierta*/
	Ahorcado (const Ahorcado & a);
	
	//Destructor
	//Precondiciones:Ninguna
	//Postcondiciones:Destruye la memoria pedida para palabra_oculta y palabra_descubierta
	//Imprime la dirección de memoria de palabra_oculta y palabra_descubierta antes de devolver la memoria.
	~Ahorcado();
	
	//Obtiene el estado del juego
	//Precondiciones:Ninguna
	//Postcondiciones:Retorna el estado del juego
	estado_t obtener_estado (void);
	
	//Establece el estado del juego
	//Precondiciones: Estado sea un estado valido del juego
	//Postcondiciones:estado = e
	void establecer_estado (estado_t e);
	
	//Obtiene el número de intentos
	//Precondiciones: Ninguna
	//Postcondiciones: Retorna n_intentos
	uint obtener_n_intentos (void);
	
	//Establece el número de intentos
	//Precondiciones: n es de tipo entero sin signo
	//Postcondiciones: n_intentos = n
	void establecer_n_intentos (uint n);
	
	//Obtiene la palabra oculta
	//Precondiciones: Ninguna
	//Postcondiciones: Retorna palabra_oculta
	char * obtener_palabra_oculta (void);
	
	//Establece palabra oculta
	//Precondiciones: palabra_oculta es del tipo char * y no es NULO
	//Postcondiciones: palabra_oculta = palabra
	void establecer_palabra_oculta (char * palabra);
	
	//Obtiene la palabra descubierta
	//Precondiciones:Ninguna
	//Postcondiciones: Retorna palabra_descubierta
	char * obtener_palabra_descubierta (void);
	
	//Establece palabra descubierta
	//Precondiciones: longitud_palabra es del tipo entero sin signo 
	//Postcondiciones: Agrega a palabra descubierta tantos guines como es el largo de longitud_palabra.
	void establecer_palabra_descubierta (uint longitud_palabra);
	
	//Arriesga una letra
	//Precondiciones: letra es de tipo char 
	//Postcondiciones: Actualiza el estado del juego
	void arriesgar (char letra);
	
	//Arriesga una cadena
	//Precondiciones: Cadena es de tipo char *
	//Postcondiciones: Actualiza el estado del juego
	void arriesgar (char * cadena);
	
	//Muestra es Menu para que se ingrese una letra o una palabra
	//Precondiciones: Ninguna
	//Postcondiciones: Muestra por pantalla indicaciones para que se introduzca una letra o una palabra.
	void mostrar_menu (void);
	
	//Muestra el resultado si gano el juego
	//Precondiciones: Ninguna
	//Postcondiciones: Muestra por pantalla que el jugador gano el juego
	void mostrar_que_gano (void);
	
	//Muestra el resultado si perdio el juego
	//Precondiciones: Ninguna
	//Postcondiciones: Muestra por pantalla que el jugador perdio el juego
	void mostrar_que_perdio (void);
	
	//Disminuye la cantidad de intentos
	//Precondiciones: n es un entero sin signo
	//Postcondiciones: Disminuye n a n_intentos
	void disminuir_n_intentos (uint n);
};

#endif
