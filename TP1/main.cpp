/******************************** tp 1 ************************************ 
Este programa convierte números enteros (De 1 a 3000) a número romanos 
e informa de algún error dependiendo el motivo.
Para compilar se debe abrir la terminal y ubicarlo en la carpeta del código 
fuente, una vez ahí se escribe en la terminal "make", mientras que para ejecutar 
se debe escribir "./tp1" 
*/
#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include <sstream>
#include "arabicos_a_romanos.h"

using namespace std;

int main(int argc, char * const argv[])
{
	if (argc != 2)
	{
		cout << "Error, debe tener 2 argumentos" << endl;
		return 1;
	}
	enteros_a_romanos(argv[1]);
	return 0;
}
