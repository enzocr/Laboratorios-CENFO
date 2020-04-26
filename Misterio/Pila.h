/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pila.h
 * Author: enzoq
 *
 * Created on February 22, 2020, 3:36 PM
 */

#ifndef PILA_H
#define PILA_H


#include "Nodo.h"

class Pila {
private:
    Nodo * cabeza; //insetar en la cabeza siempre


public:
    Pila();

    bool esVacia();
    bool insertarLibro(Libro);
    void setCabeza(Nodo *);
    Nodo* getCabeza();
    void setSiguiente(Nodo *);
    Nodo* getSiguiente();
    void recorrerPila();
    Nodo * RemoverNodo(); //pop


    ~Pila();
};



#endif /* PILA_H */

