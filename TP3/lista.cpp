#include "lista.h"

Lista::Lista ()
{
	primero = NULL;
	n_nodos = NINGUN_NODO;
}

void Lista::insertar_al_principio (double radio, string t)
{ 
	Nodo * aux = new Nodo (); 
	aux->establecer_siguiente(primero);
	aux->establecer_dato (new Circulo (radio, t));
	primero = aux;
	n_nodos++;
}

void Lista::insertar_al_principio (double base, double altura, string t)
{ 
	if (t == RECTANGULO)
	{
		Nodo * aux = new Nodo (); 
		aux->establecer_siguiente(primero);
		aux->establecer_dato (new Rectangulo (base, altura, t));
		primero = aux;
		n_nodos++;
	}
	if (t == TRIANGULO)
	{
		Nodo * aux = new Nodo (); 
		aux->establecer_siguiente(primero);
		aux->establecer_dato ( new Triangulo (base, altura, t));
		primero = aux;
		n_nodos++;
	}
}

void Lista::cargar_archivo (const char * nombre_archivo)
{
	string entrada;
	ifstream flujo_entrada (nombre_archivo);
	float radio, base, altura;
	
	while (flujo_entrada >> entrada)
	{
		if (entrada == CIRCULO)
		{
			flujo_entrada >> entrada;
			istringstream (entrada) >> radio;
			insertar_al_principio (radio,CIRCULO);
		}
		if (entrada == RECTANGULO)
		{
			flujo_entrada >> entrada;
			istringstream (entrada) >> base;
			flujo_entrada >> entrada;
			istringstream (entrada) >> altura;
			insertar_al_principio (base,altura,RECTANGULO);
		}
		if (entrada == TRIANGULO)
		{
			flujo_entrada >> entrada;
			istringstream (entrada) >> base;
			flujo_entrada >> entrada;
			istringstream (entrada) >> altura;
			insertar_al_principio (base, altura,TRIANGULO);
		}
		
	}
	
	flujo_entrada .close ();
}

Lista::~Lista()
{  
	Nodo * borrar = primero;
	for (uint i = PRIMER_NODO; i <= n_nodos; i++, borrar = primero)
	{
		primero = primero->obtener_siguiente ();
    	   
    	if (borrar->obtener_dato ())
    		delete borrar->obtener_dato ();
    	   	
    	 delete borrar;
	}
}

uint Lista::obtener_n_nodos ()
{
	return n_nodos;
}

void Lista::mostrar_toda()
{
	Nodo * aux = primero;
	
	while (aux)
	{	
		Dato * d = aux->obtener_dato();
		if (d->obtener_tipo() == CIRCULO)
		{
			Circulo * cir = (Circulo *)(aux->obtener_dato());
			cir->mostrar ();
		}
		if (d->obtener_tipo() == RECTANGULO)
		{
			Rectangulo * rec = (Rectangulo *)(aux->obtener_dato());
			rec->mostrar();
		}
		if (d->obtener_tipo() == TRIANGULO)
		{
			Triangulo * tri = (Triangulo *)(aux->obtener_dato());
			tri->mostrar();
		}
      aux = aux->obtener_siguiente();
   }
}

Nodo * Lista::obtener_nodo ( uint posicion ) 
{
	Nodo * aux = primero ;

	for (uint i = PRIMER_NODO; i < posicion; i++) 
		aux = aux->obtener_siguiente ();
	
	return aux ;
}

void Lista::mostrar_tipo_figura(uint posicion)
{
	string tipo;
	if (posicion <= NINGUN_NODO || posicion > n_nodos)
	{
		cout << ETIQUETA_ERROR_POSICION;
		return;
	}
	Nodo * nodo = obtener_nodo (posicion);	
	Dato * dato = nodo->obtener_dato ();
	tipo = dato->obtener_tipo();
	
	if (tipo == CIRCULO)
	{
		Circulo * cir = (Circulo *)(nodo->obtener_dato());
		cir->mostrar ();
	}
	if (tipo == RECTANGULO)
	{
		Rectangulo * rec = (Rectangulo *)(nodo->obtener_dato());
		rec->mostrar();
	}
	if (tipo == TRIANGULO)
	{
		Triangulo * tri = (Triangulo *)(nodo->obtener_dato());
		tri->mostrar();
	}
}

