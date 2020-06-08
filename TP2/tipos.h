#ifndef _TIPOS_H_
#define _TIPOS_H_

typedef enum
{
	BIEN = 0,

	//Estados de errores
	CANTIDAD_ARGUMENTOS = 1,
	LONGITUD_PALABRA = 2,
	ERROR_CANTIDAD_INTENTOS = 3,
	NO_INGRESO_UN_NUMERO = 4,
	NUMERO_NEGATIVO = 5,

	//Estados del juego
	GANO = 20,
	PERDIO = 21,
	LETRA_REPETIDA = 22,
	LA_LETRA_PERTENECE_A_LA_PALABRA = 23,
	NO_PERTENECE_A_LA_PALABRA = 24
}estado_t;

typedef unsigned int uint;

#endif
