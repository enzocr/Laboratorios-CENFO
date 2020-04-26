/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: Jugador.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
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
    s << "Cedula: " << getCedula() << " || Nombre: " << getNombre() << "\n";

    return s.str();
}