#include <iostream>
using namespace std;

int* f1(int cant) {
    int *aux = new int[cant];
    return aux;
}

void f2 (int* &p, int a) {
    p = new int;
    *p = ++a;
    cout << *p <<  (char)a << endl;
}


int main()
{
    const int udp = 7;
    // udp: ultimo dígito del padrón
    int cant = 2*((udp % 3) + 1);
    int *x, *y, *z;
    char a = 'A';
    x = f1( cant );
    for ( int i = 0;  i < cant;  i++ )
        x[ i ] = a + i;
    f2( y, a + cant );
    cout << *y <<  *x << endl;
    z = x++;
    cout << *z << endl;
    *z = *y + 1;
    cout << *z <<  *x <<  *y << endl;
    a = (char)(*y);
    cout << a <<  *z  <<  *x - 1 << endl;
    for ( int i = 0;  i < cant;  i++ )
        cout << *(z + i) ;
    
    // Liberar memoria

    return 0;
}
