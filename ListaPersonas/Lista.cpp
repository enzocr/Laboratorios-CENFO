/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Lista.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */
#include <sstream>
#include <iostream>
#include "Lista.h"
#include "Persona.h"
#include "Nodo.h"
using namespace std;

Lista::Lista() {
    setCabeza(NULL);
}

Lista::Lista(const Lista& orig) {
}

Lista::~Lista() {
}

Nodo* Lista::getCabeza() {

    return cabeza;
}

void Lista::setCabeza(Nodo* pCabeza) {
    cabeza = pCabeza;

}

bool Lista::isNull() {
    return getCabeza() == NULL;
}

void Lista::insertarInicio(Persona pPersona) {
    Nodo* nuevo = new Nodo(pPersona);

    nuevo ->setSiguiente(getCabeza());
    setCabeza(nuevo);
}

void Lista::insertarOrdenado(Persona persona) {

    Nodo* nuevo = new Nodo(persona);

    if (isNull()) {

        insertarInicio(persona);
    } else {
        if (getCabeza()->getPersona().getCedula() > nuevo->getPersona().getCedula()) {

            insertarInicio(persona);
        } else {

            Nodo* aux = getCabeza();
            while (aux->getSiguiente() != NULL &&
                    aux ->getSiguiente()->getPersona().getCedula() < persona.getCedula()) {

                aux = aux->getSiguiente();
            }
            nuevo ->setSiguiente(aux->getSiguiente());
            //aux ->getSiguiente() = nuevo;
            aux ->setSiguiente(nuevo);
        }
    }
}

Nodo* Lista::buscarPorCedula(int pCedula) {

    if (!isNull()) {
        Nodo* aux = getCabeza();
        while (aux != NULL) {
            if (aux -> getPersona().getCedula() == pCedula) {
                return aux;
            } else {
                aux = aux ->getSiguiente();
                aux ->setSiguiente(getCabeza());
            }
        }
    } else {
        return NULL;
    }
}

Nodo* Lista::buscarPorNombre(string pNombre) {

    if (!isNull()) {
        Nodo* aux = getCabeza();
        while (aux != NULL) {
            if (aux -> getPersona().getNombre() == pNombre) {
                return aux;
            } else {
                aux = aux ->getSiguiente();
                aux ->setSiguiente(getCabeza());
            }
        }
    } else {
        return NULL;
    }
}

string Lista::mostrarLista() {

    std::ostringstream s;
    if (!isNull()) {
        Nodo* aux = getCabeza();
        while (aux != NULL) {

            s << aux->getPersona().toString() << "\n";
            aux = aux ->getSiguiente();

        }

    } else {
        s << "lista vacia";
    }
    return s.str();



}

bool Lista::eliminarNodoPersona(int pCedula) {
    if (isNull()) {
        return false;
    } else {
        if (getCabeza()->getPersona().getCedula() == pCedula) {
            setCabeza(getCabeza()->getSiguiente());
            return true;
        } else {
            Nodo* temp = getCabeza();
            while (temp != NULL) {
                temp = temp->getSiguiente();
                if (temp != NULL) {
                    temp = temp->getSiguiente()->getSiguiente();
                    return true;
                } else {
                    return false;
                }
            }
        }
    }
}
