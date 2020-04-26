/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Controller.cpp
 * Author: enzoq
 * 
 * Created on October 8, 2018, 8:40 PM
 */

#include "Controller.h"
#include "TablaHash.h"
#include "Persona.h"

#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>

Controller::Controller() {
    th = new TablaHash();
}

Controller::Controller(const Controller& orig) {
}

Controller::~Controller() {
}

string Controller::add(string pNombre, string pApellidos, int pCedula) {
    Persona p(pNombre, pApellidos, pCedula);

    ostringstream s;
    getHashTable()->addPersona(hashingNumber(pCedula), p);

    if (getHashTable()->searchByID(hashingNumber(pCedula), pCedula).getCedula() != NULL) {
        s << "Persona: " << getHashTable()->searchByID(hashingNumber(pCedula), pCedula).toString() << " agregado en la ubicación: " << hashingNumber(pCedula) << "\n";
    } else {
        s << "No existe ningun registro que corresponda";
    }

    return s.str();
}

string Controller::searchByID(int pID) {
    ostringstream s;
    s << "*** RESULTADOS BÚSQUEDA POR CÉDULA***\n";
    if (getHashTable()->searchByID(hashingNumber(pID), pID).getCedula() != NULL) {
        s << getHashTable()->searchByID(hashingNumber(pID), pID).toString();
    } else {
        s << "No existe ningun registro que corresponda\n";
    }
    return s.str();
}

//string Controller::searchByLastName(char pLastName) {
//    ostringstream s;
//    s << "*** RESULTADOS BÚSQUEDA POR APELLIDO***\n";
//    s << getHashTable()->searchByLastName(hashingNumber(pLastName), pLastName);
//    return s.str();
//}

TablaHash* Controller::getHashTable() {
    return th;
}

int Controller::hashingNumber(int num) {
    return (num % (30 - 1));
}

int Controller::hashingChar(char cad) {
    int valor;
    unsigned char c;
    for (c = cad, valor = 0; c; c++)
        valor += (int) (c);
    return (valor % 13);
}