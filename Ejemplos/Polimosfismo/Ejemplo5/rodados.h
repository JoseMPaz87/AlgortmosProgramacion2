#ifndef RODADOS_H_INCLUDED
#define RODADOS_H_INCLUDED

#include <string>

using namespace std;

// -----------------------------------------------------
// Clase Rodado
// -- es una clase padre para utilizar polimorfismo
class Rodado
{
    // Atributos
    private:
        string patente;
        string marca;

    // Metodos
    public:
        Rodado(string p, string m); // Constructor
        string obtenerPatente();    // Devuelve la patente
        string obtenerMarca();      // Devuelve la marca
        virtual void mostrar()=0;     // Muestra
        virtual ~Rodado() {};
};
// -----------------------------------------------------
// Fin Clase Rodado
// -----------------------------------------------------

// -----------------------------------------------------
// Clase Auto
class Auto : public Rodado
{
    // Atributos
    private:
        bool cajaAutomatica;

    // Metodos
    public:
        // Constructor
        Auto(string p, string m, bool caja);

        // Mostrar esta redefinido
        void mostrar();

        // Metodo solo de auto: no se puede acceder
        // con un puntero de tipo Rodado
        void metodoEspecificoDeAuto();
};
// -----------------------------------------------------
// Fin Clase Auto
// -----------------------------------------------------

// -----------------------------------------------------
// Clase Camion
class Camion : public Rodado
{
    // Atributos
    private:
        int capacidadCarga;

    // Metodos
    public:
        // Constructor
        Camion(string p, string m, int capacidad);

        // Mostrar esta redefinido
        void mostrar();

        // Metodo solo de camion: no se puede acceder
        // con un puntero de tipo Rodado
        void metodoEspecificoDeCamion();

};
// -----------------------------------------------------
// Fin Clase Camion
// -----------------------------------------------------


#endif // RODADOS_H_INCLUDED
