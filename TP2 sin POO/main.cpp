/*
Para configurar el idioma se debe elegir descomentando solo el idioma a usar en configurar_idioma.h
los idiomas disponibles son castellano, aleman, ingles y japones.
Para generar el ejecutable, escribir en la terminal:
make
Para ejecutar, escribir en la terminal:
./tp2 PalabraAadivinar CantidadDeIntentos
Ejm: Si la palabra a adivinar es argentina y la cantidad de intentos 15, se escribe:
./tp2 argentina 15

 argv                   argv[0]       argv[1]           argv[2]                  argc
 __________             _______________________________________________          _____
|          |           |       |                  |                    |        |     |
|  0x100   |---------->| ./tp2 | PalabraAadivinar | CantidadDeIntentos |        |  3  |
|__________|           |_______|__________________|____________________|        |_____|   

								0x100					          
*/

#include <iostream>
#include "validacion.h"
#include "juego.h"
#include "idiomas.h"

using namespace std;

static const char * mensaje_errores[] = 
{
	NULO, 
	ETIQUETA_CANTIDAD_DE_ARGUMENTOS, 
	ETIQUETA_LONGITUD_PALABRA_A_ADIVINAR,
	ETIQUETA_CANTIDAD_DE_INTENTOS,
	ETIQUETA_NO_INGRESO_DE_NUMERO,
	ETIQUETA_INGRESO_NUMERO_NEGATIVO
};

int main (int argc,  char * argv[])
{
	estado_t estado;

	if ((estado = validar_entrada (argc, argv)) != BIEN)
	{
		cerr << endl << mensaje_errores[estado] << endl << endl;
		return 1;
	}

	if ((estado = jugar (argv[POSICION_PALABRA],(uint) strtol (argv[POSICION_INTENTOS],NULO,BASE_DECIMAL))) == GANO)
		cout << endl << "\t\t" << ETIQUETA_GANO << endl << endl;
	else
		cout << endl << "\t\t" << ETIQUETA_PERDIO << endl << endl;
	
	return 0;
}
