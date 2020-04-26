/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: Gestor.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */

#ifndef GESTOR_H
#define GESTOR_H

#include "PilaJugadores.h"
#include "ColaJugadores.h"
#include "Jugador.h"
#include "NodoJugador.h"
#include "ListaJugadores.h"

class Gestor {
public:
    Gestor();
    Gestor(const Gestor& orig);
    virtual ~Gestor();

    ListaJugadores* getLista();
    ColaJugadores* getCola();
    PilaJugadores* getPila();

    string agregarJugador(int, int, string);
    string buscarJugador(int);
    string listarJugadores(int);
    string eliminarJugador(int);
    bool eliminarJugadorLista(int);
    string pasarJugador(int);
    string pasarJugadorDeLista(int, int);
private:
     ListaJugadores* lista;
     ColaJugadores* cola;
    PilaJugadores* pila;
};

#endif /* GESTOR_H */



