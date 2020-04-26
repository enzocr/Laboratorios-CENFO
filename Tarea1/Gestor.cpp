/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: Gestor.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */


#include "Gestor.h"


#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include "ListaJugadores.h"
#include "PilaJugadores.h"
#include "ColaJugadores.h"
#include "Jugador.h"
#include "NodoJugador.h"

Gestor::Gestor() {
    lista = new ListaJugadores();
    cola = new ColaJugadores();
    pila = new PilaJugadores();
}

Gestor::Gestor(const Gestor& orig) {
}

Gestor::~Gestor() {
}

ListaJugadores* Gestor::getLista() {
    return lista;
}

ColaJugadores* Gestor::getCola() {
    return cola;
}

PilaJugadores* Gestor::getPila() {
    return pila;
}

string Gestor::agregarJugador(int pDecision, int pCedula, string pNombre) {
    Jugador jugador(pCedula, pNombre);
    if (pDecision == 1) {
        getLista()->insertarOrdenado(jugador);
        return "Jugador agregado a la lista de jugadores";
    } else if (pDecision == 2) {
        getCola()->agregarJugadorACola(jugador);
        return "Jugador agregado a la cola de jugadores";
    } else if (pDecision == 3) {
        getPila()->apilar(jugador);
        return "Jugador agregado a la pila de jugadores";
    } else {
        return "Jugador NO fue agregado a NINGUNA estructura";
    }

}

string Gestor::buscarJugador(int pCedula) {
    return getLista()->buscarPorCedula(pCedula)->getJugador().toString();
}

string Gestor::listarJugadores(int pDecision) {
    if (pDecision == 1) {
        if (getLista()->isNull()) {
            return "Lista vacía";
        } else {
            return getLista()->mostrarLista(getLista()->getCabeza());
        }
    } else if (pDecision == 2) {
        if (getCola()->colaVacia()) {
            return "Cola vacía";
        } else {
            return getCola()->mostrarCola();
        }
    } else if (pDecision == 3) {
        if (getPila()->isEmpty()) {
            return "Pila vacía;";
        } else {
            return getPila()->mostrarPila();
        }
    } else {
        return "ERROR LISTANDO ESTRUCTURA";
    }
}

string Gestor::eliminarJugador(int pDecision) {
    if (pDecision == 2) {
        return getCola()->eliminar();
    } else if (pDecision == 3) {
        return getPila()->desapilar().toString();
    } else {
        return "ERROR ELIMINANDO JUGADOR";
    }
}

bool Gestor::eliminarJugadorLista(int pCedula) {
    return getLista()->eliminarJugador(pCedula);
}

string Gestor::pasarJugador(int pDecision) {
    NodoJugador* jugador;
    Jugador aux;
    if (pDecision == 3) {
        jugador = getCola()->getCabeza();
        aux = jugador->getJugador();
        getCola()->eliminar();
        getPila()->apilar(aux);
        return "Jugador eliminado de cola y agregado a la pila";
    }
    if (pDecision == 4) {
        jugador = getCola()->getCabeza();
        aux = jugador->getJugador();
        getCola()->eliminar();
        getLista()->insertarOrdenado(aux);
        return "Jugador eliminado de cola y agregado a la lista";
    }
    if (pDecision == 5) {
        jugador = getPila()->getTope();
        aux = jugador->getJugador();
        getPila()->desapilar();
        getLista()->insertarOrdenado(aux);
        return "Jugador eliminado de la pila y agregado a la lista";
    }
    if (pDecision == 6) {
        jugador = getPila()->getTope();
        aux = jugador->getJugador();
        getPila()->desapilar();
        getCola()->agregarJugadorACola(aux);
        return "Jugador eliminado de la pila y agregado a la cola";
    }

}

string Gestor::pasarJugadorDeLista(int pDecision, int pCedula) {
    NodoJugador* jugador;
    Jugador aux;
    if (pDecision == 1) {
        jugador = getLista()->buscarPorCedula(pCedula);
        aux = jugador->getJugador();
        getLista()->eliminarJugador(pCedula);
        getCola()->agregarJugadorACola(aux);
        return "Jugador eliminado de la lista y agregado a la cola";
    }
    if (pDecision == 2) {
        jugador = getLista()->buscarPorCedula(pCedula);
        aux = jugador->getJugador();
        getLista()->eliminarJugador(pCedula);
        getPila()->apilar(aux);
        return "Jugador eliminado de la lista y agregado a la pila";
    }
}