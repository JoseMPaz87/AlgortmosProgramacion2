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

int main (void)
{
	enteros_a_romanos();
	return 0;
}
