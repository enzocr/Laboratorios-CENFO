/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Cola.h
 Autor: Enzo Quartino Zamora y Alvaro Arce
 e-mail: equartinoz@ucenfotec.ac.cr || aarced@ucenfotec.ac.cr
 * Proyecto #2
 Fecha de creación: 31/07/2018
 Fecha de último cambio: 19/08/2018
 */

#ifndef COLA_H
#define COLA_H

#include <cstdlib>
#include <string>
#include <iostream>
#include "Jugador.h"
#include "NodoJugador.h"

using namespace std;

class ColaJugadores {
public:
    ColaJugadores();
    void setFinal(NodoJugador*);
    NodoJugador* getFinal();
    void setFrente(NodoJugador*);
    NodoJugador* getFrente();
    void agregarJugadorACola(Jugador);
    string mostrarCola();
    bool colaVacia();
    string eliminar();
private:
    NodoJugador* frente;
    NodoJugador * final;
};

#endif /* COLA_H */

