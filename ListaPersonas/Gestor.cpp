/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Gestor.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */

#include<iostream>
#include "Gestor.h"
#include "Lista.h"

using namespace std;

Gestor::Gestor() {
}

Gestor::Gestor(const Gestor& orig) {
}

Gestor::~Gestor() {
}

void Gestor::registrarPersona(string pNombre, string pApellidos, int pCedula, string pDomicilio) {
    Persona persona(pNombre, pApellidos, pCedula, pDomicilio);
    lista.insertarOrdenado(persona);
}

Nodo* Gestor::buscarPersonaPorCedula(int* pCedula) {
    return lista.buscarPorCedula(*pCedula);
}

Nodo* Gestor::buscarPersonaPorNombre(string* pNombre) {
    return lista.buscarPorNombre(*pNombre);
}

std::string Gestor::getLista() {
    if (lista.isNull()) {

        return "Lista vacia";
    } else {
        return lista.mostrarLista();
    }
}

bool Gestor::eliminarNodoPersona(int* pCedula) {
    if (lista.isNull()) {
        return false;
    } else {
        return lista.eliminarNodoPersona(*pCedula);
    }
}
