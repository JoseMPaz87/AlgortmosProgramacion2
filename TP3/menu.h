#ifndef _MENU_H_
#define _MENU_H_
#include <iostream>
#include "lista.h"
#include <stdlib.h>


#define BARRA_SEPARADORA "###########################################################" 
using namespace std;

//PRE: Direccion de memoria de lista
//POS: muestra el numero de nodos y las opciones del programa
void mostrar_menu (Lista *lista);
//PRE: Direccion de memoria de lista
//POS: toma la opcion y realiza la tarea solicitada hasta ingresar finalizar programa
void realizar_opciones (Lista *lista);
//PRE: Ninguno
//POS: Pide y retorna el tipo de figura
string obtener_tipo ();
//PRE: Ninguno
//POS: Pide y retorna el radio
double obtener_radio ();
//PRE: Ninguno
//POS: Pide y retorna la base
double obtener_base ();
//PRE: Ninguno
//POS: Pide y retorna la altura
double obtener_altura ();
//PRE: Ninguno
//POS: Pide y retorna la posicion
uint obtener_posicion ();
#endif
