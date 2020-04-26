/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: enzoq
 * 
 * Created on June 25, 2018, 7:03 PM
 */

#include <sstream>
#include <iostream>
#include "Nodo.h"
#include "Lista.h"
using namespace std;

Lista::Lista() {
    setCabeza(NULL);

}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
}

Nodo* Lista::getCabeza() {

    return cabeza;
}

void Lista::setCabeza(Nodo* pCabeza) {
    cabeza = pCabeza;

}

bool Lista::isNull() {
    return getCabeza() == NULL;
}

Nodo* Lista::buscarNumero(int numero) {

    if (!isNull()) {
        Nodo* aux = getCabeza();
        while (aux != NULL) {
            if (aux -> getNumero() == numero) {
                return aux;
            } else {
                aux = aux ->getSiguiente();
                aux ->setSiguiente(getCabeza());
            }
        }
    } else {
        return NULL;
    }
}

void Lista::insertarInicio(int numero) {

    Nodo* nuevo = new Nodo(numero);

    nuevo ->setSiguiente(getCabeza());
    setCabeza(nuevo);
}

void Lista::insertarOrdenado(int numero) {

    Nodo* nuevo = new Nodo(numero);

    if (isNull()) {
        insertarInicio(numero);
    } else {

        if (getCabeza() ->getNumero() > nuevo->getNumero()) { //al inicio
            insertarInicio(numero);
        } else {
            Nodo* aux = getCabeza(); //ES ANTERIOR Y PUEDE SERVIR PARA ACCESAR A ACTUAL
            while (aux->getSiguiente() != NULL && aux ->getSiguiente()->getNumero() < numero) {

                aux = aux->getSiguiente();
            }
            nuevo ->setSiguiente(aux->getSiguiente());
            //aux ->getSiguiente() = nuevo;
            aux ->setSiguiente(nuevo);
        }
    }
}

string Lista::mostrarLista() {

    std::ostringstream s;
    if (!isNull()) {
        Nodo* aux = getCabeza();
        while (aux != NULL) {
            s << aux->getNumero() << ", ";
            aux = aux ->getSiguiente();
        }
    } else {
        s << "lista vacia";
    }
    return s.str();


}

bool Lista::eliminarNodo(int numero) {
    if (isNull()) {
        return false;
    } else {
        if (getCabeza() ->getNumero() == numero) {
            setCabeza(getCabeza()->getSiguiente());
            return true;
        } else {
            Nodo* temp = getCabeza();
            while (temp != NULL) {
                temp = temp->getSiguiente();
                if (temp != NULL) {
                    temp = temp->getSiguiente()->getSiguiente();
                    return true;
                } else {
                    return false;
                }
            }
        }
    }
}


