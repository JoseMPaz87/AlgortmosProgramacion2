#include "figura.h"

Figura::Figura ()
{
	std::cout << "Se construye una figura" << std::endl;
}

Figura::Figura (string col)
{
	color = col;
}

string Figura::obtener_color ()
{
	return color;
}
