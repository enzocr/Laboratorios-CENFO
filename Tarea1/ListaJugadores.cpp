/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: ListaJugadores.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */


#include "ListaJugadores.h"
#include <sstream>
#include <iostream>
#include <cstdlib>

ListaJugadores::ListaJugadores() {
    setCabeza(NULL);
}

ListaJugadores::~ListaJugadores() {
}

NodoJugador* ListaJugadores::getCabeza() {

    return cabeza;
}

void ListaJugadores::setCabeza(NodoJugador* pCabeza) {
    cabeza = pCabeza;

}

bool ListaJugadores::isNull() {
    return getCabeza() == NULL;
}

void ListaJugadores::insertarInicio(Jugador pJugador) {
    NodoJugador* nuevo = new NodoJugador(pJugador);

    nuevo ->setSiguiente(getCabeza());
    setCabeza(nuevo);
}

void ListaJugadores::insertarOrdenado(Jugador pJugador) {
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

NodoJugador* ListaJugadores::buscarPorCedula(int pCedula) {

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

string ListaJugadores::mostrarLista(NodoJugador* jugador) {
    std::ostringstream s;
    if (jugador == NULL) {
        return s.str();
    } else {
        s << jugador->getJugador().toString();
        cout << jugador->getJugador().toString();
        return mostrarLista(jugador->getSiguiente());
    }
}

bool ListaJugadores::eliminarJugador(int pCedula) {
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

