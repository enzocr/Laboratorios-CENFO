/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: NodoJugador.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
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

