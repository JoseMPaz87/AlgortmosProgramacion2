#include <iostream>
#include "base.h"
#include "primera_derivada.h"
#include "segunda_derivada.h"

using namespace std;

int main()
{
    Base obj_base;
    Base * p;

    Primera_derivada obj_primera;
    Segunda_derivada obj_segundo;

    p = &obj_base;
    p->quien();    // acceder a quien() en base

    p = &obj_primera;
    p->quien();   // acceder a quien() en primera_d

    p = &obj_segundo;
    p->quien();   // acceder a quien() en segunda_d

    return 0;
}
