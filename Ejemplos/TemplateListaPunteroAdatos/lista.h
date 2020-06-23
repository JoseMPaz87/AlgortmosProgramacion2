#ifndef _LISTA_H_
#define _LISTA_H_
#include "nodo.h"
using namespace std;

template <class T> 
class Lista
{
	private:
	Nodo<T> * primero;
	
	public:
	Lista();
	~Lista();
	void alta_principio(T);
	/*void alta_final(T);
	void alta_posicion (int, int);
	void baja(T);          //baja de la primera aparición
	bool buscar(T);
	void mostrar()const;*/
};

template <class T> 
Lista<T>::Lista()
{	
	primero = NULL;
}

template <class T> 
Lista<T>::~Lista()
{  
	if (primero)
	{
   	Nodo<T> * borrar = primero;
   	
      while (borrar)
    	{
    	   primero = primero->obtener_siguiente ();
    	   delete borrar->obtener_dato ();
    	 	delete borrar;
        	borrar = primero;
      }
	}
}

template <class T> 
void Lista<T>::alta_principio (T dato)
{ 
	primero = new Nodo<T> (dato,primero); 
}
/*
template <class T> 
void Lista<T>::alta_final(T d)
{
	Nodo<T> * aux = primero;
	
	while ((aux) && (aux->obtener_siguiente()))
		aux = aux->obtener_siguiente();
	
	if (aux)
     	aux->establecer_siguiente (new Nodo<T>(d,aux->obtener_siguiente()));
	else 
		alta_principio (d);
}

template <class T>
void Lista<T>::alta_posicion (int d, int pos)
{
	if (pos == 0)
		alta_principio (d);
 	else   
 	{
   	Nodo<T> * aux1 = primero, * aux2;
      int cont = 0;
      
   	while ( ((aux1) && (aux1->obtener_siguiente()))  && (cont < pos-1))
   	{
      	aux1 = aux1->obtener_siguiente();
         cont++;
      }
      if (aux1)
      {
      	aux2 = new Nodo<T>(d);
         aux2->establecer_siguiente (aux1->obtener_siguiente());
         aux1->establecer_siguiente (aux2);
      }
      else
        	alta_final(d);
   }
}

template <class T>  
void Lista<T>::baja(T d)
{
	if (primero)	
	{
		if((primero->obtener_dato() != d) && (primero->obtener_siguiente()))
		{
			Nodo<T> * aux1 = primero, * aux2 = primero->obtener_siguiente();
			while ((aux2->obtener_dato() != d) && (aux2->obtener_siguiente()!=NULL))
			{
				aux1=aux2 ;
				aux2 =aux2->obtener_siguiente();
			}
			if (aux2->obtener_dato() == d)
			{
				aux1->establecer_siguiente(aux2->obtener_siguiente());
				delete aux2;
			}
		}
		else 
			if(primero->obtener_dato() == d)
			{
				Nodo<T> * aux = primero;
				primero = primero->obtener_siguiente();
				delete aux;
			}
	}
}

template <class T> 
bool Lista<T>::buscar(T d)
{  
	Nodo<T> * aux= primero;
	
   while(aux)
   {  
   	if (aux->obtener_dato() == d)
      	return true;
      else
      	aux=aux->obtener_siguiente();
	}

   return false;
}

template <class T>
void Lista<T>::mostrar() const
{
	Nodo<T> * aux = primero;
	
	while (aux)
	{
   	cout << aux->obtener_dato() << endl;
      aux = aux->obtener_siguiente();
   }
}*/
#endif // _LISTA_H_
