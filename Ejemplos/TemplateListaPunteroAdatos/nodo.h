#ifndef _NODO_H_
#define _NODO_H_

#ifndef NULL
#define NULL 0
#endif

template <class T>
class Nodo
{
	private:
	T * dato;
	Nodo<T> * siguiente;
	
	public:
	Nodo (T,Nodo<T> * primero  = NULL);
	T obtener_dato ();
	/*void establecer_dato (T d);
	Nodo<T> * obtener_siguiente ();  
	void establecer_siguiente (Nodo<T> * sig); */
};

template <class T> 
Nodo<T>::Nodo (T d, Nodo<T> * primero )
{
	dato = d;
	siguiente = primero;
};
	
template <class T> 
T Nodo<T>::obtener_dato () 
{
	return dato;
}
/*
template <class T> 	
void Nodo<T>::establecer_dato (T d) 
{
	dato = d;
}
	
template <class T> 
Nodo<T> * Nodo<T>::obtener_siguiente () 
{
	return siguiente;
}
	
template <class T> 
void Nodo<T>::establecer_siguiente (Nodo<T> * sig) 
{
	siguiente = sig;
}*/

#endif // _NODO_H_
