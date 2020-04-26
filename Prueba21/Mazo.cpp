/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mazo.cpp
 * Author: enzoq
 * 
 * Created on August 3, 2018, 9:21 AM
 */

#include "Mazo.h"
#include "NodoCarta.h"
#include "Carta.h"
#include <iostream>
#include <sstream>
using namespace std;

Mazo::Mazo() {
    setTope(NULL);
    inicializar();
}

//Mazo::Mazo(const Mazo& orig) {
//}
//
//Mazo::~Mazo() {
//}

NodoCarta* Mazo::getTope() {
    return tope;
}

void Mazo::setTope(NodoCarta* pTope) {
    tope = pTope;
}

void Mazo::apilar(Carta pCartaNueva) {
    NodoCarta* nuevo = new NodoCarta(pCartaNueva);
    nuevo->setSiguiente(getTope());
    setTope(nuevo);
}

Carta Mazo::desapilar() {
    if (isEmpty()) {
        cout << "Mazo sin cartas";
    } else {
        NodoCarta* aux = getTope();
        Carta aDesapilar = getTope()->getCarta();
        setTope(getTope()->getSiguiente());
        delete aux;
        return aDesapilar;
    }
}

NodoCarta* Mazo::verTope() {
    return getTope();
}

bool Mazo::isEmpty() {
    return getTope() == NULL;
}

string Mazo::mostrarMazo() {

    std::ostringstream s;
    NodoCarta* aux = getTope();
    while (aux != NULL) {
        s << aux->getCarta().toString() << "\n";
        aux = aux->getSiguiente();
    }

    return s.str();
}

bool Mazo::eliminarMazo() {
    NodoCarta* aux = getTope();
    while (aux != NULL) {
        setTope(getTope()->getSiguiente());
    }
    if (isEmpty()) {
        return true;
    } else {
        return false;
    }
}

void Mazo::inicializar() {
    inicializarCorazones();
    inicializarDiamantes();
    inicializarEspadas();
    inicializarTreboles();
}

void Mazo::inicializarTreboles() {

    for (int i = 0; i < 10; i++) {
        Carta carta(transformarNombre(i + 1), "♣", i + 1);
        apilar(carta);
    }
    Carta jota("Jota", "♣", 10);
    apilar(jota);
    Carta quina("Quina", "♣", 10);
    apilar(quina);
    Carta ka("Ka", "♣", 10);
    apilar(ka);


}

void Mazo::inicializarCorazones() {
    for (int i = 0; i < 10; i++) {
        Carta carta(transformarNombre(i + 1), "♥", i + 1);
        apilar(carta);
    }
    Carta jota("Jota", "♥", 10);
    apilar(jota);
    Carta quina("Quina", "♥", 10);
    apilar(quina);
    Carta ka("Ka", "♥", 10);
    apilar(ka);

}

void Mazo::inicializarDiamantes() {
    for (int i = 0; i < 10; i++) {
        Carta carta(transformarNombre(i + 1), "♦", i + 1);
        apilar(carta);
    }

    Carta jota("Jota", "♦", 10);
    apilar(jota);
    Carta quina("Quina", "♦", 10);
    apilar(quina);
    Carta ka("Ka", "♦", 10);
    apilar(ka);

}

void Mazo::inicializarEspadas() {
    for (int i = 0; i < 10; i++) {
        Carta carta(transformarNombre(i + 1), "♠", i + 1);
        apilar(carta);
    }
    Carta jota("Jota", "♠", 10);
    apilar(jota);
    Carta quina("Quina", "♠", 10);
    apilar(quina);
    Carta ka("Ka", "♠", 10);
    apilar(ka);

}

string Mazo::transformarNombre(int i) {
    if (i == 1) {
        return "As";
    }
    if (i == 2) {
        return "Dos";
    }
    if (i == 3) {
        return "Tres";
    }
    if (i == 4) {
        return "Cuatro";
    }
    if (i == 5) {
        return "Cinco";
    }
    if (i == 6) {
        return "Seis";
    }
    if (i == 7) {
        return "Siete";
    }
    if (i == 8) {
        return "Ocho";
    }
    if (i == 9) {
        return "Nueve";
    }
    if (i == 10) {
        return "Diez";
    }

    return "nulo";
}

//void Mazo::barajar() {
//   
//    
//}