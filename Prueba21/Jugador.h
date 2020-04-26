/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Jugador.h
 * Author: enzoq
 *
 * Created on August 3, 2018, 11:28 AM
 */

#ifndef JUGADOR_H
#define JUGADOR_H
#include "Carta.h"
using namespace std;

class Jugador {
public:
    Jugador();
    Jugador(int, string, int);
   // Jugador(const Jugador& orig);
    virtual ~Jugador();

    int getCedula();
    void setCedula(int);
    string getNombre();
    void setNombre(string);
    int getApuesta();
    void setApuesta(int);
    Carta* getCartas();
    void setCarta(Carta);
    bool getBeatTheHouse();
    void setBeatTheHouse(bool);
    int getPuntuacion();
    string toString();
private:
    int cedula;
    string nombre;
    int apuesta;
    bool beatTheHouse;
    Carta cartas[2];
};

#endif /* JUGADOR_H */

