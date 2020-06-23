#include "menu.h"

void mostrar_menu (Lista * lista)
{
		cout << endl << BARRA_SEPARADORA << endl;
	cout << ETIQUETA_N_NODOS << lista->obtener_n_nodos ();
	cout << endl << ETIQUETA_TITULO_MENU << endl << endl;
	cout << ETIQUETA_MOSTRAR_FIGURA_POR_POSICION << endl;
	cout << ETIQUETA_ELIMINAR_FIGURA_POR_POSICION << endl;
	cout << ETIQUETA_AGREGAR_FIGURA << endl;
	cout << ETIQUETA_MOSTRAR_TODAS_LAS_FIGURAS << endl;
	cout << ETIQUETA_MOSTRAR_FIGURA_MAYOR_SUPERFICIE << endl;
	cout << ETIQUETA_MOSTRAR_FIGURA_MENOR_SUPERFICIE << endl;
	cout << ETIQUETA_FIN_PROGRAMA << endl;
	cout << endl << BARRA_SEPARADORA << endl;
}

void realizar_opciones (Lista * lista)
{
	int opcion;
	string tipo;
	
	do
	{
		mostrar_menu (lista);
		cin >> opcion;
		
		switch (opcion)
		{
			case MOSTRAR_TIPO_DE_FIGURA_POR_POSICION:
				lista->mostrar_tipo_figura (obtener_posicion ());
				break;
			case ELIMINAR_FIGURA_POR_POSICION:
				lista->eliminar_por_posicion (obtener_posicion ());
				break;
			case AGREGAR_FIGURA:
				tipo = obtener_tipo ();				
				if (tipo == CIRCULO || tipo == RECTANGULO || tipo == TRIANGULO)
				{
					if (tipo == CIRCULO)
						lista->insertar_al_principio (obtener_radio (),tipo);
					else
						lista->insertar_al_principio (obtener_base (),obtener_altura (), tipo);
				}
				else
					cout << FIGURA_INVALIDA << endl;	
				break;
			case MOSTRAR_TODAS_LAS_FIGURAS:
				lista->mostrar_toda ();
				break;
			case MOSTRAT_FIGURA_CON_MAYOR_SUPERFICIE:
				lista->mostrar_mayor_superficie();
				break;
			case MOSTRAT_FIGURA_CON_MENOR_SUPERFICIE:	
				lista->mostrar_menor_superficie();
				break;
			case SALIR:
				cout << FIN_PROGRAMA << endl;
				break;
			default:	
				cout << ERROR_OPCION_INVALIDA << endl;
		}
	}while(opcion != SALIR);
}

string obtener_tipo ()
{
	string tipo;
	
	cout << INGRESO_DE_FIGURA;
	cin >> tipo;
	
	return tipo;
}

double obtener_radio ()
{
	double radio;
	cout << INGRESO_DE_RADIO;
	cin >> radio;
	return radio;
}

double obtener_base ()
{
	double base;
	cout << INGRESO_DE_BASE;
	cin >> base;
	return base;
}

double obtener_altura ()
{
	double altura;
	cout << INGRESO_DE_ALTURA;
	cin >> altura;
	return altura;
}

uint obtener_posicion ()
{
	uint posicion;	
	cout << INGRESO_DE_POSICION << endl;
	cin >> posicion;
	return posicion;
}
