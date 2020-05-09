#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string NOMBRE_ARCHIVO = "log.txt"; //Tener creado un log.txt previamente

int main(){
    fstream archivo(NOMBRE_ARCHIVO, ios::in|ios::out);
    string dato;
    string nuevaInformacion = "Hola";

    if(!archivo.fail()){
        archivo >> dato;
        cout << dato << endl; //Leo el primer dato y lo imprimo

        archivo.seekg(0, ios::beg); //Muevo el puntero de escritura al inicio del archivo

        archivo << nuevaInformacion; //Escribo Hola en los primeros 4 caracteres

        archivo >> dato;
        cout << dato; //Leo el primer dato y lo imprimo

        archivo.close();
    } else {
        cout << "El archivo no se abrio correctamente" << endl;
    }

    return 0;
}
