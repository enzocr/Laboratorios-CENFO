/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculadora.cpp
 * Author: enzoq
 * 
 * Created on May 27, 2018, 4:52 PM
 */

#include <iostream>
#include<stdlib.h>
#include<cmath>
#include "Calculadora.h"

using namespace std;

Calculadora::Calculadora() {

    listaOperaciones[0] = Operacion(-1.0, "_");
    listaOperaciones[0].setNumero2(1.0);
    listaOperaciones[0].setSignoOperacion("_");
    listaOperaciones[0].setResultado(0.0);

    listaOperaciones[1] = Operacion(-1.0, "_");
    listaOperaciones[1].setNumero2(1.0);
    listaOperaciones[1].setSignoOperacion("_");
    listaOperaciones[1].setResultado(0.0);

    listaOperaciones[2] = Operacion(-1.0, "_");
    listaOperaciones[2].setNumero2(1.0);
    listaOperaciones[2].setSignoOperacion("_");
    listaOperaciones[2].setResultado(0.0);
}

Calculadora::Calculadora(const Calculadora& orig) {

}

Calculadora::~Calculadora() {
}

Operacion Calculadora::sumar(double* n1, double* n2) {

    Operacion op(*n1, "+");
    op.setNumero2(*n2);
    op.setResultado(*n1 + *n2);
    guardarOperaciones(op);

    return op;
}

Operacion Calculadora::restar(double* n1, double* n2) {
 
    Operacion op(*n1, "-");
    op.Operacion::setNumero2(*n2);
    op.Operacion::setResultado(*n1 - *n2);
    guardarOperaciones(op);

    return op;
}

Operacion Calculadora::dividir(double* n1, double* n2) {
 
    Operacion op(*n1, "/");
    op.Operacion::setNumero2(*n2);
    op.Operacion::setResultado((*n1) / (*n2));
    guardarOperaciones(op);

    return op;
}

Operacion Calculadora::multiplicar(double* n1, double* n2) {

    Operacion op(*n1, "*");
    op.Operacion::setNumero2(*n2);
    op.Operacion::setResultado((*n1) * (*n2));
    guardarOperaciones(op);

    return op;
}

Operacion Calculadora::raiz(double* n1) {

    Operacion op(*n1, "√");
    op.Operacion::setResultado(sqrt(*n1));
    guardarOperaciones(op);

    return op;
}

Operacion Calculadora::modulo(int* n1, int* n2) {
    Operacion op(*n1, "%");
    op.Operacion::setNumero2(*n2);
    op.Operacion::setResultado(*n1 % *n2);
    guardarOperaciones(op);
    return op;

}

Operacion Calculadora::potencia(double* n1, double* n2) {

    Operacion op(*n1, "^");
    op.Operacion::setNumero2(*n2);
    op.Operacion::setResultado(pow(*n1, *n2));
    guardarOperaciones(op);
    return op;

}

void Calculadora::guardarOperaciones(Operacion operacion) {
    listaOperaciones[2] = listaOperaciones[1];
    listaOperaciones[1] = listaOperaciones[0];
    listaOperaciones[0] = operacion;
}

Operacion* Calculadora::getOperaciones() {
    return listaOperaciones;
}

