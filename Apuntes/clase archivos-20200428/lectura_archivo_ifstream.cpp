#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const string NOMBRE_ARCHIVO = "datos.txt";

int main(){
    ifstream archivoDeTexto(NOMBRE_ARCHIVO);
    string nombre, apellido;
    int edad;

    if(!archivoDeTexto.fail()){
        while(archivoDeTexto >> nombre){
            archivoDeTexto >> apellido;
            archivoDeTexto >> edad;
            cout << "Nombre: " << nombre << ", apellido: " << apellido << ", edad: " << edad << endl;
        }
        archivoDeTexto.close();
    } else {
        cout << "El archivo no se abrio correctamente" << endl;
    }

    return 0;
}
