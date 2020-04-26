/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: PilaJugadores.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */

#ifndef MAZO_H
#define MAZO_H
#include "NodoJugador.h"
#include "Jugador.h"
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <sstream>
using namespace std;

class PilaJugadores {
public:
    PilaJugadores();
    void apilar(Jugador);
    Jugador desapilar();
    NodoJugador* getTope();
    void setTope(NodoJugador*);
    string verTope();
    bool isEmpty();
    string mostrarPila();
    bool eliminarPila();

private:
    NodoJugador* tope;
};

#endif /* MAZO_H */

