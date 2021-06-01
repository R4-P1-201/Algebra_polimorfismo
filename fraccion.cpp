#include "fraccion.h" //Se incluye fraccion.h
#include <iostream>

using namespace std;

fraccion::fraccion()
{
    numerador = 0; 
    denominador = 1;
}

fraccion::fraccion(int num,int den)
{
    if(den == 0){
        den = 1;
    }

    if(den < 0 ){
        num = -num;
        den = -den;
    }
    reduccion(num,den);
    numerador = num;
    denominador = den;
}

fraccion fraccion::operator + (fraccion obj)
{
    return this->suma(obj);
}

fraccion fraccion::operator * (fraccion obj)
{
    return this->multiplicacion(obj);
}

fraccion fraccion::operator - (fraccion obj)
{
    fraccion ftemp (-1,1);
    obj = obj.multiplicacion(ftemp);
    return suma(obj);
}

fraccion fraccion::operator / (fraccion obj)
{
    fraccion ftemp (obj.denominador,obj.numerador);
    return this->multiplicacion(ftemp);
}

void fraccion::reduccion(int &num, int &den)
{
    int limit = 0;
    int s1 = 1;
    int s2 = 1;

    if(num < 0){
        s1 = -1;
        num = num*s1;
    }
    if(den < 0){
        s2 = -1;
        den = den*s2;
    }
    if(num >= den)
        limit = den;
    else
        limit = num;
    int it = 2;
    while(it<=limit){
        if(num % it == 0 && den % it == 0){
            num = num/it;
            den = den/it;
        }else{
            it++;
        }
    }
    num = num*s1;
    den = den*s2;
}

fraccion fraccion::suma(fraccion f2)
{
    int num = numerador * f2.getDenominador() +  denominador * f2.getNumerador();
    int den = denominador * f2.getDenominador();
    fraccion fres(num,den);
    return fres;
}

fraccion fraccion::multiplicacion(fraccion f2)
{
    int num = numerador * f2.getNumerador();
    int den = denominador * f2.getDenominador();
    fraccion fres(num,den);
    return fres;
}

void fraccion::imprimir()
{
    cout << numerador << "/" << denominador << endl;
}

int fraccion::getNumerador()
{
    return numerador;
}
int fraccion::getDenominador(){
    return denominador;
}
void fraccion::setNumerador(int num){
    this->numerador = num;
}
void fraccion::setDenominador(int den){
    denominador = den;
}
