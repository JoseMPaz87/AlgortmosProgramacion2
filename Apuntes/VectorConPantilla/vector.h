# ifndef VECTOR_H_INCLUDED
# define VECTOR_H_INCLUDED
template < typename Dato >
class Vector 
{
	private :
	// Atributos
	unsigned longitud ;
	Dato * datos ;
	public :
	// Metodos
	// Constructor sin parametros
	Vector ();
	// Constructor con parametros
	Vector ( unsigned largo );
	// Constructor de copia
	Vector ( const Vector & vec );
	// Destructor
	~ Vector ();
	// insertar ( la primera posicion es la 1)
	void insertar ( Dato d , unsigned pos );
	// eliminar ( la primera posicion es la 1)
	void eliminar ( unsigned pos );
	// devuelve la longitud del vector
	unsigned tamanio ();
	// devuelve el dato que esta en pos
	Dato elemento ( unsigned pos );
	// redimensiona al vector
	void redimensionar ( unsigned largo );
	private :
	// Copia los datos del vector pasado por parametro desde d hasta h
	// Pre : 0 < d <= h <= longitud del vector
	// Post : en datos coloca los valores del vector
	void copiar ( Dato * vec , unsigned d , unsigned h );
};

// Constructor sin parametros
template < typename Dato >
Vector < Dato >:: Vector () 
{
	longitud = 0;
	datos = 0;
}

// Constructor con parametros
template < typename Dato >
Vector < Dato >:: Vector ( unsigned largo ) 
{
	longitud = largo ;
	datos = new Dato [ largo ];
	// anular (1 , largo );
}

// Constructor de copia
template < typename Dato >
Vector < Dato >:: Vector ( const Vector & vec ) 
{
	longitud = vec . longitud ;
	if ( longitud > 0) 
	{
		datos = new Dato [ longitud ];
		copiar ( vec . datos , 1 , longitud );
	}
	else
		datos = 0;
}

// Destructor
template < typename Dato >
Vector < Dato >::~ Vector () 
{
	if ( longitud > 0)
		delete [] datos ;
}

// insertar ( la primera posicion es la 1)
template < typename Dato >
void Vector < Dato >:: insertar ( Dato d , unsigned pos ) 
{
	datos [ pos -1] = d ;
}

// eliminar ( la primera posicion es la 1)
template < typename Dato >
void Vector < Dato >:: eliminar ( unsigned pos ) 
{
	datos [ pos -1] = 0;
}

// devuelve la longitud del vector
template < typename Dato >
unsigned Vector < Dato >:: tamanio () 
{
	return longitud ;
}

// devuelve el dato que esta en pos
template < typename Dato >
Dato Vector < Dato >:: elemento ( unsigned pos ) 
{
	return datos [ pos -1];
}

// redimensiona al vector
template < typename Dato >
void Vector < Dato >:: redimensionar ( unsigned largo ) 
{
	if ( largo != longitud ) 
	{
		Dato * borrar = datos ;
		datos = new Dato [ largo ];
		copiar ( borrar , 1 , largo );
		delete [] borrar ;
		longitud = largo ;
	}
}

// Copia los datos del vector pasado por parametro desde d hasta h
template < typename Dato >
void Vector < Dato >:: copiar ( Dato * vec , unsigned d , unsigned h ) 
{
	for ( unsigned i = d -1; i < h ; i ++)
		datos [ i ] = vec [ i ];
}
# endif // VECTOR_H_INCLUDED
