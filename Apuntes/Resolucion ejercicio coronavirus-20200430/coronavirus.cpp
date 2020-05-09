#include <iostream>
#include "coronavirus.h"

void procesar_datos(string paises[], int muertos[], int infectados[], int recuperados[], int &paisesLeidos, string paisLeido, int muertosLeidos, int infectadosLeidos, int recuperadosLeidos);

void leer_datos(ifstream* archivo, string paises[], int muertos[], int infectados[], int recuperados[], int &paisesLeidos){
    string paisLeido;
    int muertosLeidos, infectadosLeidos, recuperadosLeidos;

    while(*archivo >> paisLeido){
        *archivo >> muertosLeidos;
        *archivo >> infectadosLeidos;
        *archivo >> recuperadosLeidos;

        procesar_datos(paises, muertos, infectados, recuperados, paisesLeidos, paisLeido, muertosLeidos, infectadosLeidos, recuperadosLeidos);
    }
}

void mostrar_totales(string paises[], int muertos[], int infectados[], int recuperados[], int paisesLeidos){
    int total_muertos = 0, total_infectados = 0, total_recuperados = 0;
    for(int i = 0; i < paisesLeidos; i++){
        cout << "El pais de " << paises[i] << " tiene un total de " << muertos[i] << " muertos, " << infectados[i] << " infectados, " << recuperados[i] << " recuperados" << endl;
        total_muertos += muertos[i];
        total_infectados += infectados[i];
        total_recuperados += recuperados[i];
    }
    cout << "El total mundial de muertos es de " << total_muertos << ", el total mundial de infectados es de " << total_infectados << " y el total mundial de recuperados es de " << total_recuperados << endl;
}

void procesar_datos(string paises[], int muertos[], int infectados[], int recuperados[], int &paisesLeidos, string paisLeido, int muertosLeidos, int infectadosLeidos, int recuperadosLeidos){
    bool existeElPais = false;
    int i = 0;

    if(paisesLeidos == 0){
        paises[0] = paisLeido;
        muertos[0] = muertosLeidos;
        infectados[0] = infectadosLeidos;
        recuperados[0] = recuperadosLeidos;
        existeElPais = true;
        paisesLeidos++;
    }
    while(!existeElPais){
        if(paises[i] == paisLeido){
            muertos[i] += muertosLeidos;
            recuperados[i] += recuperadosLeidos;
            infectados[i] += infectadosLeidos;
            existeElPais = true;
        } else if(i == paisesLeidos){
            paises[i] = paisLeido;
            muertos[i] = muertosLeidos;
            recuperados[i] = recuperadosLeidos;
            infectados[i] = infectadosLeidos;
            existeElPais = true;
            paisesLeidos++;
        }
        i++;
    }
}
