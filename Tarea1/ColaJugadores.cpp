/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: ColaJugadores.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */


#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

#include "Jugador.h"
#include "ColaJugadores.h"
#include "NodoJugador.h"

using namespace std;

ColaJugadores::ColaJugadores() {
    setCabeza(NULL);
}

NodoJugador* ColaJugadores::getCabeza() {
    return cabeza;
}

void ColaJugadores::setCabeza(NodoJugador* pCabeza) {
    cabeza = pCabeza;
}

bool ColaJugadores::colaVacia() {
    if (getCabeza() == NULL) {
        return true;
    }
    return false;
}

void ColaJugadores::agregarJugadorACola(Jugador pJugador) {
     NodoJugador* nuevo = new NodoJugador(pJugador);
    if (colaVacia()) {
        setCabeza(nuevo);
    } else {
        NodoJugador* aux = getCabeza();
        while (aux->getSiguiente() != NULL) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
    }
}

string ColaJugadores::mostrarCola() {
    stringstream concat;
    if (getCabeza() != NULL) {
        NodoJugador* aux = getCabeza();
        while (aux != NULL) {
            concat << aux->getJugador().toString();
            aux = aux->getSiguiente();
        }
        return concat.str();
    } else {
        return "Cola vacía";
    }

}

string ColaJugadores::eliminar() {
    NodoJugador* aux = getCabeza();
    Jugador temp = aux->getJugador();
    setCabeza(getCabeza()->getSiguiente());
    return temp.toString();

}