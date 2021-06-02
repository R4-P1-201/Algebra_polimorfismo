#include "vect.h"
#include "Fraccion.h"
#include <iostream>

using namespace std;

vect::vect(){
    tam = 1;
    numerador = 0;
    denominador = 1;
    componentes = new fraccion[tam];

}
vect::vect(int t){
    tam = t;
    componentes = new fraccion[tam];
}

void vect::setComponentes(int i, fraccion f1){
    this -> componentes[i] = f1;
}

vect vect::operator + (vect v2){
    vect vres(tam);
    for (int i = 0; i <= tam; i++){
        vres.setComponentes(i,this->componentes[i].suma(v2.componentes[i]));
    }
    return vres;
}
vect vect::operator - (vect v2){
    vect vres(tam);
    for (int i = 0; i <= tam; i++){
        vres.setComponentes(i,this->componentes[i].resta(v2.componentes[i]));
    }
    return vres;
}
fraccion vect::operator * (vect v2){
    fraccion res;
    for (int i = 0; i <= tam; i++){
       res = res.suma(this->componentes[i].multiplicacion(v2.componentes[i]));
    }
    return res;
}

vect vect::producto(vect v2){
    vect vres(tam);
    if (tam == 2 && v2.tam == 2)
    for (int i = 0; i <= tam; i++){
        vres.setComponentes(0,((componentes[1].multiplicacion(v2.componentes[2])).resta(componentes[1].multiplicacion(v2.componentes[2]))));
        vres.setComponentes(1,((componentes[0].multiplicacion(v2.componentes[2])).resta(componentes[1].multiplicacion(v2.componentes[2]))));
        vres.setComponentes(2,((componentes[0].multiplicacion(v2.componentes[1])).resta(componentes[0].multiplicacion(v2.componentes[1]))));
    }
    vres.componentes[1].numerador = -vres.componentes[1].numerador;
    return vres;
}

void vect::print(){
    for (int i = 0; i <= tam; i++){
        int num = componentes[i].numerador;
        int den = componentes[i].denominador;
        cout << num << "/" << den << endl;
    }
}
