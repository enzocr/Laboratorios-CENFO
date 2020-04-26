/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaJugadores.h
 * Author: enzoq
 *
 * Created on August 16, 2018, 12:10 PM
 */

#ifndef LISTAJUGADORES_H
#define LISTAJUGADORES_H
#include "Jugador.h"
#include "NodoJugador.h"
using namespace std;

class ListaJugadores {
public:
    ListaJugadores();
   // ListaJugadores(const ListaJugadores& orig);
    virtual ~ListaJugadores();

    bool isNull();
    void insertarInicio(Jugador);
    void insertarOrdenado(Jugador);
    NodoJugador* buscarPorCedula(int);
    NodoJugador* buscarPorNombre(string);
    bool eliminarJugador(int);
    std::string mostrarLista();
    NodoJugador* getCabeza();
    void setCabeza(NodoJugador*);
private:
    NodoJugador* cabeza;
};

#endif /* LISTAJUGADORES_H */

