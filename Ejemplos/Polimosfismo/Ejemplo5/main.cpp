#include <iostream>
#include <ctime>
#include "rodados.h"
#include "funciones.h"

int main()
{
    // Cambia la semilla para las funciones random
    // si se saca esta linea siempre genera lo mismo
    srand(time(0));

    // Vector de 10 punteros a rodados
    Rodado* rodados[10];

    // Se crean 10 rodados en forma aleatoria
    // pueden ser autos o camiones
    for (int i = 0; i < 10; i++)
    {
        string patente = generarPatente();
        string marca   = generarMarca();

        // Con este numero se decide si crea un Camion o un Auto
        double x = (double)rand() / RAND_MAX;

        if (x < 0.25) // Crea un Camion
        {
            int capacidad = generarCapacidadCarga(20, 50);
            rodados[i] = new Camion(patente, marca, capacidad);
        }
        else // Crea un Auto
        {
            bool caja = generarCajaAutomatica();
            rodados[i] = new Auto(patente, marca, caja);
        }
    }

    // Se muestran
    for (int i = 0; i < 10; i++)
    {
        std::cout << i + 1 << ". ";
        rodados[i]->mostrar();

        // Con el casteo dinamico se puede acceder a los metodos
        // que extienden a la clase base porque se obtiene un
        // puntero del tipo del objeto al que apunta

        Auto *pa = dynamic_cast<Auto*>(rodados[i]);
        if (pa)
        {
            pa->metodoEspecificoDeAuto();
        }
        else
        {
            Camion *pc = dynamic_cast<Camion*>(rodados[i]);
            pc->metodoEspecificoDeCamion();
        }

        cout << "-----------------------------------------------------------------------" << endl;

    }

    // Se libera la memoria
    for (int i = 0; i < 10; i++)
    {
        delete rodados[i];
    }

    return 0;
}
