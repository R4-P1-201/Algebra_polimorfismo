#include <iostream>
#include "fraccion.h"
#include "vect.h"

using namespace std;

int main()
{
    fraccion f1(1,2);
    fraccion f2(3,4);

    fraccion f3(1,5);
    fraccion f4(3,7);

    //f1.imprimir();
    //f2.imprimir();

    vect v1(2);
    v1.setComponentes(0,f1);
    v1.setComponentes(1,f2);
    //v1.print();

    vect v2(2);
    v2.setComponentes(0,f3);
    v2.setComponentes(1,f4);
    //v2.print();

    vect vres(2);
    vres = v1-v2;
    vres.print();



    fraccion fres(1,2);
    fres = v1*v2;

    fres.imprimir();
    return 0;
}
