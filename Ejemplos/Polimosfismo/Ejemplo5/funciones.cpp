#include "funciones.h"

// Genera una patente en forma aleatoria
string generarPatente()
{
    string patente;
    char c;

    for (int i = 0; i < 3; i++)
    {
        c = 65 + (rand() % 26);
        patente += c;
    }

    for (int i = 0; i < 3; i++)
    {
        c = 48 + (rand() % 10);
        patente += c;
    }

    return patente;
}

// Genera una marca en forma aleatoria
string generarMarca()
{
    string marca[] = {  "Fiat",
                        "Chevrolet",
                        "Ford",
                        "Volkswagen",
                        "Dogde",
                        "Renault",
                        "Peugeot",
                        "Toyota"};
    int x = rand() % 8;

    return marca[x];
}

// Decide si el auto tiene o no caja automatica
bool generarCajaAutomatica()
{
    double x = (double)rand() / RAND_MAX;

    if (x < 0.2)
        return true;

    return false;
}

// Genera la capacidad maxima de carga del camion
int generarCapacidadCarga(int min, int max)
{
    int capacidad = min + (rand() % (max - min));

    return capacidad;
}

