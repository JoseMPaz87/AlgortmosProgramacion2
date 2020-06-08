#ifndef _VALIDACION_H_
#define _VALIDACION_H_

#include "tipos.h"
#include <string.h>
#include <stdlib.h>

const uint CANTIDAD_DE_ARGUMENTOS = 3;
const uint LARGO_MINIMA_PALABRA = 3;
const uint CANTIDAD_MINIMA_INTENTOS = 3;
const uint BASE_DECIMAL = 10;
const uint POSICION_PALABRA = 1;
const uint POSICION_INTENTOS = 2;
const uint SALTO_DE_LINEA = '\n';

//Precondiciones:-
//Postcondiciones:Asegura que argc sea exactamente 3, y que la longitud de 
//la palabra a adivinar sea de la menos 3
estado_t validar_entrada (int argc, char * argv[]);

#endif
