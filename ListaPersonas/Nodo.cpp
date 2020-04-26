/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Nodo.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */
#include <iostream>
#include "Nodo.h"
#include "Persona.h"
using namespace std;

Nodo::Nodo() {

}

Nodo::Nodo(Persona pPersona) {
    setPersona(pPersona);
}

Nodo::Nodo(const Nodo& orig) {
}

Nodo::~Nodo() {
}

Persona Nodo::getPersona() {
    return persona;
}

void Nodo::setPersona(Persona pPersona) {
    persona = pPersona;
}

Nodo* Nodo::getSiguiente() {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* pSiguiente) {
    siguiente = pSiguiente;
}
