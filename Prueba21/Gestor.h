/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestor.h
 * Author: enzoq
 *
 * Created on August 3, 2018, 11:41 AM
 */

#ifndef GESTOR_H
#define GESTOR_H
#include "Partida.h"

class Gestor {
public:
    Gestor();
    Gestor(const Gestor& orig);
    virtual ~Gestor();
    Partida getPartida();
    void setPartida(Partida*);
    
    
private:
    Partida partida;

};

#endif /* GESTOR_H */

