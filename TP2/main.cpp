/*
Para configurar el idioma se debe descomentar un solo idioma en configurar_idioma.h
Para generar el ejecutable, escribir en la terminal:
make
Para ejecutar, escribir en la terminal:
./tp2 PalabraAadivinar CantidadDeIntentos
Ejm: Si la palabra a adivinar es hola y la cantidad de intentos es 7, se escribe:
./tp2 hola 7
Para ver si hay fuga de memoria compilarlo como:
valgrind -v --tool=memcheck --leak-check=full ./tp2 hola 7

 argv                   argv[0]       argv[1]           argv[2]                  argc
 __________             _______________________________________________          _____
|          |           |       |                  |                    |        |     |
|  0x100   |---------->| ./tp2 | PalabraAadivinar | CantidadDeIntentos |        |  3  |
|__________|           |_______|__________________|____________________|        |_____|   

								0x100					          
*/

#include <iostream>
#include "validacion.h"
#include "ahorcado.h"
#include "idiomas.h"

using namespace std;

const uint POSICION_N_INTENTOS = 2;
const uint POSICION_PALABRA_A_ADIVINAR = 1;

static const char * mensaje_errores[] = 
{
	NULO, 
	ETIQUETA_CANTIDAD_DE_ARGUMENTOS, 
	ETIQUETA_LONGITUD_PALABRA_A_ADIVINAR,
	ETIQUETA_ERROR_CANTIDAD_DE_INTENTOS,
	ETIQUETA_NO_INGRESO_DE_NUMERO,
	ETIQUETA_INGRESO_NUMERO_NEGATIVO
};

bool es_una_letra (string s);

int main (int argc, char * argv[])
{
	estado_t estado;
	string entrada;
	
	if ((estado = validar_entrada (argc, argv)) != BIEN)
	{
		cerr << endl << mensaje_errores[estado] << endl << endl;
		return 1;
	}
	Ahorcado ahorcado((uint)strtol (argv[POSICION_N_INTENTOS], NULO, 10), argv[POSICION_PALABRA_A_ADIVINAR]);
	while ((ahorcado.obtener_n_intentos () > NULO) &&  ahorcado.obtener_estado () != GANO)
	{
		ahorcado.mostrar_menu ();
		cin >> entrada;		
		if (es_una_letra (entrada))
		{
			ahorcado.arriesgar (entrada.c_str()[POSICION_INICIAL]);			
			if ( ahorcado.obtener_estado() == GANO)
			{
				ahorcado.mostrar_que_gano ();
				break;
			} 	
			if (ahorcado.obtener_estado() == LETRA_REPETIDA)
			{
				cout << ETIQUETA_LETRA_REPETIDA << endl;
				continue;
			}
			ahorcado.disminuir_n_intentos (N_FRACASO_LETRA);
		}
		else
		{
			ahorcado.arriesgar ((char *) entrada.c_str());			
			if (ahorcado.obtener_estado() == GANO)
				ahorcado.mostrar_que_gano ();	
			else
				ahorcado.disminuir_n_intentos (N_FRACASO_PALABRA);			
		}		
	}	
	if (ahorcado.obtener_n_intentos () == NULO)
		ahorcado.mostrar_que_perdio ();
		
	return 0;
}

bool es_una_letra (string s)
{
	return (s.length() == sizeof (char)) ? true : false;
}
