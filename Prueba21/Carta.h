/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Carta.h
 * Author: enzoq
 *
 * Created on August 3, 2018, 9:09 AM
 */

#ifndef CARTA_H
#define CARTA_H
#include <iostream>
using namespace std;

class Carta {
public:
    Carta();
    Carta(string, string, int);
    //Carta(const Carta& orig);
    virtual ~Carta();
    
    string getNombre();
    void setNombre(string);
    string getPalo();
    void setPalo(string);
    int getValor();
    void setValor(int);
    string toString();
private:
    string nombre;
    string palo;
    int valor;

};

#endif /* CARTA_H */

