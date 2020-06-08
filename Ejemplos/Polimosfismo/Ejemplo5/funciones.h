#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <string>
#include <cstdlib>

using namespace std;

// Funciones auxiliares para
string generarPatente();                // Genera Patente
string generarMarca();                  // Genera Marca
bool   generarCajaAutomatica();         // Caja automatica: si / no
int    generarCapacidadCarga(int, int); // Carga maxima del camion

#endif // FUNCIONES_H_INCLUDED
