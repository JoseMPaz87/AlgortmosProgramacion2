#ifndef _DERIVADA_H_
#define _DERIVADA_H_

#include "base.h"

class Derivada : public Base
{
    private:
    int j;

    public:
  // derivada usa x, y es pasado en conjunto a base
        Derivada(int x, int y);
        ~Derivada();       
        void mostrar();
};
#endif
