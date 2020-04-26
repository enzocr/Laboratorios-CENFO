/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculadora.h
 * Author: enzoq
 *
 * Created on May 27, 2018, 4:52 PM
 */

#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "Operacion.h"

class Calculadora {
public:
    Calculadora();
    Calculadora(const Calculadora& orig);
    virtual ~Calculadora();
    Operacion sumar(double*, double*);
    Operacion restar(double*, double*);
    Operacion dividir(double*, double*);
    Operacion multiplicar(double*, double*);
    Operacion raiz(double*);
    Operacion modulo(int*, int*);
    Operacion potencia(double*, double*);
    void guardarOperaciones(Operacion);
    Operacion* getOperaciones ();
    
private:
    Operacion listaOperaciones[3];
};

#endif /* CALCULADORA_H */

