#ifndef _VALIDACION_H_
#define _VALIDACION_H_

#include "tipos.h"
#include <fstream>
using namespace std;

const uint N_ARGUMENTOS = 2;
const uint POS_NOMBRE_ARCHIVO = 1;

//PRE: Ninguno
//POS: Verifica que argc == 2 y que el archivo(argv[1]) se pueda abrir
estado_t validar_entrada (int argc, const char * argv[]);

#endif
