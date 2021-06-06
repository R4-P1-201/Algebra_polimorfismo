#include "vect.h"
#include "Fraccion.h"
#include <iostream>
#include <math.h>

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
    if (tam == v2.tam){
    for (int i = 0; i <= tam; i++){
        vres.setComponentes(i,this->componentes[i].suma(v2.componentes[i]));
    }
    } else{
        cout << "Los vectores tienen dimensiones diferentes." << endl;
    }
    return vres;
}
vect vect::operator - (vect v2){
    vect vres(tam);
    if (tam == v2.tam){
    for (int i = 0; i <= tam; i++){
        vres.setComponentes(i,this->componentes[i].resta(v2.componentes[i]));
    }
    } else{
        cout << "Los vectores tienen dimensiones diferentes." << endl;
    }
    return vres;
}
fraccion vect::operator * (vect v2){
    fraccion res;
    if (tam == v2.tam){
    for (int i = 0; i <= tam; i++){
       res = res.suma(this->componentes[i].multiplicacion(v2.componentes[i]));
    }
    } else{
        cout << "Los vectores tienen dimensiones diferentes." << endl;
    }
    return res;
}

vect vect::producto(vect v2){
    vect vres(tam);

    if (tam == 2 && v2.tam == 2){
    for (int i = 0; i <= tam; i++){
        vres.setComponentes(0,((componentes[1].multiplicacion(v2.componentes[2])).resta(componentes[1].multiplicacion(v2.componentes[2]))));
        vres.setComponentes(1,((componentes[0].multiplicacion(v2.componentes[2])).resta(componentes[1].multiplicacion(v2.componentes[2]))));
        vres.setComponentes(2,((componentes[0].multiplicacion(v2.componentes[1])).resta(componentes[0].multiplicacion(v2.componentes[1]))));
    }
    vres.componentes[1].numerador = -vres.componentes[1].numerador;
    } else{
        cout << "Uno de los vectores no tiene las dimensiones apropiadas" << endl;
    }
    return vres;
}


float vect::angulo(vect v2){
    float res;
    float num;
    float den;

    float num2;
    float den2;

    float pro_punto_num;
    float pro_punto_den;

    float ang_res;

    fraccion fr;
    fraccion fr2;
    fraccion pp;
    if (tam == v2.tam){
    for (int i = 0; i <= tam; i++){
        fr = fr+(componentes[i].multiplicacion(this->componentes[i]));
        fr2 = fr2+(v2.componentes[i].multiplicacion(v2.componentes[i]));
    }
    num = (float)fr.numerador;
    den = (float)fr.denominador;
    num = sqrt(num);
    den = sqrt(den);

    num2 = (float)fr2.numerador;
    den2 = (float)fr2.denominador;

    num2 = sqrt(num2);
    den2 = sqrt(den2);

    for (int i = 0; i <= tam; i++){
       pp = pp.suma(this->componentes[i].multiplicacion(v2.componentes[i]));
    }

    pro_punto_num = pp.numerador;
    pro_punto_den = pp.denominador;

    ang_res = (pro_punto_num/pro_punto_den)/((num/den)*(num2/den2));
    res = acos(ang_res);
    } else{
        cout << "Los vectores tienen dimensiones diferentes." << endl;
    }
    return res;
}



float vect::magnitud(){
    float r1;
    float num;
    float den;
    fraccion fr;

    for (int i = 0; i <= tam; i++){
        fr = fr+(componentes[i].multiplicacion(this->componentes[i]));
    }
    num = (float)fr.numerador;
    den = (float)fr.denominador;
    r1 = sqrt(num/den);

    return r1;
}

vect vect::producto(float n){
    vect vres(tam);
    fraccion fr;
    fr.setNumerador(n);
    fr.setDenominador(1);

    for (int i = 0; i <= tam; i++){
        vres.componentes[i] = componentes[i].multiplicacion(fr);
    }

    return vres;
}

void vect::print(){
    for (int i = 0; i <= tam; i++){
        int num = componentes[i].numerador;
        int den = componentes[i].denominador;
        cout << "Componente " << i+1 << ": " << num << "/" << den << endl;
    }
}
