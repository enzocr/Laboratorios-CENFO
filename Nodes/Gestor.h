/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestor.h
 * Author: enzoq
 *
 * Created on June 25, 2018, 7:03 PM
 */

#ifndef GESTOR_H
#define GESTOR_H

#include "Lista.h"
#include <string>

class Gestor {
public:
    Gestor();
    Gestor(const Gestor& orig);
    virtual ~Gestor();
    void insertarNumero(int);
    Nodo* busquedaNumero(int);
    bool eliminarNodo(int);
    std::string getLista();
private:
    Lista lista;

};

#endif /* GESTOR_H */

