/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaJugadores.cpp
 * Author: enzoq
 * 
 * Created on August 3, 2018, 11:45 AM
 */

#include "Records.h"
#include "NodoJugador.h"
#include <sstream>
#include <iostream>

Records::Records() {
}

Records::Records(const Records& orig) {
}

Records::~Records() {
}

NodoJugador* Records::getCabeza() {

    return cabeza;
}

void Records::setCabeza(NodoJugador* pCabeza) {
    cabeza = pCabeza;

}

bool Records::isNull() {
    return getCabeza() == NULL;
}

void Records::insertarInicio(Jugador pJugador) {
    NodoJugador* nuevo = new NodoJugador(pJugador);

    nuevo ->setSiguiente(getCabeza());
    setCabeza(nuevo);
}

void Records::insertarOrdenado(Jugador pJugador) {
    NodoJugador* nuevo = new NodoJugador(pJugador);

    if (isNull()) {

        insertarInicio(pJugador);
    } else {

        if (getCabeza()->getJugador().getCedula() > nuevo->getJugador().getCedula()) {

            insertarInicio(pJugador);
        } else {

            NodoJugador* aux = getCabeza();
            while (aux->getSiguiente() != NULL &&
                    aux ->getSiguiente()->getJugador().getCedula() < pJugador.getCedula()) {

                aux = aux->getSiguiente();
            }
            nuevo ->setSiguiente(aux->getSiguiente());
            aux ->setSiguiente(nuevo);
        }
    }
}

NodoJugador* Records::buscarPorCedula(int pCedula) {

    if (!isNull()) {
        NodoJugador* aux = getCabeza();
        while (aux != NULL) {
            if (aux -> getJugador().getCedula() == pCedula) {
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

NodoJugador* Records::buscarPorNombre(string pNombre) {

    if (!isNull()) {
        NodoJugador* aux = getCabeza();
        while (aux != NULL) {
            if (aux -> getJugador().getNombre() == pNombre) {
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

string Records::mostrarLista() {
    std::ostringstream s;
    if (!isNull()) {
        NodoJugador* aux = getCabeza();
        while (aux != NULL) {
            s << aux->getJugador().toString() << "\n";
            aux = aux ->getSiguiente();
        }
    } else {
        s << "lista vacia";
    }
    return s.str();
}

bool Records::eliminarJugador(int pCedula) {
    if (isNull()) {
        return false;
    } else {
        if (getCabeza()->getJugador().getCedula() == pCedula) {
            setCabeza(getCabeza()->getSiguiente());
            return true;
        } else {
            NodoJugador* temp = getCabeza();
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
