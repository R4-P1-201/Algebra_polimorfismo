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
    for (int i = 0; i < tam; i++){
        vres.setComponentes(i,this->componentes[i].suma(v2.componentes[i]));
    }
    return vres;
}
vect vect::operator - (vect v2){
    vect vres(tam);
    for (int i = 0; i < tam; i++){
        vres.setComponentes(i,this->componentes[i].resta(v2.componentes[i]));
    }
    return vres;
}
fraccion vect::operator * (vect v2){
    fraccion res;
    for (int i = 0; i < tam; i++){
       res = res.suma(this->componentes[i].multiplicacion(v2.componentes[i]));
    }
    return res;
}

vect vect::producto(vect v2){
    vect vres(tam);
    if (tam == 3 && v2.tam == 3)
    for (int i = 0; i < tam; i++){
        //producto cruz
        //vres.setComponentes(1,);
    }
    return vres;
}

void vect::print(){
    for (int i = 0; i < tam; i++){
        int num = componentes[i].numerador;
        int den = componentes[i].denominador;
        cout << num << "/" << den << endl;
    }
}
