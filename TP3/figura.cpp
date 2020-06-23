#include "figura.h"

Figura::Figura ()
{
}

Figura::Figura (string t)
{
	tipo = t;
}

string Figura::obtener_tipo ()
{
	return tipo;
}

