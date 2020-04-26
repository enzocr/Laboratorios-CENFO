/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.cpp
 * Author: enzoq
 * 
 * Created on February 22, 2020, 3:37 PM
 */

#include "Cola.h"
#include "Nodo.h"

bool Cola::esVacia() {

    if (cabeza == NULL) {
        return true;
    } else {
        return false;
    }

}

bool Cola::insertarLibro(Libro pLibro) {

    Nodo * newNodo;
    newNodo = new Nodo(pLibro);


    if (cabeza == NULL) {
        cabeza = newNodo;
    } else if (cabeza != NULL && siguiente == NULL) {

        Nodo * aux;
        aux = new Nodo(pLibro);
        setSiguiente(aux);
        setUltimo(aux);
    } else if (cabeza != NULL && siguiente != NULL) {
        ultimo->setSiguiente(newNodo);
        setUltimo(newNodo);
    }

    return true;
}

void Cola::recorrerCola() {
}// por implmementar

Nodo * Cola::RemoverNodo() { // por implmementar

    Nodo * aux;
    aux = new Nodo();
    return aux;
}

void Cola::setUltimo(Nodo * pNodo) {
    this->ultimo == pNodo;
}

Nodo * Cola::getUltimo() {
    return this->ultimo;
}

void Cola::setCabeza(Nodo * pNodo) {
    this->cabeza == pNodo;
}

void Cola::setSiguiente(Nodo * pNodo) {
    this->siguiente == pNodo;
}

Nodo* Cola::getSiguiente() {
    return this->siguiente;
}

Nodo* Cola::getCabeza() {
    return this->cabeza;
}


