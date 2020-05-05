#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>
#include <cstdlib>
#include "agenda.h"

using namespace std;

void seleccionar (int & opcion); 

int main (void)
{
	string cadena;
	ifstream entrada ("datos.txt");
	char * indice;
	int numero, opcion;
	Agenda agenda;
	char nombre[100];
	
	if (!entrada.fail())
	{
		entrada >> cadena;
		numero = (int) strtol (cadena.c_str(), &indice,10);
		
		if (*indice && *indice != '\n')	
		{
			cerr <<	"No es un numero la primera linea" << endl;
			return 0;
		}
		
		cout << numero << endl;
		do
		{
			seleccionar (opcion);//Se espera que el usuario no sea un mono con navaja
		
			switch (opcion)
			{
				case 0:
					break;
				case 1:
					cout << "Ingresaste la opcion 1" << endl;
					crear_agenda (&agenda,numero);
					while (entrada >> cadena)
					{
						numero = strtol (cadena.c_str(), &indice,10);
		
						if (*indice && *indice != '\n')	
						{
							cout <<	"No es un numero" << endl;
							entrada >> cadena;
							continue;
						}
						entrada >> cadena;
						strcpy (nombre,cadena.c_str());
						cargar_contacto (agenda, numero, nombre);
					}
					destruir_agenda (&agenda);
					break;
				case 2:
					cout << "Ingresaste la opcion 2" << endl;
					break;
				case 3:
					cout << "Ingresaste la opcion 3" << endl;
					break;
				case 4:
					cout << "Ingresaste la opcion 4" << endl;
					break;
				default:
					cout << "Opción invalida" << endl;
			}
		}while(opcion != 0);	
	}
	else
	{
		cout << "Error al abrir archivo" << endl;
	}

	return 0;
}

void seleccionar (int & opcion)
{	
	cout << "*********AGENDA********" << endl;
	cout << "0.- Finalizar el programa" << endl;			
	cout << "1.- Ver contacos" << endl;
	cout << "2.- Eliminar contacto" << endl;
	cout << "3.- Agregar contacto" << endl;
	cout << "4.- Buscar contacto(Por número)" << endl;	
	cout << "***********************" << endl;
	cin >> opcion;	
}
