/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NodoCarta.h
 * Author: enzoq
 *
 * Created on August 3, 2018, 9:09 AM
 */

#ifndef NODOCARTA_H
#define NODOCARTA_H
#include "Carta.h"

class NodoCarta {
public:
    NodoCarta();
    NodoCarta(Carta);
    NodoCarta(const NodoCarta& orig);
    virtual ~NodoCarta();

    Carta getCarta();
    void setCarta(Carta);
    NodoCarta* getSiguiente();
    void setSiguiente(NodoCarta*);

private:
    Carta carta;
    NodoCarta* siguiente;

};

#endif /* NODOCARTA_H */

