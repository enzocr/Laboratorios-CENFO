/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TablaHash.h
 * Author: enzoq
 *
 * Created on October 8, 2018, 8:29 PM
 */

#ifndef TABLAHASH_H
#define TABLAHASH_H
#include "Persona.h"
#include "Nodo.h"
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>

class TablaHash {
public:
    TablaHash();
    ~TablaHash();
    void addPersona(int, Persona);
    Persona searchByID(int, int);
    // string searchByLastName(int, char);
    Nodo* getVectorArray();

private:
    Nodo* m_vector[30];

};

#endif /* TABLAHASH_H */

