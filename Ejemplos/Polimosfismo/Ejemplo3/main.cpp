#include <iostream>
#include "base.h"
#include "base2.h"
#include "derivada.h"

using namespace std;

int main()
{
	Base * h = new Derivada();
	delete h;
	return 0;
}
