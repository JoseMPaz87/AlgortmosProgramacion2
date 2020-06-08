#include "derivada.h"

Derivada::Derivada(int x, int y) : Base(y)
{
	j = x;
   std::cout << "Construyendo clase derivada\n";
}

Derivada::~Derivada()
{
	std::cout << "Destruyendo clase derivada\n";
}
        
void Derivada::mostrar()
{
	std::cout << i << " " << j << "\n";
}
