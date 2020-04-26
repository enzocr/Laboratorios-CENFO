

#include <iostream>
#include<stdlib.h>
#include<cmath>
#include "Operacion.h"
using namespace std;

Operacion::Operacion() {
    numero1 = 0.0;
    signoOperacion = " ";
}

Operacion::Operacion(double n1, string signo) {
    numero1 = n1;
    signoOperacion = signo;
}


double Operacion::getNumero1() {
    return numero1;
}

void Operacion::setNumero1(double pNumero1) {
    numero1 = pNumero1;
}

double Operacion::getNumero2() {
    return numero2;
}

void Operacion::setNumero2(double pNumero2) {
    numero2 = pNumero2;
}

string Operacion::getSignoOperacion() {
    return signoOperacion;
}

void Operacion::setSignoOperacion(string pSignoOperacion) {
    signoOperacion = pSignoOperacion;
}

double Operacion::getResultado() {
    return result;
}

void Operacion::setResultado(double resultado) {
    result = resultado;
}
