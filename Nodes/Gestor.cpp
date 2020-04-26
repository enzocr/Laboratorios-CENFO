/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestor.cpp
 * Author: enzoq
 * 
 * Created on June 25, 2018, 7:03 PM
 */

#include "Gestor.h"

Gestor::Gestor() {
}

Gestor::Gestor(const Gestor& orig) {
}

Gestor::~Gestor() {
}

void Gestor::insertarNumero(int value) {
    lista.insertarOrdenado(value);
}

Nodo* Gestor::busquedaNumero(int value) {
    if (lista.isNull()) {
        return NULL;
    } else {
        return lista.buscarNumero(value);
    }
}

std::string Gestor::getLista() {
    if (lista.isNull()) {
        return "Lista vacia";
    } else {
        return lista.mostrarLista();
    }
}

bool Gestor::eliminarNodo(int numero) {
    if (lista.isNull()) {
        return false;
    } else {
        return lista.eliminarNodo(numero);
    }
}