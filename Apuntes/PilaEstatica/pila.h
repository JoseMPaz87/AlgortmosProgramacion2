# ifndef PILA_H_INCLUDED
# define PILA_H_INCLUDED

// Tipo de dato que contiene la pila
typedef char Dato ;

// Tamanio maximo de la pila
const int MAXIMO = 10;

/** Clase Pila
Implementada con un vector de elementos
y un tamanio fijo ( MAXIMO )
*/
class Pila 
{
	private :
	// Vector donde se iran agregando los elementos
	Dato pila [ MAXIMO ];
	// Tamanio logico de la pila
	unsigned tope ;
	public :
	// Constructor
	// PRE : ninguna
	// POST : crea una pila vacía con tope = 0
	Pila ( );
	// Destructor
	// PRE : la pila fue creada
	// POST : nada ( no tiene código ya que es estática )
	~ Pila( );
	// Agrega un dato
	// PRE : d es un Dato valido y hay lugar en la pila
	// POST : Si la pila no esta llena
	// - se inserta al final el dato d
	// - tope se incrementa en 1
	// Si la lista esta llena no hace nada
	void agregar(Dato);
	// Indica si la pila está vacía o no
	// PRE : lista creada
	// POST : Devuelve TRUE si la pila esta vacia
	// Si no devuelve FALSE
	bool pilaVacia ( );
	// Indica si la pila esta llena o no
	// PRE : pila creada
	// POST : Devuelve TRUE si la pila esta llena
	//	Si no devuelve FALSE
	bool pilaLlena ( );
	// Devuelve el dato que esta en tope
	// PRE : - no vacia
	// POST : devuelve el dato que esta en tope
	Dato obtener ( );
	// Sacar un dato
	// PRE : - pila creada y no vacia
	// POST : - se quita el dato que esta en tope y se devuelve
	//	- tope se decrementa en 1
	Dato sacar ( );
	// Devuelve el tamanio logico de la Pila
	// PRE : pila creada
	// POST : devuelve el valor de tope
	unsigned obtenerTope ();
};
// = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =
// Invariantes
// x = sacar ( agregar ( x ))
# endif // PILA_H_INCLUDED
