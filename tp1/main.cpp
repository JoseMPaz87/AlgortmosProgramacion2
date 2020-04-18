/******************************** tp 1 ************************************ 
Este programa convierte números enteros (De 1 a 3000) a número romanos 
e informa de algún error dependiendo el motivo en un archivo histórico.
Para compilar se debe abrir la terminal y ubicarlo en la carpeta del código 
fuente, una vez ahí se escribe en la terminal "make" o "make all", mientras 
que para ejecutar se debe escribir "./tp1" 
*/
#include <iostream>
#include <fstream>
#include <string>

int numero_decimal [4] = {1,0,3,0};

const char * simbolos[4][10] = {
{"","M","MM","MMM","","","","","",""},
{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
{"","I","II","III","IV","V","VI","VII","VIII","IX"}
};

void convertir_enteros_a_romanos (void);

using namespace std;

int main (void)
{
	convertir_enteros_a_romanos();
		
	return 0;
}

void convertir_enteros_a_romanos (void)
{
	string cadena;
	ifstream entrada ("valores.txt");

	while (entrada >> cadena)
	{
		for (int i = 0; i < 4; i++)
		{
			if (numero_decimal[i] == 0)
				continue;
			cout << simbolos[i][numero_decimal[i]];
		}
		cout << endl;
	}
	
	
	//cout << "El largo de la cadena es "  << cadena.length() << endl;
	
	//Parseo de string a entero

	//ofstream salida ("romanos.txt");

	
	
	
}
