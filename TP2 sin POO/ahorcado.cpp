#include "ahorcado.h"

Ahorcado::Ahorcado()
{
	n_intentos = NULO;
	palabra_oculta = NULO;
	palabra_descubierta = NULO;
	
	cout << ETIQUETA_CONSTRUCTOR_PALABRA_OCULTA << this->palabra_oculta << endl;
	cout << ETIQUETA_CONSTRUCTOR_PALABRA_DESCUBIERTA << this->palabra_descubierta << endl;
}

Ahorcado::Ahorcado (uint n_intentos, char * palabra_oculta)
{
	this->n_intentos = n_intentos;
	
	this->palabra_oculta = new char [strlen(palabra_oculta)+1];
	cout << ETIQUETA_CONSTRUCTOR_PALABRA_OCULTA << this->palabra_oculta << endl;
	strcpy (this->palabra_oculta,palabra_oculta);
	
	this->palabra_descubierta = new char[strlen(palabra_oculta)+1];
	cout << ETIQUETA_CONSTRUCTOR_PALABRA_DESCUBIERTA <<  this->palabra_descubierta << endl;
	for (uint i = POSICION_INICIAL; i < strlen(palabra_oculta); i++)
		this->palabra_descubierta[i] = SIMBOLO_OCULTO;
	this->palabra_descubierta[strlen(palabra_descubierta)] = FIN_DEL_ARREGLO;	
}

Ahorcado::Ahorcado (const Ahorcado & a)
{
	this->n_intentos = a.n_intentos;
	
	this->palabra_oculta = new char [strlen(a.palabra_oculta)+1];
	cout << ETIQUETA_CONSTRUCTOR_PALABRA_OCULTA << this->palabra_oculta << endl;
	strcpy (this->palabra_oculta,a.palabra_oculta);
	
	this->palabra_descubierta = new char[strlen(a.palabra_descubierta)+1];
	cout << ETIQUETA_CONSTRUCTOR_PALABRA_DESCUBIERTA <<  this->palabra_descubierta << endl;
	strcpy (this->palabra_descubierta,a.palabra_descubierta);
}

Ahorcado::~Ahorcado()
{
	cout << ETIQUETA_DESTRUCTOR_PALABRA_OCULTA << this->palabra_oculta << endl;
	cout << ETIQUETA_DESTRUCTOR_PALABRA_DESCUBIERTA <<  this->palabra_descubierta << endl;
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

void Ahorcado::establecer_palabra_oculta (char * palabra_oculta)
{
	this->palabra_oculta = palabra_oculta;
}

char * Ahorcado::obtener_palabra_descubierta (void)
{
	return this->palabra_descubierta;
}

void Ahorcado::establecer_palabra_descubierta (char * palabra_descubierta)
{
	this->palabra_descubierta = palabra_descubierta;
}

estado_t Ahorcado::arriesgar (char letra)
{
	estado_t estado = NO_PERTENECE_A_LA_PALABRA;
	
	for (uint i = POSICION_INICIAL; palabra_descubierta[i]; i++)
		if (palabra_descubierta[i] == letra)
			return YA_SE_INTRODUJO;
	
	for (uint i = POSICION_INICIAL;  palabra_oculta[i]; i++)
		if (palabra_oculta[i] == letra)
		{
			palabra_descubierta[i] = palabra_oculta[i];
			estado = PERTENECE_A_LA_PALABRA;
		}
		
	return estado;
}

estado_t Ahorcado::arriesgar (char * cadena)
{
	if (!strcmp (palabra_oculta,cadena))
		return GANO;
		
	return PERDIO;
}
