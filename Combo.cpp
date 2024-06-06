#include "Combo.h"
#include <iostream>
using namespace std;

Combo::Combo():Producto(){
    clave = 0;
}

Combo::Combo(string _nombre, int _precio, int _peso, int _clave){
    nombre = _nombre;
    precio = _precio;
    peso = peso;
    clave = _clave;
}

void Combo::getClave()
{
}

void Combo::getClave(int _clave){
    clave = _clave;
}
void Combo::setClave(){
    return clave;
}

string Combo::str(){
    nombre + '-' + '$' + to_string(precio) + '-' + '$' + to_string(peso) + '-' + '$' + to_string(clave);
}
int Combo::calculaPrecioPagar(){
    int total = precio * peso * clave;
    if (clave == 1){
        total -= (total/100) * 25;
    }
    else if (clave == 2){
        total -= (total/100) * 30;
    }

    return total;
}