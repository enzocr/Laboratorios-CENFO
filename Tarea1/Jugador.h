/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: Jugador.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
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

