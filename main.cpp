#include <iostream>
#include "fraccion.h"
#include "vect.h"

using namespace std;

int main()
{
    fraccion f1(1,2);
    fraccion f2(2,4);
    fraccion f3(5,10);
    fraccion f4(8,16);

    fraccion f5(2,4);
    fraccion f6(4,8);
    fraccion f7(4,8);
    fraccion f8(6,12);

    fraccion fres(1,2);

    vect v1(3);
    v1.setComponentes(0,f1);
    v1.setComponentes(1,f2);
    v1.setComponentes(2,f3);
    v1.setComponentes(3,f4);

    cout << "Vector 1: " << endl;
    v1.print();

    cout << "Magnitud: " << v1.magnitud() << endl;

    vect vres(3);
    cout << "Escalamiento a 2: " << endl;
    vres = v1.producto(2);
    vres.print();

    vect v2(3);
    v2.setComponentes(0,f5);
    v2.setComponentes(1,f6);
    v2.setComponentes(2,f7);
    v2.setComponentes(3,f8);

    cout << "Vector 2: " << endl;
    v2.print();
    cout << "Magnitud: " << v2.magnitud() << endl;

    cout << "Escalamiento a 2: " << endl;
    vres = v2.producto(2);
    vres.print();

    cout << "Angulo entre vectores:" << v1.angulo(v2) << endl;

    vres = v1-v2;
    cout << "Resta de vectores: " << endl;
    vres.print();


    fres = v1*v2;
    cout << "Producto punto de vectores: " << endl;
    fres.imprimir();

    vres = v1.producto(v2);
    cout << "Producto cruz de vectores: " << endl;
    vres.print();

    vres = v1+v2;
    cout << "Suma de vectores: " << endl;
    vres.print();


    fraccion f9(1,2);
    fraccion f10(2,4);
    fraccion f11(5,10);

    fraccion f12(8,16);
    fraccion f13(2,4);
    fraccion f14(4,8);

    vect v3(3);
    v3.setComponentes(0,f9);
    v3.setComponentes(1,f10);
    v3.setComponentes(2,f11);

    cout << "Vector 3: " << endl;
    v3.print();

    cout << "Magnitud: " << v3.magnitud() << endl;

    cout << "Escalamiento a 2: " << endl;
    vres = v3.producto(2);
    vres.print();

    vect v4(3);
    v4.setComponentes(0,f12);
    v4.setComponentes(1,f13);
    v4.setComponentes(2,f14);

    cout << "Vector 4: " << endl;
    v4.print();
    cout << "Magnitud: " << v4.magnitud() << endl;

    cout << "Escalamiento a 2: " << endl;
    vres = v4.producto(2);
    vres.print();

    cout << "Angulo entre vectores:" << v4.angulo(v2) << endl;

    vres = v3-v4;
    cout << "Resta de vectores: " << endl;
    vres.print();


    fres = v3*v4;
    cout << "Producto punto de vectores: " << endl;
    fres.imprimir();

    vres = v3.producto(v4);
    cout << "Producto cruz de vectores: " << endl;
    vres.print();

    vres = v3+v4;
    cout << "Suma de vectores: " << endl;
    vres.print();

    cout << "Operaciones con diferentes dimensiones: " << endl;

    vres = v1+v4;
    cout << "Suma de vectores: " << endl;
    vres.print();

    vres = v1-v4;
    cout << "Resta de vectores: " << endl;
    vres.print();

    fres = v3*v4;
    cout << "Producto punto de vectores: " << endl;
    fres.imprimir();

    cout << "Angulo entre vectores:" << v4.angulo(v2) << endl;

    return 0;
}
