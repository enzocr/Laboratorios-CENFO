/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TablaHash.cpp
 * Author: enzoq
 * 
 * Created on October 8, 2018, 8:29 PM
 */

#include "TablaHash.h"
#include "Nodo.h"
#include <vector>
using namespace std;

TablaHash::TablaHash() {

    for (int i = 0; i < 30; i++) {
        m_vector [i] = NULL;
    }
}

Nodo* TablaHash::getVectorArray() {
    return *m_vector;
}

void TablaHash::addPersona(int indice, Persona p) {


    if (m_vector[indice] == NULL) {
        Nodo* newPersona = new Nodo(p);
        m_vector[indice] = newPersona;
    } else {
        Nodo* aux = m_vector[indice];
        while (aux->getSiguiente() != NULL) {
            aux = aux->getSiguiente();
        }
        Nodo* newNodo = new Nodo(p);
        aux->setSiguiente(newNodo);
    }
}

TablaHash::~TablaHash() {

    for (int i = 0; i < 30; i++) {
        if (m_vector [i] != NULL) {
            delete m_vector[i];
        }
    }
}

Persona TablaHash::searchByID(int indice, int pCedula) {
    Nodo* aux = m_vector[indice];
    while (aux != NULL && aux->getPersona().getCedula() != pCedula) {
        aux = aux->getSiguiente();
    }
    return aux->getPersona();

}

//string TablaHash::searchByLastName(int index, char lastName) {
//    ostringstream s;
//    Nodo* aux = m_vector[index];
//    while (aux != NULL) {
//        if (aux->getPersona().getApellidos() == lastName) {
//            s << aux->getPersona().toString();
//        }
//        aux = aux->getSiguiente();
//    }
//    s.str();
//}