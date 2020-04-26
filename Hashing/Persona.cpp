/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Persona.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */
#include "Persona.h"

#include <sstream>
using namespace std;

Persona::Persona() {
    setNombre(" ");
    setApellidos(" ");
    setCedula(0);
}

Persona::Persona(string pNombre, string pApellidos, int pCedula) {
    nombre = pNombre;
    apellidos = pApellidos;
    cedula = pCedula;

}
//
//Persona::Persona(const Persona& orig) {
//}

Persona::~Persona() {
}

string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string pNombre) {
    nombre = pNombre;
}

string Persona::getApellidos() {
    return apellidos;
}

void Persona::setApellidos(string pApellidos) {
    apellidos = pApellidos;
}

int Persona::getCedula() {
    return cedula;
}

void Persona::setCedula(int pCedula) {
    cedula = pCedula;
}

string Persona::toString() {
    std::ostringstream s;
    s << nombre << ", " << apellidos << ", " << cedula;
    return s.str();

}