/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: enzoq
 *
 * Created on February 22, 2020, 3:36 PM
 */

#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

class Lista {
private:
    Nodo * cabeza;
    Nodo * siguiente;
    Nodo * ultimo;

public:
    bool esVacia();
    bool insertarLibro(Libro);
    void setCabeza(Nodo *);
    Nodo* getCabeza();
    void setSiguiente(Nodo *);
    Nodo* getSiguiente();
    void setUltimo(Nodo *);
    Nodo* getUltimo();
    void recorrerLista();
    Nodo * RemoverNodo(); //pop
    //int CompararStrings(string, string);
    Lista();
    ~Lista();
};


#endif /* LISTA_H */

