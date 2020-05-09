/*
    Compilarlo con:
        g++ ejercicioCoronavirus.cpp coronavirus.cpp -o ejecutable

    y despues ejecutar el ejecutable con:
        ./ejecutable datos_coronavirus.txt

    NOTA: Asegurarse que la terminal este abierta en el mismo directorio que los archivos
    (Una posible forma de hacerlo es yendo a la carpeta donde tengan los archivos, hacer click derecho en el fondo y elegir la opcion "Abrir en una terminal"
    para usuarios de Ubuntu).
    NOTA2: Asegurarse que el archivo datos_coronavirus.txt este en el mismo directorio que los .cpp, si no es asi, moverlo con los .cpp o cambiar el
    2do parametro del llamado al ejecutable por el path correspondiente.
*/


#include <iostream>
#include <fstream>
#include "coronavirus.h"

const int POSICION_NOMBRE_DEL_ARCHIVO = 1;
const int CANTIDAD_DE_PARAMETROS = 2;
const int TOTAL_PAISES = 52;

using namespace std;

int main(int argc, char* argv[]){
    if(argc == CANTIDAD_DE_PARAMETROS){
        ifstream archivoCoronavirus(argv[POSICION_NOMBRE_DEL_ARCHIVO]);

        if(!archivoCoronavirus.fail()){
            string paises[TOTAL_PAISES];
            int muertos[TOTAL_PAISES];
            int infectados[TOTAL_PAISES];
            int recuperados[TOTAL_PAISES];

            int paisesLeidos = 0;

        leer_datos(&archivoCoronavirus, paises, muertos, infectados, recuperados, paisesLeidos);
        mostrar_totales(paises, muertos, infectados, recuperados, paisesLeidos);

        archivoCoronavirus.close();
        } else {
            cout << "El archivo " << argv[POSICION_NOMBRE_DEL_ARCHIVO] << " no pudo abrirse" << endl;
        }
    } else {
        cout << "La cantidad de parametros ingresada es incorrecta" << endl;
    }

    return 0;
}
