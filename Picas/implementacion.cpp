/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   implementacion.cpp
 * Author: enzoq
 * 
 * Created on May 21, 2018, 2:50 PM
 */


#include "numeroBase.h"
#include <iostream>
using namespace std;

void numeroBase::inicializar() {
    arreglo[0] = 1;
    arreglo[1] = 7;
    arreglo[2] = 6;
    arreglo[3] = 8;
}

numeroBase::numeroBase() {

}

double* numeroBase::getNumeroBase() {
    return arreglo;
}

void numeroBase::setNumeroBase(double* pArreglo) {
    arreglo = pArreglo;
}

double numeroBase::verificarArreglo(double* pArreglo) {

    double contador = 0;


    if (arreglo[0] == pArreglo[0]) {
        contador++;
    }


    if (arreglo[1] == pArreglo[1]) {
        contador++;
    }


    if (arreglo[2] == pArreglo[2]) {
        contador++;
    }


    if (arreglo[3] == pArreglo[3]) {
        contador++;
    }

    return contador;

}





