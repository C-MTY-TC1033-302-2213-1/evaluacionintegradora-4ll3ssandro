#ifndef Verdura_h
#define Verdura_h
#include "Producto.h"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Verdura:public Producto{
    private:
    string temporada;

    public:
    Verdura();
    Verdura(string _nombre, int _precio, int _peso, string _temporada);

    void getTemporada(string _temporada);

    void setTemporada(string _temporada);

    string str();
    int calculaTotalPagar();
};

#endif