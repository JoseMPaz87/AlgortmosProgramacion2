#include "ahorcado.h"

Ahorcado::Ahorcado()
{
	n_intentos = NULO;
	palabra_oculta = NULO;
	palabra_descubierta = NULO;
	//No logre imprimir la direccion de memoria de algo tipo char *
}

Ahorcado::Ahorcado (uint n, char * palabra)
{
	n_intentos = n_intentos;
	
	palabra_oculta = new char [strlen(palabra) + ESPACIO_FIN_DE_CADENA];
	strcpy (palabra_oculta,palabra);
	
	palabra_descubierta = new char[strlen(palabra_oculta) + ESPACIO_FIN_DE_CADENA];
	for (uint i = POSICION_INICIAL; i < strlen(palabra_oculta); i++)
		palabra_descubierta[i] = SIMBOLO_DESCUBIERTO;
	palabra_descubierta[strlen(palabra_descubierta)] = SIMBOLO_FIN_DE_CADENA;	
	//No logre imprimir la direccion de memoria de algo tipo char *
}

Ahorcado::Ahorcado (const Ahorcado & a)
{
	n_intentos = a.n_intentos;
	
	palabra_oculta = new char [strlen(a.palabra_oculta) + ESPACIO_FIN_DE_CADENA];
	strcpy (palabra_oculta,a.palabra_oculta);
	
	palabra_descubierta = new char[strlen(a.palabra_descubierta) + ESPACIO_FIN_DE_CADENA];
	strcpy (palabra_descubierta,a.palabra_descubierta);
	//No logre imprimir la direccion de memoria de algo tipo char *	
}

Ahorcado::~Ahorcado()
{
	//No logre imprimir la direccion de memoria de algo tipo char *
	delete[] this->palabra_oculta;
	delete[] this->palabra_descubierta;
}

uint Ahorcado::obtener_n_intentos (void)
{
	return this->n_intentos;
}

void Ahorcado::establecer_n_intentos (uint n_intentos)
{
	this->n_intentos = n_intentos;
}

char * Ahorcado::obtener_palabra_oculta (void)
{
	return this->palabra_oculta;
}

void Ahorcado::establecer_palabra_oculta (const char * palabra)
{
	if (!palabra_oculta)
	{
		palabra_oculta = new char [strlen(palabra) + ESPACIO_FIN_DE_CADENA];
		strcpy (palabra_oculta,palabra);
	}
	else
	{
		delete[] palabra_oculta;
		palabra_oculta = new char [strlen(palabra) + ESPACIO_FIN_DE_CADENA];
		strcpy (palabra_oculta,palabra);
	}
}

char * Ahorcado::obtener_palabra_descubierta (void)
{
	return this->palabra_descubierta;
}

void Ahorcado::establecer_palabra_descubierta (uint longitud_palabra)
{
	if (!palabra_descubierta)
	{
		palabra_descubierta = new char [longitud_palabra + ESPACIO_FIN_DE_CADENA];
		for (uint i = POSICION_INICIAL; i < longitud_palabra; i++)
			palabra_descubierta[i] = SIMBOLO_DESCUBIERTO;
		palabra_descubierta[longitud_palabra] = SIMBOLO_FIN_DE_CADENA;
	}
	else
	{
		delete[] palabra_descubierta;
		palabra_descubierta = new char [longitud_palabra + ESPACIO_FIN_DE_CADENA];
		for (uint i = POSICION_INICIAL; i < longitud_palabra; i++)
			palabra_descubierta[i] = SIMBOLO_DESCUBIERTO;
		palabra_descubierta[longitud_palabra] = SIMBOLO_FIN_DE_CADENA;
	}
}


estado_t Ahorcado::arriesgar (char letra)
{
	estado_t estado = NO_PERTENECE_A_LA_PALABRA;
	
	for (uint i = POSICION_INICIAL; palabra_descubierta[i]; i++)
		if (palabra_descubierta[i] == letra)
			return LETRA_REPETIDA;
	
	for (uint i = POSICION_INICIAL;  palabra_oculta[i]; i++)
		if (palabra_oculta[i] == letra)
		{
			palabra_descubierta[i] = palabra_oculta[i];
			estado = LA_LETRA_PERTENECE_A_LA_PALABRA;
		}
	
	if (!strcmp (palabra_oculta,palabra_descubierta))
		return GANO;
		
	return estado;
}

estado_t Ahorcado::arriesgar (char * cadena)
{
	if (!strcmp (palabra_oculta,cadena))
	{
		strcpy (palabra_descubierta, palabra_oculta);
		return GANO;
	}	
	return PERDIO;
}

void Ahorcado::mostrar_menu (void)
{
	cout << SIMBOLO_BARRA << endl;
	cout << ETIQUETA_CANTIDAD_DE_INTENTOS_DISPONIBLES << obtener_n_intentos () << endl;
	cout << ETIQUETA_PALABRA_DESCUBIERTA << obtener_palabra_descubierta () << endl;
	cout << ETIQUETA_INGRESO;		
}
