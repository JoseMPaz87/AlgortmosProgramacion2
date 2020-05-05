#include <iostream>
using namespace std;
float perimetro (float , float);
float superficie (float , float);
int main (void)
{
	float b, h;
	cout << "Introduzca base y altura de un restangulo: ";
	cin >> b >> h;
	cout << "El perimetro es: " << perimetro (b,h) << endl;
	cout << "La superficie es: " << superficie (b,h) << endl;
	
	return 0;
}
float perimetro (float b, float h)
{
	return 2 * (b + h);
}
float superficie (float b, float h)
{
	return b * h;
}
