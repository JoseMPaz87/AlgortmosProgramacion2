#ifndef _TIPOS_H_
#define _TIPOS_H_

typedef enum
{
	BIEN = 0,
	//Inicio Errores
	CANTIDAD_ARGUMENTOS = 1,
	LONGITUD_PALABRA = 2,
	CANTIDAD_INTENTOS = 3,
	NO_INGRESO_UN_NUMERO = 4,
	NUMERO_NEGATIVO = 5,
	//Fin Errores
	GANO = 20,
	PERDIO = 21,
	YA_SE_INTRODUJO = 22,
	PERTENECE_A_LA_PALABRA = 23,
	NO_PERTENECE_A_LA_PALABRA = 24
}estado_t;

typedef unsigned int uint;

#endif
