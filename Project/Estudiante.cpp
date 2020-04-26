/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Estudiante.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#include "Estudiante.h"
#include <sstream>
Estudiante::Estudiante() {
}

Estudiante::Estudiante(int pCedula, string pPrimerNombre, string pSegundoNombre, string pPrimerApellido,
        string pSegundoApellido, int pNotaFinal, string pEstado) {
    setCedula(pCedula);
    setPrimerNombre(pPrimerNombre);
    setSegundoNombre(pSegundoNombre);
    setPrimerApellido(pPrimerApellido);
    setSegundoApellido(pSegundoApellido);
    setNotaFinal(pNotaFinal);
    setEstado(pEstado);
}

Estudiante::Estudiante(const Estudiante& orig) {
}

Estudiante::~Estudiante() {
}

int Estudiante::getCedula() {
    return cedula;
}

void Estudiante::setCedula(int pCedula) {
    cedula = pCedula;
}

string Estudiante::getPrimerNombre() {
    return primerNombre;
}

void Estudiante::setPrimerNombre(string pNombre) {
    primerNombre = pNombre;
}

string Estudiante::getSegundoNombre() {
    return segundoNombre;
}

void Estudiante::setSegundoNombre(string pNombre) {
    segundoNombre = pNombre;
}

string Estudiante::getPrimerApellido() {
    return primerApellido;
}

void Estudiante::setPrimerApellido(string pApellido) {
    primerApellido = pApellido;
}

string Estudiante::getSegundoApellido() {
    return segundoApellido;
}

void Estudiante::setSegundoApellido(string pApellido) {
    segundoApellido = pApellido;
}

int Estudiante::getNotaFinal() {
    return notaFinal;
}

void Estudiante::setNotaFinal(int pNotaFinal) {
    notaFinal = pNotaFinal;
}

string Estudiante::getEstado() {
    return estado;
}

void Estudiante::setEstado(string pEstado) {
    estado = pEstado;
}

string Estudiante::toString() {
    std::ostringstream s;
    s << getCedula() << ": " << getPrimerNombre() << " " <<
            getSegundoNombre() << " " << getPrimerApellido() << " " << getSegundoApellido() << "\n";
    s << getNotaFinal() << ": " << getEstado();
    return s.str();
}
