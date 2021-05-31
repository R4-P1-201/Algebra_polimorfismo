#ifndef FRACCION_H
#define FRACCION_H


class fraccion
{
    public:
        int numerador;
        int denominador;
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
