/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: NodoEstudiante.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */


#include "NodoEstudiante.h"
#include <iostream>

#include <sstream>
using namespace std;

NodoEstudiante::NodoEstudiante() {

    setSiguiente(NULL);
}

NodoEstudiante::NodoEstudiante(Estudiante pEstudiante) {
    setEstudiante(pEstudiante);

    setSiguiente(NULL);
}

NodoEstudiante::~NodoEstudiante() {
}

Estudiante NodoEstudiante::getEstudiante() {
    return estudiante;
}

void NodoEstudiante::setEstudiante(Estudiante pEstudiante) {
    estudiante = pEstudiante;
}

NodoEstudiante* NodoEstudiante::getSiguiente() {
    return siguiente;
}

void NodoEstudiante::setSiguiente(NodoEstudiante* pSiguiente) {
    siguiente = pSiguiente;
}

