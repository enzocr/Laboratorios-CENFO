/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Jugador.cpp
 Autor: Enzo Quartino Zamora y Alvaro Arce
 e-mail: equartinoz@ucenfotec.ac.cr || aarced@ucenfotec.ac.cr
 * Proyecto #2
 Fecha de creación: 31/07/2018
 Fecha de último cambio: 19/08/2018
 */
#include <sstream>

#include "Jugador.h"

Jugador::Jugador() {
    setCedula(0);
    setNombre("");
}

Jugador::Jugador(int pCedula, string pNombre) {
    setCedula(pCedula);
    setNombre(pNombre);
}

Jugador::~Jugador() {
}

int Jugador::getCedula() {
    return cedula;
}

void Jugador::setCedula(int pCedula) {
    cedula = pCedula;
}

string Jugador::getNombre() {
    return nombre;
}

void Jugador::setNombre(string pNombre) {
    nombre = pNombre;
}

string Jugador::toString() {
    std::ostringstream s;
    s << "Cedula: " << getCedula() << " || Nombre: " << getNombre();

    return s.str();
}