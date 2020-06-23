#ifndef _TIPOS_H_
#define _TIPOS_H_

#include "figura.h"
#include "circulo.h"
#include "rectangulo.h"
#include "triangulo.h"

#ifndef NULL
#define NULL 0
#endif
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif

typedef Figura Dato;
typedef unsigned int uint;
typedef enum
{
	BIEN = 0,
	ERROR_N_ARGUMENTOS = 1,
	ERROR_AL_ABRIR_ARCHIVO = 2
}estado_t;

typedef enum
{
	MOSTRAR_TIPO_DE_FIGURA_POR_POSICION = 1,
	ELIMINAR_FIGURA_POR_POSICION = 2,
	AGREGAR_FIGURA = 3,
	MOSTRAR_TODAS_LAS_FIGURAS = 4,
	MOSTRAT_FIGURA_CON_MAYOR_SUPERFICIE = 5,
	MOSTRAT_FIGURA_CON_MENOR_SUPERFICIE = 6,	
	SALIR = 7
}opcion_t;

#endif
