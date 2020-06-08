#include "arabicos_a_romanos.h"

//Carga el numero a un vector de siguiente modo |millar|centena|decena|unidad| 
void cargar_numero_decimal (int numero_decimal[], int numero_arabe)
{
	for (int i = 3; i >= 0; i--)
	{
		numero_decimal[i] = numero_arabe % 10;
		numero_arabe /= 10;
	}	
}

/*Convierte automaticamente un elementos de la biblioteca de números arabes
en la posición del vector de enteros cargado asi |millar|centena|decena|unidad| 
si hay un cero simplemente no lo imprime*/
void _convertir_arabes_a_romanos (int numero_decimal[], ofstream & salida)
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

//Se encarga de convertir un numero entero en uno romano
void convertir_arabes_a_romano  (int numero_arabe, ofstream & salida)
{
	int numero_decimal[4];

	cargar_numero_decimal (numero_decimal,numero_arabe);
	_convertir_arabes_a_romanos (numero_decimal, salida);
}

//Se encarga de hacer todo el procedimiento de conversion de arabes a romanos
void enteros_a_romanos(const char * archivo_entrada)
{
	string cadena;
	ifstream entrada (archivo_entrada);
	ofstream salida ("romanos.txt");
	ofstream historico ("log.txt",ios::app);
	int numero_arabe;
	char * indice;

	if (entrada.fail() || salida.fail() || historico.fail())
	{
		cout << ERROR_AL_ABRIR_ARCHIVO << endl;
		return;
	}
	
	while (entrada >> cadena)
	{		
		//Convierte char * en long int
		numero_arabe = (int) strtol (cadena.c_str(), &indice,10);
		
		//Valida que la cadena sea un número
		if (*indice && *indice != '\n')	
		{
			historico <<	cadena << ERROR_NO_ES_NUMERO << endl;
			continue;
		}
		
		//Valida el rango de numeros a convertir
		if (cadena.length() > 4 || numero_arabe <= NUMERO_MINIMO || numero_arabe > NUMERO_MAXIMO) 
		{
			historico << cadena <<  ERROR_NUMERO_FUERA_DE_RANGO << endl;
			continue;
		}
		
		convertir_arabes_a_romano (numero_arabe, salida);		
	}
	entrada.close();
	salida.close();
	historico.close();
}
