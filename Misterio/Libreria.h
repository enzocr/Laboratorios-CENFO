/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Libreria.h
 * Author: enzoq
 *
 * Created on February 22, 2020, 3:37 PM
 */

#ifndef LIBRERIA_H
#define LIBRERIA_H

#include "Nodo.h"
#include "Cola.h"
#include "Pila.h"
#include "Lista.h"
#include "Libro.h"

class Libreria {
private:
    Pila pila;

public:

    Libreria();

    void setLista(); //insertar ordenado
    void setPila();
    void setCola(); // tiene 2 punteros,\ uno que s al inicio y otro que es al fin. 
    void agregarOrdenado();
    void agregarPila(Libro); //siempre se saca el ultimo y se agrega al final 
    void agregarCola(); //se mueve la cabeza si llega algo al principio
    Pila getPila();



    //agregar a pila, a cola y a lista. en lista lexicograficamente. 
    //eliminar o mover (ambas) de cola a pila
    ~Libreria();
};



#endif /* LIBRERIA_H */

