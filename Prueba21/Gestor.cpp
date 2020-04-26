/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestor.cpp
 * Author: enzoq
 * 
 * Created on August 3, 2018, 11:41 AM
 */

#include "Gestor.h"

Gestor::Gestor() {
}

Gestor::Gestor(const Gestor& orig) {
}

Gestor::~Gestor() {
}

Partida* Gestor::getPartida() {
    return partida;
}

void Gestor::setPartida(Partida* pPartida) {
    partida = pPartida;
}

