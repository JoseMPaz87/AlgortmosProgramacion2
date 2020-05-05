#include <iostream>
using namespace std;

void mostrar_vector (int v[], int n);
void agregar_valor (int v[], int n, int * contador, int valor);
int minimo (int v[], int n, int * contador);
int maximo (int v[], int n, int * contador);
int main (void)
{
	int TAMANIO_VECTOR = 1000;
	int n, valor, v[TAMANIO_VECTOR] = {0}, contador = 0, n_repeticion_min = 1, n_repeticion_max = 1;
	int pos_max, pos_min;
	
	cout << "Ingrese un numero N: ";
	cin >> n;
	cout << "Debe ingresar " << n << " numeros:" << endl;	
	for (int i = 0; i < n; i++)
	{
		cin >> valor;	
		agregar_valor (v, TAMANIO_VECTOR, &contador, valor);
	}
	pos_min = minimo (v, TAMANIO_VECTOR, &n_repeticion_min );
	pos_max = maximo (v, TAMANIO_VECTOR, &n_repeticion_max );
	mostrar_vector (v, TAMANIO_VECTOR);
	cout << "El maximo es " << v[pos_max] << " y se repitio " << n_repeticion_max << " veces" << endl;
	cout << "El minimo es " << v[pos_min] << " y se repitio " << n_repeticion_min << " veces" << endl;
	
	return 0;
}

void mostrar_vector (int v[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (v[i] == 0)
			continue;
		cout << v[i] << ' ';
	}
	cout << endl;
}

void agregar_valor (int v[], int n, int * contador, int valor)
{
	if (*contador == n)
		return;
	v[(*contador)++] = valor;
}

int minimo (int v[], int n, int * contador)
{	
	int posicion_minimo = 0;
	
	for (int i = 1; i < n; i++)
	{
		if (v[i] == 0)
			continue;
		if (v[posicion_minimo] > v[i])
		{
			*contador = 1; 
			posicion_minimo = i;			
		}
		else
			if (v[posicion_minimo] == v[i])
				(*contador)++;
	}
			 
	return posicion_minimo;
}

int maximo (int v[], int n, int * contador)
{	
	int posicion_maximo = 0;
	
	for (int i = 1; i < n; i++)
	{
		if (v[posicion_maximo] < v[i])
		{
			*contador = 1; 
			posicion_maximo = i;			
		}
		else
			if (v[posicion_maximo] == v[i])
				(*contador)++;
	}
		
	return posicion_maximo;
}
