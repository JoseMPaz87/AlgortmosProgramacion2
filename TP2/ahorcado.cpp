#include "ahorcado.h"

Ahorcado::Ahorcado()
{
	estado = BIEN;
	n_intentos = NULO;
	palabra_oculta = NULO;
	palabra_descubierta = NULO;
	cout << (void *) palabra_oculta << endl;
	cout << (void *) palabra_descubierta << endl;
}

Ahorcado::Ahorcado (uint n, char * palabra)
{
	establecer_estado (BIEN);
	establecer_n_intentos (n);
	palabra_oculta = new char [strlen(palabra) + ESPACIO_FIN_DE_CADENA];
	establecer_palabra_oculta (palabra);
	palabra_descubierta = new char[strlen(palabra) + ESPACIO_FIN_DE_CADENA];
	establecer_palabra_descubierta ((uint) strlen(palabra));
	cout << (void *) palabra_oculta << endl;
	cout << (void *) palabra_descubierta << endl;
}

Ahorcado::Ahorcado (const Ahorcado & a)
{
	estado = a.estado;
	n_intentos = a.n_intentos;	
	palabra_oculta = new char [strlen(a.palabra_oculta) + ESPACIO_FIN_DE_CADENA];
	establecer_palabra_oculta (a.palabra_oculta);
	palabra_descubierta = new char[strlen(a.palabra_descubierta) + ESPACIO_FIN_DE_CADENA];
	establecer_palabra_descubierta ((uint) strlen (a.palabra_descubierta));
	cout << (void *) palabra_oculta << endl;
	cout << (void *) palabra_descubierta << endl;
}

Ahorcado::~Ahorcado()
{
	cout << (void *) palabra_oculta << endl;
	cout << (void *) palabra_descubierta << endl;
	delete[] palabra_oculta;
	delete[] palabra_descubierta;
}

estado_t Ahorcado::obtener_estado (void)
{
	return estado;
}

void Ahorcado::establecer_estado (estado_t e)
{
	estado = e;
}

uint Ahorcado::obtener_n_intentos (void)
{
	return n_intentos;
}

void Ahorcado::establecer_n_intentos (uint n)
{
	n_intentos = n;
}

char * Ahorcado::obtener_palabra_oculta (void)
{
	return palabra_oculta;
}

void Ahorcado::establecer_palabra_oculta (char * palabra)
{
	strcpy (palabra_oculta,palabra);
}

char * Ahorcado::obtener_palabra_descubierta (void)
{
	return palabra_descubierta;
}

void Ahorcado::establecer_palabra_descubierta (uint longitud_palabra)
{
	for (uint i = POSICION_INICIAL; i < longitud_palabra; i++)
			palabra_descubierta[i] = SIMBOLO_DESCUBIERTO;
	palabra_descubierta[longitud_palabra] = SIMBOLO_FIN_DE_CADENA;
}

void Ahorcado::arriesgar (char letra)
{
	estado_t e = NO_PERTENECE_A_LA_PALABRA;
	
	for (uint i = POSICION_INICIAL; palabra_descubierta[i]; i++)
		if (palabra_descubierta[i] == letra)
		{
			estado = LETRA_REPETIDA; 
			return;
		}
		
	for (uint i = POSICION_INICIAL;  palabra_oculta[i]; i++)
		if (palabra_oculta[i] == letra)
		{
			palabra_descubierta[i] = palabra_oculta[i];
			estado = LA_LETRA_PERTENECE_A_LA_PALABRA;
		}
	
	if (!strcmp (palabra_oculta,palabra_descubierta))
	{
		estado = GANO;
		return;
	}	
	estado = e;
}

void Ahorcado::arriesgar (char * cadena)
{
	if (!strcmp (palabra_oculta,cadena))
	{
		strcpy (palabra_descubierta, palabra_oculta);
		estado = GANO; 
		return;
	}	
	estado = PERDIO; 
	return;
}

void Ahorcado::mostrar_menu (void)
{
	cout << SIMBOLO_BARRA << endl;
	cout << ETIQUETA_CANTIDAD_DE_INTENTOS_DISPONIBLES << obtener_n_intentos () << endl;
	cout << ETIQUETA_PALABRA_ADIVINAR << obtener_palabra_descubierta () << endl;
	cout << ETIQUETA_INGRESO;		
}

void Ahorcado::mostrar_que_gano (void)
{
	cout << SIMBOLO_BARRA << endl;
	cout << ETIQUETA_PALABRA_OCULTA << obtener_palabra_descubierta() << endl;
	cout << endl << DESPLAZAMIENTO << ETIQUETA_GANO << endl << endl;
}

void Ahorcado::mostrar_que_perdio (void)
{
	cout << ETIQUETA_PALABRA_OCULTA << obtener_palabra_oculta () << endl;
	cout << endl << DESPLAZAMIENTO << ETIQUETA_PERDIO << endl << endl;
}

void Ahorcado::disminuir_n_intentos (uint n)
{
	n_intentos -= n;
}
