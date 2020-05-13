#include "juego.h"

estado_t jugar (char * palabra_oculta, uint n_intentos)
{
	estado_t estado_juego = PERDIO, estado_arriesgar;
	Ahorcado ahorcado (n_intentos,palabra_oculta);
	string cadena;	
	
	while (ahorcado.obtener_n_intentos () > 0 || estado_juego != GANO)
	{
		if (ahorcado.obtener_n_intentos () == 0)
		{
			cout << ETIQUETA_PALABRA_A_ADIVINAR << ahorcado.obtener_palabra_oculta() << endl;
			return PERDIO;
		}
		cout << ETIQUETA_CANTIDAD_INTENTOS << ahorcado.obtener_n_intentos () << endl;
		cout << ETIQUETA_PALABRA_ADIVINAR << ahorcado.obtener_palabra_descubierta () << endl;
		cout << ETIQUETA_INGRESO;
		cin >> cadena;
		
		if (cadena.length() == sizeof (char))
		{
			if ( (estado_arriesgar = ahorcado.arriesgar (cadena.c_str()[0])) == YA_SE_INTRODUJO)
				continue; 
			else 
			{
				if (estado_arriesgar == PERTENECE_A_LA_PALABRA)
				{
					ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - 1);
					if (!strcmp (ahorcado.obtener_palabra_oculta(),ahorcado.obtener_palabra_descubierta()))
					{
						cout << ETIQUETA_PALABRA_A_ADIVINAR << ahorcado.obtener_palabra_descubierta() << endl;
						return GANO;
					}
				}
				else
					ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - 1);			
			}			
		}
		else
		{
			if ( ahorcado.arriesgar ((char *) cadena.c_str())  == GANO)
			{
				cout << ETIQUETA_PALABRA_A_ADIVINAR << ahorcado.obtener_palabra_oculta() << endl;
				return GANO; 
			}
			else
				ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - 2);
		}	
		
	}
		
	return estado_juego;
}
