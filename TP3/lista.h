#ifndef _LISTA_H_
#define _LISTA_H_

#include "nodo.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "rectangulo.h"
#include "circulo.h"
#include "triangulo.h"
using namespace std;

#define NINGUN_NODO 0
#define PRIMER_NODO 1
const string RECTANGULO = "R";
const string CIRCULO = "C";
const string TRIANGULO = "T";

class Lista
{
	private:
	Nodo * primero;
	uint n_nodos;
	public:
	//PRE: Ninguno
	//POS: primero = NULL, n_nodos = 0
	Lista ();
	//PRE: Ninguna
	//POS: Borra el nodo y su dato 
	~Lista();
	//PRE: radio > 0, t == C
	//POS: crea un nodo y un dato del tipo t y lo agrega al principio de la lista 
	void insertar_al_principio (double radio, string t);
	//PRE: base > 0, altura > 0 y t == R o T
	//POS: crea un nodo y un dato del tipo t y lo agrega al principio de la lista 
	void insertar_al_principio (double base, double altura, string t);
	//PRE: nombre_archivo debe estar contenido en la misma carpeta que el codigo fuente
	//POS: carga la lista con los datos del archivo nombre_archivo
	void cargar_archivo (const char * nombre_archivo);
	//PRE: Ninguno
	//POS: Retorno n_nodos
	uint obtener_n_nodos ();
	//PRE: Ninguno
	//POS: Muestra toda la lista desde el inicio hasta NULL
	void mostrar_toda();
	//PRE: 1 < posicion <= n_nodos
	//POS: Retorna un puntero al nodo ubicado en posicion
	Nodo * obtener_nodo (uint posicion); 
	//PRE: 1 < posicion <= n_nodos
	//POS: muestra el tipo de figura ubicado en posicion
	void mostrar_tipo_figura(uint posicion);
	//PRE: Ninguno
	//POS: retorno el valor de la mayor superficie
	void mostrar_mayor_superficie ();
	//PRE: Ninguno
	//POS: retorno el valor de la menor superficie
	void mostrar_menor_superficie ();
	//PRE: 1 < posicion <= n_nodos
	//POS: Elimina el nodo ubicado en posicion
	void eliminar_por_posicion (uint posicion);
};

#endif
