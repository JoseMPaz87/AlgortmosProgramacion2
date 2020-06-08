#include "base.h"

Base::Base(int x)
{
	i = x;
	std::cout << "Construyendo clase base\n";
}
     
Base::~Base()
{
   std::cout << "Destruyendo clase base\n";
}
