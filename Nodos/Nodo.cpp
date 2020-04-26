/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: enzoq
 * 
 * Created on June 4, 2018, 7:15 PM
 */
#include <iostream>
#include "Nodo.h"
using namespace std;

Nodo::Nodo() {

    setNumero(0);
    setSiguiente(NULL);
}

Nodo::Nodo(int numero) {
    
    setNumero(numero);
    setSiguiente(NULL);
}

Nodo::Nodo(const Nodo& orig) {
}

Nodo::~Nodo() {
}

int Nodo::getNumero() {
    return numero1;
}

void Nodo::setNumero(int numero) {
    numero1 = numero;
}

Nodo* Nodo::getSiguiente() {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* pSiguiente) {
    siguiente = pSiguiente;
}

