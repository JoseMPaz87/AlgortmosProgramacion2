#ifndef _ARABICOS_A_ROMANOS_H_
#define _ARABICOS_A_ROMANOS_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctype.h>
#include <cstdlib>
#include <errno.h>

using namespace std;

#define ERROR_NO_ES_NUMERO " no es un número arabe"
#define ERROR_NUMERO_FUERA_DE_RANGO " está fuera del rango a convertir"
#define NUMERO_MAXIMO 3000
#define NUMERO_MINIMO 0
#define RANGO 4//Para no pasarme de los cuatro digitos

void convertir_arabes_a_romanos (int numero_decimal[], ofstream & salida);
void cargar_numero_decimal (int numero_decimal[], int numero_arabe);
void imprimir_numero_romano (int numero_arabe, ofstream & salida);
void enteros_a_romanos(void);

#endif
