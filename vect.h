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
        vect operator + (vect); //ya
        vect operator - (vect); //ya
        fraccion operator * (vect); // ya
        vect producto(vect); //producto cruz
        float angulo(vect);
        float magnitud();
        vect producto(float);
        void print(); //ya
};

#endif // VECT_H
