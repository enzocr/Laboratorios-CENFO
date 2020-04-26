/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoJugador.cpp
 * Author: enzoq
 * 
 * Created on August 3, 2018, 11:47 AM
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


