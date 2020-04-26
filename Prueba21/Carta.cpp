/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carta.cpp
 * Author: enzoq
 * 
 * Created on August 3, 2018, 9:09 AM
 */

#include "Carta.h"
#include <iostream>
#include <sstream>
using namespace std;

Carta::Carta() {
    //setNombre("");
    //setPalo("");
    // setValor(0);
}

Carta::Carta(string pNombre, string pPalo, int pValor) {
    setNombre(pNombre);
    setPalo(pPalo);
    setValor(pValor);
}

//Carta::Carta(const Carta& orig) {
//}

Carta::~Carta() {
}

string Carta::getNombre() {
    return nombre;
}

void Carta::setNombre(string pNombre) {
    nombre = pNombre;
}

string Carta::getPalo() {
    return palo;
}

void Carta::setPalo(string pPalo) {
    palo = pPalo;
}

int Carta::getValor() {
    return valor;
}

void Carta::setValor(int pValor) {
    valor = pValor;
}

string Carta::toString() {

    std::ostringstream s;
    s << "  " << getNombre() << " " << getPalo();
    return s.str();
}
