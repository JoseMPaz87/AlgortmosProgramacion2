#include <iostream>
using namespace std;

int main (void)
{
	char opcion;
	float t, seg;
	int dia, hor, min;
	cout << "Introduzca un periodo en segundos:" << endl;
	cin >> t;
	dia = (int)t/(24*3600);
	hor = (int)(t-dia*24*3600)/3600;
	min = (int)(t - dia*24*3600 - hor*3600)/60;
	seg = t - dia*24*3600 - hor*3600 - min * 60;
	cout << "dias: " << dia << endl;
	cout << "horas: " << hor << endl;
	cout << "minutos: " << min << endl;
	cout << "segundos: " << seg << endl;
	
	return 0;
}

