#include <iostream>
using namespace std;

typedef struct
{
	string nombre;
	long int salario;
}Empleado;

int main (void)
{
	const int LONGITUD_VECTOR = 6; 
	int pos_max = 0, pos_min = 0;
	Empleado empleado[LONGITUD_VECTOR];
	
	empleado[0].nombre = "Jose";
	empleado[0].salario = 1285;
	empleado[1].nombre = "Miguel";
	empleado[1].salario = 1275;
	empleado[2].nombre = "Paz";
	empleado[2].salario = 1911;
	empleado[3].nombre = "Portilla";
	empleado[3].salario = 1211;
	empleado[4].nombre = "Deiby";
	empleado[4].salario = 1052;
	empleado[5].nombre = "Chachi";
	empleado[5].salario = 1463;
	
	for (int i= 1; i < LONGITUD_VECTOR; i++)
		if (empleado[pos_min].salario > empleado[i].salario)
			pos_min = i;
	for (int i= 1; i < LONGITUD_VECTOR; i++)
		if (empleado[pos_max].salario < empleado[i].salario)
			pos_max = i;
	
	cout << "El salario minimo lo gana " << empleado[pos_min].nombre << " y es " << empleado[pos_min].salario << endl;
	cout << "El salario maximo lo gana " << empleado[pos_max].nombre << " y es " << empleado[pos_max].salario << endl;
			
	return 0;
}
