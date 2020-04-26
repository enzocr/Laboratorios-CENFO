/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestor.cpp
 * Author: enzoq
 * 
 * Created on June 4, 2018, 9:10 PM
 */

#include "Gestor.h"

Gestor::Gestor() {

}

Gestor::Gestor(const Gestor& orig) {
}

Gestor::~Gestor() {
}

void Gestor::insertarSiguiente(int value) {
    lista.insertarInicio(value);
}

Nodo* Gestor::busquedaNumero(int value) {
    return lista.buscarNumero(value);
}

std::string Gestor::getLista() {
    return lista.mostrarLista();
}