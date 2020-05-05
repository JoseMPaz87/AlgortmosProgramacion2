/*Para compilar escribir en la terminal ubicada en la carpeta del archivo fuente
g++ e1MostrarNumero.cpp -o e1MostrarNumero
Para ejecutar escribir
./e1MostrarNumero
*/
#include <iostream>

int main (void)
{
	int var;
	std::cin >> var;
	std::cout <<  "Número ingresado es " << var << std::endl;
	return 0;
}
