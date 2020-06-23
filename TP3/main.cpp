#include <iostream>
#include <fstream>
#include "validacion.h"
#include "lista.h"
#include "menu.h"

using namespace std;

int main (int argc, const char * argv[])
{
	estado_t estado;
	Lista lista;
	const char * errores[] = {NULL, ETIQUETA_ERROR_N_ARGUMENTOS, ETIQUETA_ERROR_ABRIR_ARCHIVO};
	
	if ((estado = validar_entrada (argc,argv)) != BIEN)
	{
		cout << errores [estado];
		return EXIT_FAILURE;
	}
	
	lista.cargar_archivo (argv[POS_NOMBRE_ARCHIVO]);
	realizar_opciones (&lista);
	
	return EXIT_SUCCESS;
}
