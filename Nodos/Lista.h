/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.h
 * Author: enzoq
 *
 * Created on June 4, 2018, 7:15 PM
 */

#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    bool ifIsNull();
    void insertarInicio(int);
    Nodo* buscarNumero(int);
    std::string mostrarLista();
    Nodo* getCabeza();
    void setCabeza(Nodo*);
private:
    Nodo* cabeza;

};

#endif /* LISTA_H */

