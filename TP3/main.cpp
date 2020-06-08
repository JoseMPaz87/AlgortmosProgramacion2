/* TP3 Lista de Figuras Geometricas
Para compilar escribir:
make
Para ejecular escribir:
./tp3
valgrind -v --tool=memcheck --leak-check=full ./tp3
*/
#include "lista.h"
#include "figura.h"

using namespace std ;

void menu (void);

int main ()
{
	Figura * figuras[3];
	figuras[0] = new Circulo (2.1,"Amarillo");
	figuras[1] = new Rectangulo (3.2, 8.7,"Azul");
	figuras[2] = new Triangulo (5.4,6.9,"Rojo");
	for (int i = 0; i < 3; i++)
		figuras[i]->mostrar();
	for (int i = 0; i < 3; i++)
		delete figuras[i];
	menu ();
	
	/*
	for (int i = 0; i < 3; i++)
		delete vector[i];	
	*/
	return 0;
}

void menu (void)
{
	cout << endl << "################### Figuras  Geométricas ##################" << endl << endl;
	cout << "1.- Ingresar posición para indicarte el tipo de figura" << endl;
	cout << "2.- Ingresar la posición de la figura que será eliminada" << endl;
	cout << "3.- Para agregar una nueva figura" << endl;
	cout << "4.- Mostrar todos los objetos" << endl;
	cout << "5.- Mostrar la figura con mayor superficie" << endl;
	cout << "6.- Mostrar la figura con menor superficie" << endl;
	cout << "7.- Terminar el programa" << endl;
}
