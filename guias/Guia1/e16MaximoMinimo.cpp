#include <iostream>
using namespace std;
int TAMANIO_VECTOR = 1000;

void mostrar_vector (int v[], int n);
int minimo (int v[], int n);
int maximo (int v[], int n);
void agregar_valor (int v[], int n, int * contador, int valor);

int main (void)
{
	int v[TAMANIO_VECTOR] = {2,-4,3,21,6};
	int pos_min = minimo (v, TAMANIO_VECTOR),pos_max = maximo (v, TAMANIO_VECTOR), contador = 5, valor;
	char opcion = 's';
	mostrar_vector (v, TAMANIO_VECTOR);
	cout << "El valor minimo es " << v[pos_min] << " esta ubicado en la posicion " << pos_min << endl;
	cout << "El valor maximo es " << v[pos_max] << " esta ubicado en la posicion " << pos_max << endl;
	do
	{
		cout << "Desea agregar otro elemento (s/n)[Para terminar presione t]:";
		cin >> opcion;
		if (opcion == 's')
		{
			cout << "Ingrese valor:";
			cin >> valor;
			agregar_valor (v,TAMANIO_VECTOR, &contador,valor);
			continue;
		}
		pos_min = minimo (v, TAMANIO_VECTOR);
		pos_max = maximo (v, TAMANIO_VECTOR);
		mostrar_vector (v, TAMANIO_VECTOR);
		cout << "El valor minimo es " << v[pos_min] << " esta ubicado en la posicion " << pos_min << endl;
		cout << "El valor maximo es " << v[pos_max] << " esta ubicado en la posicion " << pos_max << endl;	
	}
	while (opcion != 't');
	
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

int minimo (int v[], int n)
{	
	int posicion_minimo = 0;
	
	for (int i = 1; i < n; i++)
		if (v[posicion_minimo] > v[i])
			posicion_minimo = i;			
		
	return posicion_minimo;
}

int maximo (int v[], int n)
{	
	int posicion_maximo = 0;
	
	for (int i = 1; i < n; i++)
		if (v[posicion_maximo] < v[i])
			posicion_maximo = i;			
		
	return posicion_maximo;
}

void agregar_valor (int v[], int n, int * contador, int valor)
{
	if (*contador == n)
		return;
	v[(*contador)++] = valor;
}
