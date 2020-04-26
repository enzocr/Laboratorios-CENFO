/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: enzoq
 *
 * Created on February 22, 2020, 3:36 PM
 */

#ifndef NODO_H
#define NODO_H

#include "Libro.h"

class Nodo {
private:
    Libro libro;
    Nodo * siguiente;

public:
    Nodo();
    Nodo(Libro pLibro);
    void setLibro(Libro);
    void setSiguiente(Nodo *);
    Libro getLibro();
    Nodo * getSiguiente();

    ~Nodo();
};



#endif /* NODO_H */

