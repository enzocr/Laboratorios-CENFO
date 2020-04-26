/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.h
 * Author: enzoq
 *
 * Created on February 22, 2020, 3:37 PM
 */

#include "Libro.h"
#include "Nodo.h"
#ifndef COLA_H
#define COLA_H

class Cola {
public:
    Cola();
    Cola(const Cola& orig);
    virtual ~Cola();
    bool esVacia();
    bool insertarLibro(Libro);
    void setCabeza(Nodo *);
    Nodo* getCabeza();
    void setSiguiente(Nodo *);
    Nodo* getSiguiente();
    void setUltimo(Nodo *);
    Nodo* getUltimo();
    void recorrerCola();
    Nodo * RemoverNodo(); //pop


private:
    Nodo * cabeza;
    Nodo * siguiente;
    Nodo * ultimo;


};

#endif /* COLA_H */

