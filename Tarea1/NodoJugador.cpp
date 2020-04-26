/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: NodoJugador.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */



#include "NodoJugador.h"

NodoJugador::NodoJugador() {
}

NodoJugador::NodoJugador(Jugador pJugador) {
    setJugador(pJugador);
    setSiguiente(NULL);
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


