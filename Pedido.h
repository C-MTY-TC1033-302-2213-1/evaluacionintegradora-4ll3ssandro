#ifndef Producto_h
#define Producto_h
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>


const int MAX_PROD = 50;

class Pedido : public Producto{
    private:    
    Producto_h:arrPtrProductos[MAX_PROD];
    int cantidad;

    public:
    Pedido();
    void leerArchivo(string _nombre);
    void ticketCliente();
};

#endif 