void Lista::mostrar_mayor_superficie ()
{
	double mayor_superficie, sup;	
	Nodo * aux = primero;
	Dato * d = aux->obtener_dato();
	
	if (d->obtener_tipo() == CIRCULO)
	{
		Circulo * cir = (Circulo *)(aux->obtener_dato());
		mayor_superficie = cir->superficie ();
	}
	if (d->obtener_tipo() == RECTANGULO)
	{
		Rectangulo * rec = (Rectangulo *)(aux->obtener_dato());
		mayor_superficie = rec->superficie ();
	}
	if (d->obtener_tipo() == TRIANGULO)
	{
		Triangulo * tri = (Triangulo *)(aux->obtener_dato());
		mayor_superficie = tri->superficie ();
	}
   aux = aux->obtener_siguiente();
	
	while (aux)
	{
		d = aux->obtener_dato();
		if (d->obtener_tipo() == CIRCULO)
		{
			Circulo * cir = (Circulo *)(aux->obtener_dato());
			sup = cir->superficie ();
		}
		if (d->obtener_tipo() == RECTANGULO)
		{
			Rectangulo * rec = (Rectangulo *)(aux->obtener_dato());
			sup = rec->superficie ();
		}
		if (d->obtener_tipo() == TRIANGULO)
		{
			Triangulo * tri = (Triangulo *)(aux->obtener_dato());
			sup = tri->superficie ();
		}
		
		if (sup > mayor_superficie)
			mayor_superficie = sup;
      
      aux = aux->obtener_siguiente();		
	}
	
	cout << mayor_superficie << endl;
}


void Lista::mostrar_menor_superficie ()
{
	double menor_superficie, sup;	
	Nodo * aux = primero;
	Dato * d = aux->obtener_dato();
	
	if (d->obtener_tipo() == CIRCULO)
	{
		Circulo * cir = (Circulo *)(aux->obtener_dato());
		menor_superficie = cir->superficie ();
	}
	if (d->obtener_tipo() == RECTANGULO)
	{
		Rectangulo * rec = (Rectangulo *)(aux->obtener_dato());
		menor_superficie = rec->superficie ();
	}
	if (d->obtener_tipo() == TRIANGULO)
	{
		Triangulo * tri = (Triangulo *)(aux->obtener_dato());
		menor_superficie = tri->superficie ();
	}
   aux = aux->obtener_siguiente();
	
	while (aux)
	{
		d = aux->obtener_dato();
		if (d->obtener_tipo() == CIRCULO)
		{
			Circulo * cir = (Circulo *)(aux->obtener_dato());
			sup = cir->superficie ();
		}
		if (d->obtener_tipo() == RECTANGULO)
		{
			Rectangulo * rec = (Rectangulo *)(aux->obtener_dato());
			sup = rec->superficie ();
		}
		if (d->obtener_tipo() == TRIANGULO)
		{
			Triangulo * tri = (Triangulo *)(aux->obtener_dato());
			sup = tri->superficie ();
		}
		
		if (sup < menor_superficie)
			menor_superficie = sup;
      
      aux = aux->obtener_siguiente();		
	}
	
	cout << menor_superficie << endl;
}

void Lista::eliminar_por_posicion (uint posicion) 
{
	Nodo * borrar = primero ;
	
	if (posicion <= NINGUN_NODO || posicion > n_nodos)
	{
		cout << ETIQUETA_ERROR_POSICION  << endl;
		return;
	}
	
	if ( posicion == PRIMER_NODO) 
		primero = borrar->obtener_siguiente ();
	else 
	{
		Nodo * anterior = obtener_nodo ( posicion - PRIMER_NODO);
		borrar = anterior->obtener_siguiente ();
		anterior->establecer_siguiente ( borrar->obtener_siguiente ());
	}
	delete borrar->obtener_dato ();
	delete borrar ;
	n_nodos--;
}
