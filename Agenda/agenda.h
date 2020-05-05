#ifndef _AGENDA_H_
#define _AGENDA_H_

#include <cstring>
#include <ctype.h>
#include <cstdlib>
#include <string>
#include <fstream>

#define LONGITUD_NOMBRE 100

typedef struct
{
	char nombre[LONGITUD_NOMBRE];
	long int numero;
}Contacto;


typedef struct
{
	Contacto * contacto;
	int n_contactos;
}Agenda;

void crear_agenda (Agenda * agenda, int n_contactos);
void destruir_agenda (Agenda * agenda);
void cargar_contacto (Agenda & agenda, int long numero, char * nombre);
void mostrar_agenda (Agenda * agenda);
#endif
