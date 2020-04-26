/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: NodoJugador.h
 Autor: Enzo Quartino Zamora y Alvaro Arce
 e-mail: equartinoz@ucenfotec.ac.cr || aarced@ucenfotec.ac.cr
 * Proyecto #2
 Fecha de creación: 31/07/2018
 Fecha de último cambio: 19/08/2018
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

