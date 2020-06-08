#include <iostream>
#include "rodados.h"

// -----------------------------------------------------
// Metodos Clase Rodado

// Constructor Rodado
Rodado::Rodado(string p, string m)
{
    patente = p;
    marca   = m;
}

// Devuelve la patente
string Rodado::obtenerPatente()
{
    return patente;
}

// Devuelve la marca
string Rodado::obtenerMarca()
{
    return marca;
}

// Muestra
void Rodado::mostrar()
{
    //cout << "Soy algun tipo de rodado no definido" << endl;
    //cout << "-------------------------------------------" << endl;
}



// -----------------------------------------------------
// Fin Metodos Clase Rodado
// -----------------------------------------------------

// -----------------------------------------------------
// Metodos Clase Auto

Auto::Auto(string p, string m, bool caja) : Rodado(p,m)
{
    cajaAutomatica = caja;
}



// Muestra
void Auto::mostrar()
{
    cout << "Auto - Marca: " << obtenerMarca();
    cout << " - Patente: " << obtenerPatente() << " - y ";
    if (!cajaAutomatica)
        cout << "no ";
    cout << "tengo caja automatica" << endl;
    //cout << "----------------------------------------------------------------" << endl;
}


// Metodo de Auto
void Auto::metodoEspecificoDeAuto()
{
    cout << "Este metodo lo tiene solamente Auto" << endl;
}

// -----------------------------------------------------
// Fin Metodos Clase Auto
// -----------------------------------------------------

// -----------------------------------------------------
// Metodos Clase Camion

Camion::Camion(string p, string m, int capacidad) : Rodado(p,m)
{
    capacidadCarga = capacidad;
}


void Camion::mostrar()
{
    cout << "Camion - Marca: " << obtenerMarca();
    cout << " - Patente: " << obtenerPatente() << " - y ";
    cout << "puedo cargar hasta " << capacidadCarga << " tns" << endl;
    //cout << "-----------------------------------------------------------------------" << endl;
}


// Metodo de Camion
void Camion::metodoEspecificoDeCamion()
{
    cout << "Este metodo lo tiene solamente Camion" << endl;
}
