/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: ColaJugadores.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
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
    void setCabeza(NodoJugador*);
    NodoJugador* getCabeza();
    void agregarJugadorACola(Jugador);
    string mostrarCola();
    bool colaVacia();
    string eliminar();
private:
    NodoJugador* cabeza;
};

#endif /* COLA_H */

