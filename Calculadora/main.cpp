/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: enzoq
 *
 * Created on May 21, 2018, 8:08 PM
 */


#include <iostream>
#include <cstdlib>
#include "Calculadora.h"
#include "Operacion.h"
void sumar();
void restar();
void multiplicar();
void dividir();
void raiz();
void potencia();
void modulo();
Calculadora calculadora;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);
void mostrarHistorial();
void mostrarResultado(Operacion);
void mathError();


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    
    do {

        mostrarMenu();
        opc = leerOpcion();
        ejecutarAccion(opc);

    } while (opc != 9);
    return 0;
}

void mostrarMenu() {
    cout << "\n";
    cout << "1. ---|     SUMAR     |--- \n";
    cout << "-------------------------- \n";
    cout << "2. ---|     RESTAR    |--- \n";
    cout << "-------------------------- \n";
    cout << "3. ---|    DIVIDIR    |--- \n";
    cout << "-------------------------- \n";
    cout << "4. ---|  MULTIPLICAR  |--- \n";
    cout << "-------------------------- \n";
    cout << "5. ---| RAIZ CUADRADA |--- \n";
    cout << "-------------------------- \n";
    cout << "6. ---|   POTENCIA    |--- \n";
    cout << "-------------------------- \n";
    cout << "7. ---|     MODULO    |--- \n";
    cout << "-------------------------- \n";
    cout << "8. ---|   HISTORIAL   |--- \n";
    cout << "-------------------------- \n";
    cout << "9. ---|    APAGAR     |--- \n";

}

int leerOpcion() {

    int opcion;


    cout << "Seleccione accion a realizar: ";
    cin>>opcion;

    //    if (opcion < 0 || opcion > 7) {
    //
    //        cout << "OPCION INVALIDA";
    //
    //    }

    return opcion;
}

void ejecutarAccion(int pOpcion) {

    switch (pOpcion) {

        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 3:
            dividir();
            break;
        case 4:
            multiplicar();
            break;
        case 5:
            raiz();
            break;
        case 6:
            potencia();
            break;
        case 7:
            modulo();
            break;
        case 8:
            mostrarHistorial();
            break;
        case 9:
            cout << "Calculadora apagandose...";
            break;
        default:
            cout << "SYNTAX ERROR";

    }
}

void sumar() {
    double n1, n2;
    cout << "Digite el primer sumando: ";
    cin>>n1;
    cout << "Digite el segundo sumando: ";
    cin>>n2;
    double* p1;
    double* p2;
    p1 = &n1;
    p2 = &n2;

    Operacion op = calculadora.sumar(p1, p2);
    cout << op.getNumero1() <<
            op.getSignoOperacion() <<
            op.getNumero2() << " = " <<
            op.getResultado();
    //mostrarResultado(op);
}

void restar() {
    double n1, n2;
    cout << "Digite el minuendo: ";
    cin>>n1;
    cout << "Digite el sustraendo: ";
    cin>>n2;
    double* p1;
    double* p2;
    p1 = &n1;
    p2 = &n2;

    Operacion op = calculadora.restar(p1, p2);
    //mostrarResultado(op);
    cout << op.getNumero1() <<
            op.getSignoOperacion() <<
            op.getNumero2() << " = " <<
            op.getResultado();
}

void dividir() {
    double n1, n2;
    cout << "Digite el divisor: ";
    cin>>n1;
    cout << "Digite el dividendo: ";
    cin>>n2;
    if (n2 == 0) {
        mathError();
    } else {
        double* p1;
        double* p2;
        p1 = &n1;
        p2 = &n2;
        Operacion op = calculadora.dividir(p1, p2);
        //mostrarResultado(op);
        cout << op.getNumero1() <<
                op.getSignoOperacion() <<
                op.getNumero2() << " = " <<
                op.getResultado();

    }
}

void multiplicar() {
    double n1, n2;

    cout << "Digite el multiplicando: ";
    cin>>n1;
    cout << "Digite el multiplicador: ";
    cin>>n2;
    double* p1;
    double* p2;
    p1 = &n1;
    p2 = &n2;
    Operacion op = calculadora.multiplicar(p1, p2);
    //mostrarResultado(op);
    cout << op.getNumero1() <<
            op.getSignoOperacion() <<
            op.getNumero2() << " = " <<
            op.getResultado();
}

void raiz() {
    double n1;
    cout << "Digite el radicando: ";
    cin>>n1;

    if (n1 < 0) {
        mathError();
    } else {
        double* p1;
        p1 = &n1;
        Operacion op = calculadora.raiz(p1);
        // mostrarResultado(op);
        cout << op.getSignoOperacion() <<
                op.getNumero1() << " = "
                << op.getResultado();
    }
}

void potencia() {
    double n1, n2;
    cout << "Digite el numero base: ";
    cin>>n1;
    cout << "Digite el exponente: ";
    cin>>n2;
    double* p1;
    double* p2;
    p1 = &n1;
    p2 = &n2;
    Operacion op = calculadora.potencia(p1, p2);
    //mostrarResultado(op);
    cout << op.getNumero1() <<
            op.getSignoOperacion() <<
            op.getNumero2() << " = " <<
            op.getResultado();
}

void modulo() {
    int n1, n2;
    cout << "Digite el divisor: ";
    cin>>n1;
    cout << "Digite el dividendo: ";
    cin>>n2;

    int* p1;
    int* p2;
    p1 = &n1;
    p2 = &n2;

    Operacion op = calculadora.modulo(p1, p2);
    //mostrarResultado(op);
    cout << op.getNumero1() <<
            op.getSignoOperacion() <<
            op.getNumero2() << " = " <<
            op.getResultado();
}

void mostrarHistorial() {

    Operacion*arregloOperaciones = calculadora.getOperaciones();
    for (int i = 0; i < 3; i++) {
        if (arregloOperaciones[i].getSignoOperacion() == "√") {
            cout << i + 1 << ". " << arregloOperaciones[i].getSignoOperacion() <<
                    arregloOperaciones[i].getNumero1() << " = " <<
                    arregloOperaciones[i].getResultado() << "\n";
        } else {
            cout << i + 1 << ". " << arregloOperaciones[i].getNumero1() <<
                    arregloOperaciones[i].getSignoOperacion() <<
                    arregloOperaciones[i].getNumero2() << " = " <<
                    arregloOperaciones[i].getResultado() << "\n";
        }
    }

}

void mostrarResultado(Operacion op) {
    if (op.getSignoOperacion() == "√") {
        cout << op.getSignoOperacion() <<
                op.getNumero1() << " = "
                << op.getResultado();
    } else {
        cout << op.getNumero1() <<
                op.getSignoOperacion() <<
                op.getNumero2() << " = " <<
                op.getResultado();
    }

}

void mathError() {
    cout << "MATH ERROR \n";
}

