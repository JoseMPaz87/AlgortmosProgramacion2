#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "nodo.h"


using namespace std;


int main (void)
{
	Nodo lista;
	Dato dato;
	string cadena;
	ifstream entrada ("datos.txt");
	
	
	if (entrada >> dato.director)
	{
		cout << "El archivo esta vacio" << endl;
		return 0;
	}	
	entrada >> dato.pelicula;
	entrada >> cadena;
	dato.puntaje = (float) strtod (cadena.c_str(),NULL);
	entrada >> cadena;
	dato.recaudacion = (uint) strtol (cadena.c_str(),NULL, 10);
	lista.asignarDato (dato);
	
	while (entrada >> dato.director)
	{
		entrada >> dato.pelicula;
		entrada >> cadena;
		dato.puntaje = (float) strtod (cadena.c_str(),NULL);
		entrada >> cadena;
		dato.recaudacion = (uint) strtol (cadena.c_str(),NULL, 10);	
		Nodo nodo(dato);
		lista.asignarSiguiente (&nodo);	
	}
	
	while (lista.obtenerSiguiente ())
	{
		Dato dato = lista.obtenerDato (); 
		cout << dato.director << ' ' << dato.pelicula << ' ' << dato.puntaje << ' '<< dato.recaudacion<< endl;
	
	}
	return 0;	
}










/*
	char * c;
	cout << static_cast<void*>(c) << endl;	
	c = new char[100];
	cout << static_cast<void*>(c) << endl;
*/

