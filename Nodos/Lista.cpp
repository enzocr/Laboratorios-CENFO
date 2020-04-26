/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Lista.cpp
 * Author: enzoq
 * 
 * Created on June 4, 2018, 7:15 PM
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

bool Lista::ifIsNull() {
    return getCabeza() == NULL;
}

Nodo* Lista::buscarNumero(int numero) {//******************else 

    if (!ifIsNull()) {
        Nodo* aux = getCabeza();
        while (aux != NULL) {
            if (aux -> getNumero() == numero) {
                return aux;
            } else {
               // aux = aux ->getSiguiente();
                //aux ->setSiguiente(getCabeza());
                return aux;
            }
        }
    } else {
        return NULL;
    }
}

void Lista::insertarInicio(int numero) {
    
    Nodo* nuevo = new Nodo(numero);

    if (getCabeza() == NULL) {
        setCabeza(nuevo);
    } else {

        if (getCabeza() ->getNumero() > nuevo->getNumero()) { //al inicio
            nuevo ->setSiguiente(getCabeza());
            setCabeza(nuevo);
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
    if (getCabeza() != NULL) {
        Nodo* aux = getCabeza();
        while (aux != NULL) {
            s << aux->getNumero();
            s << aux ->getSiguiente();
        }
    } else {
        s << "lista vacia";
    }
    return s.str();


}

