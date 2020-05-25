/*
Para configurar el idioma se debe elegir descomentando solo el idioma a usar en configurar_idioma.h
los idiomas disponibles son castellano, aleman, ingles y japones.
Para generar el ejecutable, escribir en la terminal:
make
Para ejecutar, escribir en la terminal:
./tp2 PalabraAadivinar CantidadDeIntentos
Ejm: Si la palabra a adivinar es argentina y la cantidad de intentos 15, se escribe:
./tp2 argentina 15
Para ver si hay fuga de memoria compilarlo como:
valgrind -v --tool=memcheck --leak-check=full ./tp2 argentina 15

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
const uint N_ENTER = 20;

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
void refrescar (void);

int main (int argc, const char * argv[])
{
	estado_t estado;
	Ahorcado ahorcado;
	string entrada;
	
	if ((estado = validar_entrada (argc, argv)) != BIEN)
	{
		cerr << endl << mensaje_errores[estado] << endl << endl;
		return 1;
	}
	
	ahorcado.establecer_n_intentos ((uint)strtol (argv[POSICION_N_INTENTOS], NULO, 10));
	ahorcado.establecer_palabra_oculta (argv[POSICION_PALABRA_A_ADIVINAR]);
	ahorcado.establecer_palabra_descubierta (strlen (argv[POSICION_PALABRA_A_ADIVINAR]));
	refrescar ();
	
	while ((ahorcado.obtener_n_intentos () > NULO) &&  estado != GANO)
	{
		ahorcado.mostrar_menu ();
		cin >> entrada;
		
		if (es_una_letra (entrada))
		{
			if ( (estado = ahorcado.arriesgar (entrada.c_str()[POSICION_INICIAL])) == GANO)
			{
				cout << SIMBOLO_BARRA << endl;
				cout << ETIQUETA_PALABRA_DESCUBIERTA<< ahorcado.obtener_palabra_descubierta() << endl;
				cout << endl << "\t\t" << ETIQUETA_GANO << endl << endl;
				break;
			} 	
			if (estado == LETRA_REPETIDA)
			{
				cout << ETIQUETA_LETRA_REPETIDA << endl;
				continue;
			}
			ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - N_FRACASO_LETRA);
		}
		else
		{
			if ((estado = ahorcado.arriesgar ((char *) entrada.c_str())) == GANO)
			{
				cout << SIMBOLO_BARRA << endl;
				cout << ETIQUETA_PALABRA_DESCUBIERTA<< ahorcado.obtener_palabra_descubierta() << endl;
				cout << endl << "\t\t" << ETIQUETA_GANO << endl << endl;
			}	
			else
				ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - N_FRACASO_PALABRA);			
		}		
	}
	
	if (ahorcado.obtener_n_intentos () == NULO)
	{
		cout << ETIQUETA_PALABRA_DESCUBIERTA<< ahorcado.obtener_palabra_oculta () << endl;
		cout << endl << "\t\t" << ETIQUETA_PERDIO << endl << endl;
	}
	return 0;
}

bool es_una_letra (string s)
{
	return (s.length() == sizeof (char)) ? true : false;
}
void refrescar (void)
{
	for (uint i = POSICION_INICIAL; i < N_ENTER; i++)
		cout << endl;
}
