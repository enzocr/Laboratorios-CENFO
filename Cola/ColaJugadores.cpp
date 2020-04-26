/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Cola.cpp
 Autor: Enzo Quartino Zamora y Alvaro Arce
 e-mail: equartinoz@ucenfotec.ac.cr || aarced@ucenfotec.ac.cr
 * Proyecto #2
 Fecha de creación: 31/07/2018
 Fecha de último cambio: 19/08/2018
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
    setFrente(NULL);
    setFinal(NULL);
}

NodoJugador* ColaJugadores::getFrente() {
    return frente;
}

void ColaJugadores::setFrente(NodoJugador* pFrente) {
    frente = pFrente;
}

NodoJugador* ColaJugadores::getFinal() {
    return frente;
}

void ColaJugadores::setFinal(NodoJugador* pFinal) {
    final = pFinal;
}

bool ColaJugadores::colaVacia() {
    if (getFrente() == NULL) {
        return true;
    }
    return false;
}

void ColaJugadores::agregarJugadorACola(Jugador jugador) {
    NodoJugador * nuevoNodo(jugador);

    if (colaVacia()) {
        setFrente(nuevoNodo);
    } else {
        getFinal()->setSiguiente(nuevoNodo);
    }
    setFinal(nuevoNodo);

}

string ColaJugadores::mostrarCola() {
    stringstream s;
    if(colaVacia()){
        return "Cola vacia";
    }
    else{
        NodoJugador* aux = getFrente();
        while(aux != NULL){
            s<< aux->getJugador().toString();
            aux = aux->get
        }
    }

}

string ColaJugadores::eliminar() {
    NodoJugador* aux = getFrente();
    
    if(getFrente()->getJugador().getCedula() == getFinal()->getJugador().getCedula()){
        setFrente(NULL);
        setFinal(NULL); 
    }
    else{
        setFrente(getFrente()->getSiguiente());
    }
    delete aux;

}