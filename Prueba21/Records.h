

#ifndef RECORDS_H
#define RECORDS_H
#include "NodoJugador.h"
#include "Jugador.h"
using namespace std;

class Records {
public:
    Records();
    Records(const Records& orig);
    virtual ~Records();

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

