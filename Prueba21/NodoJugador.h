/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoJugador.h
 * Author: enzoq
 *
 * Created on August 3, 2018, 11:47 AM
 */

#ifndef NODOJUGADOR_H
#define NODOJUGADOR_H
#include "Jugador.h"


class NodoJugador {
public:
    NodoJugador();
    NodoJugador(Jugador);
    NodoJugador(const NodoJugador& orig);
    virtual ~NodoJugador();

    Jugador getJugador();
    void setJugador(Jugador);
    NodoJugador* getSiguiente();
    void setSiguiente(NodoJugador*);
private:
    Jugador jugador;
    NodoJugador* siguiente;
};

#endif /* NODOJUGADOR_H */

