#include "figura.h"

Figura::Figura ()
{
}

Figura::Figura (string tipo)
{
	tipo_de_figura = tipo;
}

string Figura::obtener_tipo_de_figura ()
{
	return tipo_de_figura;
}
