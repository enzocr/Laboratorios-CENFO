/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: NodoJugador.cpp
 Autor: Enzo Quartino Zamora y Alvaro Arce
 e-mail: equartinoz@ucenfotec.ac.cr || aarced@ucenfotec.ac.cr
 * Proyecto #2
 Fecha de creación: 31/07/2018
 Fecha de último cambio: 19/08/2018
 */

#include "NodoJugador.h"

NodoJugador::NodoJugador() {
}

NodoJugador::NodoJugador(Jugador pJugador) {
    setJugador(pJugador);
}

NodoJugador::NodoJugador(const NodoJugador& orig) {
}

NodoJugador::~NodoJugador() {
}

Jugador NodoJugador::getJugador() {
    return jugador;
}

void NodoJugador::setJugador(Jugador pJugador) {
    jugador = pJugador;
}

NodoJugador* NodoJugador::getSiguiente() {
    return siguiente;
}

void NodoJugador::setSiguiente(NodoJugador* pSiguiente) {
    siguiente = pSiguiente;
}


