/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: PilaJugadores.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */



#include "PilaJugadores.h"
#include <iostream>
#include <sstream>
using namespace std;

PilaJugadores::PilaJugadores() {

}

NodoJugador* PilaJugadores::getTope() {
    return tope;
}

void PilaJugadores::setTope(NodoJugador* pTope) {
    tope = pTope;
}

void PilaJugadores::apilar(Jugador pJugador) {
    NodoJugador* nuevo = new NodoJugador(pJugador);
    nuevo->setSiguiente(getTope());
    setTope(nuevo);
}

Jugador PilaJugadores::desapilar() {
    if (isEmpty()) {
        cout << "Pila sin jugadores";
    } else {
        NodoJugador* aux = getTope();
        Jugador aDesapilar = getTope()->getJugador();
        setTope(getTope()->getSiguiente());
        delete aux;
        return aDesapilar;
    }
}

string PilaJugadores::verTope() {
    return getTope()->getJugador().toString();
}

bool PilaJugadores::isEmpty() {
    return getTope() == NULL;
}

string PilaJugadores::mostrarPila() {

    std::ostringstream s;
    NodoJugador* aux = getTope();
    while (aux != NULL) {
        s << aux->getJugador().toString() << "\n";
        aux = aux->getSiguiente();
    }

    return s.str();
}

bool PilaJugadores::eliminarPila() {
    NodoJugador* aux = getTope();
    while (aux != NULL) {
        setTope(getTope()->getSiguiente());
    }
    if (isEmpty()) {
        return true;
    } else {
        return false;
    }
}
