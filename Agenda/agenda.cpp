#include "agenda.h"

void crear_agenda (Agenda * agenda, int n_contactos)
{
	(*agenda).contacto = new Contacto[n_contactos];
	(*agenda).n_contactos = 0;
}

void destruir_agenda (Agenda * agenda)
{
	delete (*agenda).contacto;
}

void cargar_contacto (Agenda & agenda, int long numero, char * nombre)
{		
	agenda.contacto[agenda.n_contactos] = numero;
	strcpy (nombre, agenda.contacto[agenda.n_contactos].nombre);
	agenda.n_contactos++;	
}

void mostrar_agenda (Agenda * agenda)
{
	//for (int i = 0; i < (*agenda).n_contactos; i++)
		//cout << (*agenda).contacto[i].numero << ' ' << (*agenda).contacto[i].nombre << endl;
}
