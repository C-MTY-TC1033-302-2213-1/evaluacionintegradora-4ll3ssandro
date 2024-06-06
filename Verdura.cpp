#include "Verdura.h"
#include <iostream>
using namespace std;

Verdura::Verdura() : Producto() {
    temporada = "Invierno";
}

Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada) : Producto(_nombre, _precio, _peso) {
    temporada = _temporada;
}

void Verdura::getTemporada(string _temporada){
    return temporada;
}

void Verdura::setTemporada(string _temporada) {
    temporada = _temporada;
}

string Verdura::str() {
    return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + temporada;
}

int Verdura::calculaTotalPagar() {
    int total;
    if (temporada == "Junio") {
        total = precio * 2;
    } else if (temporada == "Regalado") {
        total = precio * 3;
    } else {
        total = precio * 10;
    }
    return total;
}
