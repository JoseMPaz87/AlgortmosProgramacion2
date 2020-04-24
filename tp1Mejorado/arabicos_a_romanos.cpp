#include "arabicos_a_romanos.h"

void imprimir_numero_romano (int numero_arabe)
{
	const char * numero_romano[4][10] = {
	{"","M","MM","MMM","","","","","",""},
	{"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
	{"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
	{"","I","II","III","IV","V","VI","VII","VIII","IX"}
	};
	int numero_decimal[4];

	for (int i = 3; i >= 0; i--)
		{
			numero_decimal[i] = numero_arabe % 10;
			numero_arabe /= 10;
		}	
		
		for (int i = 0; i < 4; i++)
		{

			if (numero_decimal[i] == 0)
				continue;
			cout << numero_romano[i][numero_decimal[i]];
		}
		cout << endl;;
}

void enteros_a_romanos(void)
{
	string cadena;
	ifstream entrada ("valores.txt");
	int numero_arabe;
	char * indice;
		
	while (entrada >> cadena)
	{		
		numero_arabe = (int) strtol (cadena.c_str(), &indice,10);
		
		if (*indice && *indice != '\n')	
		{
			cout <<	cadena << ERROR_NO_ES_NUMERO << endl;
			continue;
		}
		if (cadena.length() > 4 || numero_arabe <= NUMERO_MINIMO || numero_arabe > NUMERO_MAXIMO) 
		{
			cout << cadena <<  ERROR_NUMERO_FUERA_DE_RANGO << endl;
			continue;
		}
		imprimir_numero_romano (numero_arabe);		
	}
}
