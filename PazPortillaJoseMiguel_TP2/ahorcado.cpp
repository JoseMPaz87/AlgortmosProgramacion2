#include "ahorcado.h"

Ahorcado::Ahorcado()
{
	palabra_a_adivinar = NULL;
	n_fallos = 0;
}
int Ahorcado::obtener_n_fallos (void)
{
	return n_fallos;
}

void Ahorcado::establecer_n_fallos (int n)
{
	n_fallos = n;
}

char * Ahorcado::obtener_palabra_a_adivinar (void)
{
	return palabra_a_adivinar;
}

void Ahorcado::establecer_n_fallos (char * palabra)
{
	palabra_a_adivinar = palabra;
}
