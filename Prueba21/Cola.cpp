/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.cpp
 * Author: Alvaro Arce
 * 
 * Created on August 9, 2018, 5:04 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

#include "Jugador.h"
#include "Cola.h"
#include "NodoJugador.h"

using namespace std;

Cola::Cola() {
    cabeza = NULL;
    tamanno = 1;
}

void Cola::setCabeza(NodoJugador* pCabeza) {
    cabeza = pCabeza;
}

NodoJugador* Cola::getCabeza() {
    return cabeza;
}

void Cola::setTamanno(int pTamanno) {
    tamanno = pTamanno;
}

int Cola::getTamanno() {
    return tamanno;
}

bool Cola::colaVacia() {
    if (cabeza == NULL) {
        return true;
    }
    return false;
}

void Cola::addPlayer(Jugador pPlayer) {
    NodoJugador* nuevoNodo = new NodoJugador();
    nuevoNodo->setJugador(pPlayer);
    if (colaVacia()) {
        cabeza = nuevoNodo;
    } else {
        NodoJugador* aux = cabeza;
        while (aux->getSiguiente() != NULL) {
            aux = aux->getSiguiente();
        }
        nuevoNodo->setSiguiente(NULL);
        aux->setSiguiente(nuevoNodo);
    }
    tamanno++;
}

string Cola::colaPlayers() {
    stringstream concat;
    if (getCabeza() != NULL) {
        NodoJugador* aux = getCabeza();
        while (aux != NULL) {
            concat << aux->getJugador().toString();
            aux = aux->getSiguiente();
        }
    }
    return concat.str();
}

NodoJugador* Cola::sacar() {
    if (cabeza == NULL) {
        return NULL;
    } else {
        NodoJugador* temp = cabeza;
        cabeza = temp->getSiguiente();
        temp->setSiguiente(NULL);
        return temp;
    }
}


NodoJugador* Cola::BuscarPlayer(Jugador p) {
    if (colaVacia()) {
        return NULL;
    } else {
        NodoJugador* aux = cabeza;
        while (aux != NULL) {
            if (aux->getJugador().getCedula() == p.getCedula()) {
                return aux;
            } else {
                aux = aux->getSiguiente();
            }
        }
    }
}
