/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.h
 * Author: enzoq
 *
 * Created on June 4, 2018, 7:15 PM
 */

#ifndef NODO_H
#define NODO_H
using namespace std;
class Nodo {
public:
    Nodo();
    Nodo(int);
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    int getNumero();
    void setNumero(int);
    Nodo* getSiguiente();
    void setSiguiente(Nodo*);

private:
    int numero1;
    Nodo* siguiente;

};

#endif /* NODO_H */

