#include <stdlib.h>
#include <iostream>

using namespace std;

typedef int* Pint;
typedef char* Pchar;

/*
  Datos: 
    '@' es 64
    'A' es 65
    ...
*/

int main(){

  Pint A, C, J, F;
  Pint* B;
  Pchar D, E;
  char G;
  int H;
  
  H = 64;
  G = 'C';
  A = new int;
  F = new int;
  (*A) = 70; 
  cout << H << G << (*A) << endl;
  B = &A;
  (*F) = H;
  cout << (**B) << (*A) << endl;
  D = (Pchar)F;
  E = (Pchar)(*B);
  C = (Pint)D;
  J = (Pint)E;
  cout << (*D) << (*E) << (**B) << endl;
  (*C) = (*C) - 62;
  (*J) = (*J) - (*J);
  
  if ((*F) == H) {
    cout << G << H << (*E) << endl;
  }
  
  while ((*C) != 0) {
    cout << (*A) << (*C) << endl;
    (*C) = (*C) - 1;
    (*E) = 'B';
  }
  
    //Liberar memoria

  return 0;
}


