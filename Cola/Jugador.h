/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Jugador.h
 Autor: Enzo Quartino Zamora y Alvaro Arce
 e-mail: equartinoz@ucenfotec.ac.cr || aarced@ucenfotec.ac.cr
 * Proyecto #2
 Fecha de creación: 31/07/2018
 Fecha de último cambio: 19/08/2018
 */

#ifndef JUGADOR_H
#define JUGADOR_H
using namespace std;
#include <sstream>
class Jugador {
public:
    Jugador();
    Jugador(int, string);
    virtual ~Jugador();

    int getCedula();
    void setCedula(int);
    string getNombre();
    void setNombre(string);

    string toString();
private:
    int cedula;
    string nombre;
};

#endif /* JUGADOR_H */

