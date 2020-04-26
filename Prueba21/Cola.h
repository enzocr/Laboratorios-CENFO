/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Cola.h
 * Author: Alvaro Arce
 *
 * Created on August 9, 2018, 5:04 PM
 */

#ifndef COLA_H
#define COLA_H

#include <cstdlib>
#include <string>
#include <iostream>
#include "Jugador.h"
#include "NodoJugador.h"

using namespace std;

class Cola {
public:
    Cola();
    void setCabeza(NodoJugador*);
    NodoJugador* getCabeza();
    void addPlayer(Jugador);
    string colaPlayers();
    NodoJugador* sacar();
    NodoJugador* BuscarPlayer(Jugador);
    int getTamanno();
    void setTamanno(int);
private:
    NodoJugador* cabeza;
    int tamanno;
    bool colaVacia();
};

#endif /* COLA_H */

