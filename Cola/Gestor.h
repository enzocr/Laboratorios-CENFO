/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestor.h
 * Author: enzoq
 *
 * Created on September 11, 2018, 1:12 PM
 */

#ifndef GESTOR_H
#define GESTOR_H


#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include "ColaJugadores.h"
#include "Jugador.h"
#include "NodoJugador.h"


class Gestor {
public:
    Gestor();
    Gestor(const Gestor& orig);
    virtual ~Gestor();
private:

};

#endif /* GESTOR_H */

