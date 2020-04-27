#include "arabicos_a_romanos.h"
void cargar_numero_decimal (int numero_decimal[], int numero_arabe)
{
	for (int i = 3; i >= 0; i--)
	{
		numero_decimal[i] = numero_arabe % 10;
		numero_arabe /= 10;
	}	
}

void convertir_arabes_a_romanos (int numero_decimal[], ofstream & salida)
{
	const char * numero_romano[4][10] = {
	{NULL,"M","MM","MMM","","","","","",""},
	{NULL,"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
	{NULL,"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
	{NULL,"I","II","III","IV","V","VI","VII","VIII","IX"}
	};
	
	for (int i = 0; i < 4; i++)
	{
		if (numero_decimal[i] == 0)
			continue;
		salida << numero_romano[i][numero_decimal[i]];
	}
	salida  << endl;
}

void imprimir_numero_romano (int numero_arabe, ofstream & salida)
{
	int numero_decimal[4];

	cargar_numero_decimal (numero_decimal,numero_arabe);
	convertir_arabes_a_romanos (numero_decimal, salida);
}

void enteros_a_romanos(void)
{
	string cadena;
	ifstream entrada ("valores.txt");
	ofstream salida ("romanos.txt");
	ofstream historico ("log.txt",ios::app);
	int numero_arabe;
	char * indice;
	
	while (entrada >> cadena)
	{		
		numero_arabe = (int) strtol (cadena.c_str(), &indice,10);
		
		if (*indice && *indice != '\n')	
		{
			historico <<	cadena << ERROR_NO_ES_NUMERO << endl;
			continue;
		}
		if (cadena.length() > 4 || numero_arabe <= NUMERO_MINIMO || numero_arabe > NUMERO_MAXIMO) 
		{
			historico << cadena <<  ERROR_NUMERO_FUERA_DE_RANGO << endl;
			continue;
		}
		imprimir_numero_romano (numero_arabe, salida);		
	}
	entrada.close();
	salida.close();
	historico.close();
}
