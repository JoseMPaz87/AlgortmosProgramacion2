#include <iostream>
using namespace std;

int producto_por_sumas (const int & a, const int & b);

int main (void)
{
	int a, b;
	
	cout << "Ingrese dos numero a multiplicar:" << endl;
	cin >> a >> b;
	cout << "El producto es " << producto_por_sumas (a,b) << endl;;
	return 0;
}

int producto_por_sumas (const int & a, const int & b)
{	
	int c = 0;
	for (int i = 0; i < b; i++)
		c += a;
	return c;
}
