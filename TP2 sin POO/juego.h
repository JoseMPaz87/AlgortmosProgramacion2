#ifndef _JUEGO_H_
#define _JUEGO_H_

#include "ahorcado.h"
#include "tipos.h"
#include <iostream>
#include <string>

const uint N_SALTOS = 18;
static const string SIMBOLO_BARRA = "#######################################";
const uint INTENTO_NULO = 0;
const uint N_FRACASO_PALABRA = 2;
const uint N_FRACASO_LETRA = 1;

using namespace std;

//Precondiciones:palabra_oculta no es una cadena nula y de longitud mayor a 3, n_intentos 
//es de tipo entero sin signo y vale al menos 3
//Postcondiciones: Indica el estado del juego, si se gana o no, se gana si se adivina la palabra sea 
//si se agrega una palabra(disminuye 2 intentos si se falla) o por adivinar habiendo adivinado de a una
//letra por vez(disminuye 2 intentos si se falla por intento), tambien se destapa la cadena cadena_descubierta del objeto ahorcado si hay coincidencia 
estado_t jugar (char * palabra_oculta, uint n_intentos);

//Refresca la pantalla 
//Precondiciones:-
//Postcondiciones:Imprime varios enter para que no se vea la linea de ejecucion el programa 
void refrescar (void);

#endif
