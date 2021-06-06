#ifndef VECT_H
#define VECT_H
#include "fraccion.h"

class vect : fraccion
{
    public:
        fraccion * componentes;
        int tam;
        vect();
        vect(int);
        void setComponentes(int,fraccion);
        vect operator + (vect);
        vect operator - (vect);
        fraccion operator * (vect);
        vect producto(vect);
        float angulo(vect);
        float magnitud();
        vect producto(float);
        void print();
};

#endif // VECT_H
