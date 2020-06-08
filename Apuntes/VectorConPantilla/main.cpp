// Uso de clase Vector con templates
#include <iostream>
#include <string>
#include "vector.h"
 
using namespace std ;

int main ()
{
	cout << "==== Vector de enteros ====" << endl ;
	Vector < int > vi1 (3);
	vi1 . insertar (7 , 1);
	vi1 . insertar (8 , 2);
	vi1 . insertar (9 , 3);
	for ( unsigned i = 1; i <= vi1 . tamanio (); i ++)
		cout << vi1 . elemento ( i ) << endl ;
	cout << "==== Otro vector de enteros ====" << endl ;
	Vector < int > vi2 (2);
	vi2 . insertar (100 , 1);
	vi2 . insertar (150 , 2);
	for ( unsigned i = 1; i <= vi2 . tamanio (); i ++)
		cout << vi2 . elemento ( i ) << endl ;
	// Ahora , utilizamos un vector con otros
	// tipos de datos , como strings
	cout << "==== Vector de strings ====" << endl ;
	string s1 = " siete " , s2 = " ocho " , s3 = " nueve " , s4 = " diez ";
	Vector < string > vs (4);
	vs . insertar ( s1 , 1);
	vs . insertar ( s2 , 2);
	vs . insertar ( s3 , 3);
	vs . insertar ( s4 , 4);
	for ( unsigned i = 1; i <= vs . tamanio (); i ++)
		cout << vs . elemento ( i ) << endl ;
	return 0;
}
