/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mazo.h
 * Author: enzoq
 *
 * Created on August 3, 2018, 9:21 AM
 */

#ifndef MAZO_H
#define MAZO_H
#include "NodoCarta.h"
#include "Carta.h"

#include <iostream>
#include <sstream>
using namespace std;

class Mazo {
public:
    Mazo();
   // Mazo(const Mazo& orig);
    //virtual ~Mazo();
    void apilar(Carta);
    Carta desapilar();
    NodoCarta* getTope();
    void setTope(NodoCarta*);
    NodoCarta* verTope();
    bool isEmpty();
    string mostrarMazo();
    bool eliminarMazo();

    void inicializar();
    string transformarNombre(int);
    void inicializarTreboles();
    void inicializarEspadas();
    void inicializarCorazones();
    void inicializarDiamantes();
    //void barajar();
private:

    NodoCarta* tope;

};

#endif /* MAZO_H */

