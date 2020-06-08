#ifndef _BASE_H_
#define _BASE_H_

#include <iostream>

class Base
{
	public:
	Base();
	virtual ~Base()
	{
		std::cout << "Se destruye  base" << std::endl;
	}
};

#endif
