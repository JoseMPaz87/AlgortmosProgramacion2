#include <iostream>
using namespace std;

void mostrar_vector (int v[], int n);
void intercambiar (int & a, int & b);
void ordenar_por_burbujeo (int v[], const int n);

int main (void)
{
	const int LONGITUD_VECTOR = 100; 
	int v[LONGITUD_VECTOR] = {1,4,5,7,3,2,9,4,3,8};
	mostrar_vector (v, LONGITUD_VECTOR);
	ordenar_por_burbujeo (v, LONGITUD_VECTOR);
	cout << "Los tres valores maximos son:" << v[0] << ' '  << v[1] << ' '  << v[2] << endl;
	
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

void intercambiar (int & a, int & b)
{
	int aux = a;
	a = b;
	b = aux;
}

void ordenar_por_burbujeo (int v[], const int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = 0; j < n-1-i; j++)
			if (v[j] < v[j+1])
				intercambiar (v[j],v[j+1]);
}
