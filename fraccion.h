#ifndef FRACCION_H
#define FRACCION_H

class fraccion //Clase fraccion 
{
    public: //Atributos de la clase fraccion 
        int numerador;
        int denominador;

    public: //Constructores de la clase fraccion 
        fraccion();
        fraccion(int, int);
        fraccion operator + (fraccion);
        fraccion operator * (fraccion);
        fraccion operator - (fraccion);
        fraccion operator / (fraccion);
        void reduccion(int &,int &);
        fraccion suma(fraccion);
        fraccion multiplicacion(fraccion);
        void imprimir();
        int getNumerador();
        int getDenominador();
        void setNumerador(int);
        void setDenominador(int);
};

#endif // FRACCION_H
