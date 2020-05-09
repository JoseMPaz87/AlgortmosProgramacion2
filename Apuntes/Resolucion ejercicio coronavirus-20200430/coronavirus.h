#ifndef _CORONAVIRUS_H
#define _CORONAVIRUS_H

#include <fstream>
#include <string>

using namespace std;

/*
    PRE: El archivo debe estar avierto correctamente
    POST: Devuelve el archivo correctamente procesado y dividido por pais con cada indice relacionado al mismo pais */
void leer_datos(ifstream* archivo, string paises[], int muertos[], int infectados[], int recuperados[], int &paisesLeidos);

/*
    PRE: -
    POST: Muestra por pantalla el total de muertos, infectados y recuperados por pais y luego el total mundial */
void mostrar_totales(string paises[], int muertos[], int infectados[], int recuperados[], int paisesLeidos);

#endif //_CORONAVIRUS_H
