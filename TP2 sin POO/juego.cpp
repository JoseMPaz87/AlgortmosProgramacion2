#include "juego.h"

estado_t jugar (char * palabra_oculta, uint n_intentos)
{
	estado_t estado_juego = PERDIO, estado_arriesgar;
	Ahorcado ahorcado (n_intentos,palabra_oculta);
	string cadena;	
	
	refrescar();
	
	while (ahorcado.obtener_n_intentos () > INTENTO_NULO || estado_juego != GANO)
	{
		if (ahorcado.obtener_n_intentos () == INTENTO_NULO)
		{
			cout << SIMBOLO_BARRA << endl;
			cout << ETIQUETA_PALABRA_A_ADIVINAR << ahorcado.obtener_palabra_oculta() << endl;
			return PERDIO;
		}
		cout << SIMBOLO_BARRA << endl;
		cout << ETIQUETA_CANTIDAD_INTENTOS << ahorcado.obtener_n_intentos () << endl;
		cout << ETIQUETA_PALABRA_ADIVINAR << ahorcado.obtener_palabra_descubierta () << endl;
		cout << ETIQUETA_INGRESO;
		cin >> cadena;
		
		if (cadena.length() == sizeof (char))
		{
			if ( (estado_arriesgar = ahorcado.arriesgar (cadena.c_str()[POSICION_INICIAL])) == YA_SE_INTRODUJO)
				continue; 
			else 
			{
				if (estado_arriesgar == PERTENECE_A_LA_PALABRA)
				{
					ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - N_FRACASO_LETRA);
					if (!strcmp (ahorcado.obtener_palabra_oculta(),ahorcado.obtener_palabra_descubierta()))
					{
						cout << SIMBOLO_BARRA << endl;
						cout << ETIQUETA_PALABRA_A_ADIVINAR << ahorcado.obtener_palabra_descubierta() << endl;
						return GANO;
					}
				}
				else
					ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - N_FRACASO_LETRA);			
			}			
		}
		else
		{
			if ( ahorcado.arriesgar ((char *) cadena.c_str())  == GANO)
			{
				cout << SIMBOLO_BARRA << endl;
				cout << ETIQUETA_PALABRA_A_ADIVINAR << ahorcado.obtener_palabra_oculta() << endl;
				return GANO; 
			}
			else
				ahorcado.establecer_n_intentos (ahorcado.obtener_n_intentos () - N_FRACASO_PALABRA);
		}			
	}
		
	return estado_juego;
}


