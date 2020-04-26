/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Jugador.cpp
 * Author: enzoq
 * 
 * Created on August 3, 2018, 11:28 AM
 */

#include <sstream>

#include "Jugador.h"

Jugador::Jugador() {
    setCedula(0);
    setNombre("");
    setApuesta(0);
    cartas[0].setNombre("");
    cartas[0].setPalo("");
    cartas[0].setValor(0);
    cartas[1].setNombre("");
    cartas[1].setPalo("");
    cartas[1].setValor(0);


}

Jugador::Jugador(int pCedula, string pNombre, int pApuesta) {
    setCedula(pCedula);
    setNombre(pNombre);
    setApuesta(pApuesta);
}

//Jugador::Jugador(const Jugador& orig) {
//}

Jugador::~Jugador() {
}

int Jugador::getCedula() {
    return cedula;
}

void Jugador::setCedula(int pCedula) {
    cedula = pCedula;
}

string Jugador::getNombre() {
    return nombre;
}

void Jugador::setNombre(string pNombre) {
    nombre = pNombre;
}

int Jugador::getApuesta() {
    return apuesta;
}

void Jugador::setApuesta(int pApuesta) {
    apuesta = pApuesta;
}

Carta* Jugador::getCartas() {
    return cartas;
}

void Jugador::setCarta(Carta pCarta) {

    cartas[1] = cartas[0];
    cartas[0] = pCarta;
}

bool Jugador::getBeatTheHouse() {
    return beatTheHouse;
}

void Jugador::setBeatTheHouse(bool bandera) {
    beatTheHouse = bandera;
}

int Jugador::getPuntuacion() {
    return getCartas()[0].getValor() + getCartas()[1].getValor();
}

string Jugador::toString() {
    std::ostringstream s;
    s << getCedula() << " || " << getNombre() << " || " << getApuesta() << "\n";
    s << "Cartas: " << getCartas()[0].toString() << " || " << getCartas()[1].toString();

    return s.str();
}