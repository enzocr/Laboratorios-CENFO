/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: ListaJugadores.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */

#ifndef LISTAJUGADORES_H
#define LISTAJUGADORES_H
#include <stdlib.h>
#include "Jugador.h"
#include "NodoJugador.h"
using namespace std;

class ListaJugadores {
public:
    ListaJugadores();
   ListaJugadores(const ListaJugadores& orig);
    virtual ~ListaJugadores();
    bool isNull();
    void insertarInicio(Jugador);
    void insertarOrdenado(Jugador);
    NodoJugador* buscarPorCedula(int);
    bool eliminarJugador(int);
    std::string mostrarLista(NodoJugador*);
    NodoJugador* getCabeza();
    void setCabeza(NodoJugador*);
private:
    NodoJugador* cabeza;
};

#endif /* LISTAJUGADORES_H */

