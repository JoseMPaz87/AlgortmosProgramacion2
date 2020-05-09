#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main (void)
{
	string s;
	char * c;
	const int LONGITUD_VECTOR = 20;
	int n, numero, contador = 0, acumulador_parcial, acumulador_total = 0;
	cout << "Introduzca N: ";
	cin >> n;

	int matriz[n][LONGITUD_VECTOR] = {{0}};
	
	//Carga los datos
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		
		do
		{
		 	cin >> numero;	
			if (numero == 0)
				continue;
			matriz[i][j++] = numero;
		}while (numero != 0);
	}
	
	//Muestra los datos
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j < LONGITUD_VECTOR; j++)
			cout << matriz[i][j] << ' ';
		cout << endl;
	}
	
	//Realiza las medias
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		acumulador_parcial = 0;
		while (matriz[i][j] != 0)
		{
			acumulador_parcial += matriz[i][j++];
			contador++;
		}
		cout << "Media parcial " << (float) acumulador_parcial / j << endl;
		acumulador_total += acumulador_parcial;
	}
	cout << "Media total " << (float) acumulador_total / contador << endl;
	
	return 0;
}

