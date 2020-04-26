
#include "Pila.h"
#include "Nodo.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

Pila::Pila() {
    cabeza == NULL;
}

bool Pila::esVacia() {

    if (cabeza == NULL) {
        return true;
    } else {
        return false;
    }

}

bool Pila::insertarLibro(Libro pLibro) {

    Nodo * newNodo;
    newNodo = new Nodo(pLibro);


    if (this->cabeza == NULL) {
        this->cabeza = newNodo;
    } else {
        Nodo * aux;
        aux = new Nodo();

        aux = getCabeza();
        cabeza = newNodo;
        cabeza->setSiguiente(aux);
    }

    return true;
}

void Pila::recorrerPila() {

    int i = 0;

    do {
        i++;

        if (getCabeza() == NULL) {
            std::cout << "\n\nNo hay items en la pila";
        } else {

            std::cout << "\n\nItem " << i << ":" << cabeza->getLibro().toString();
            this->cabeza = cabeza->getSiguiente();
        }

        std::cout << "\n\n";
    } while (getCabeza() != NULL);

}

Nodo * Pila::RemoverNodo() { //POP


    Nodo* aux = new Nodo();

    if (esVacia() == false) {
        std::cout << "\n\nTiene datos. ENTRA AL METODO.";

        aux = getCabeza();
        setCabeza(cabeza->getSiguiente());
        return aux;
    } else {
        return aux;
    }
}

void Pila::setCabeza(Nodo * pNodo) {
    this->cabeza == pNodo;
}

Nodo* Pila::getCabeza() {
    return this->cabeza;
}

Pila::~Pila() {

}