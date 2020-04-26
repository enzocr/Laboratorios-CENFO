/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCarta.cpp
 * Author: enzoq
 * 
 * Created on August 3, 2018, 9:09 AM
 */

#include "NodoCarta.h"
#include <iostream>
using namespace std;

NodoCarta::NodoCarta() {
}

NodoCarta::NodoCarta(Carta pCarta) {
    setCarta(pCarta);
    setSiguiente(NULL);
}

NodoCarta::NodoCarta(const NodoCarta& orig) {
}

NodoCarta::~NodoCarta() {
}

Carta NodoCarta::getCarta() {
    return carta;
}

void NodoCarta::setCarta(Carta pCarta) {
    carta = pCarta;
}

NodoCarta* NodoCarta::getSiguiente() {
    return siguiente;
}

void NodoCarta::setSiguiente(NodoCarta* pSiguiente) {
    siguiente = pSiguiente;
}
