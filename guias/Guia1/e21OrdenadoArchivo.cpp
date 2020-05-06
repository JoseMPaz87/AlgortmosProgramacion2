#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

bool esta_ordenado_ascendentemente (int v[], int longitud);
bool esta_ordenado_descendentemente (int v[], int longitud);

int main (void)
{
	char * c;
	string s;
	const int LONGITUD_VECTOR = 1000;
	int i = 0, numero = 1, v[LONGITUD_VECTOR];
	cout << "Introduzca numeros naturales(para terminar EOF->CTR+D):" << endl;

	while (cin >> s)
	{
		numero = strtol (s.c_str(),&c,10);
		if (*c && *c != '\n')
			break;
		
		v[i++] = numero;		
	}
	
	if (esta_ordenado_ascendentemente (v, i))
		cout << "Esta ordenado ascendentemente" << endl;
	else
	{
		if (esta_ordenado_descendentemente (v, i))
			cout << "Esta ordenado descendentemente" << endl;
		else
			cout << "No esta ordenado" << endl;		
	}
	for (int j = 0; j < i; j++)
		cout << v[j] << endl;
	
	

	return 0;
}

bool esta_ordenado_ascendentemente (int v[], int longitud)
{
	bool ordenado_asc = true;
	
	for (int i = 1; i < longitud; i++)
		if (v[i-1] > v[i])
			ordenado_asc = false;
			
	return ordenado_asc;
}

bool esta_ordenado_descendentemente (int v[], int longitud)
{
	bool ordenado_desc = true;
	
	for (int i = 1; i < longitud; i++)
		if (v[i-1] < v[i])
			ordenado_desc = false;
			
	return ordenado_desc;
}

