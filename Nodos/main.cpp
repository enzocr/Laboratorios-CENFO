/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: enzoq
 *
 * Created on June 4, 2018, 7:14 PM
 */

#include <iostream>
#include <cstdlib>
#include "Nodo.h"
#include "Lista.h"
#include "Gestor.h"

using namespace std;
Gestor gestor;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);
void digitarNumero();
void buscarNumero();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do {

        mostrarMenu();
        opc = leerOpcion();
        ejecutarAccion(opc);

    } while (opc != 3);
    return 0;

}

void mostrarMenu() {
    cout << "\n";
    cout << "1. ---|      CREAR NODO      |--- \n";
    cout << "2. ---|     BUSCAR NODO      |--- \n";
    cout << "3. ---|        SALIR      |--- \n";
}

int leerOpcion() {

    int opcion;


    cout << "Seleccione accion a realizar: ";
    cin>>opcion;


    return opcion;
}

void ejecutarAccion(int pOpcion) {

    switch (pOpcion) {

        case 1:
            digitarNumero();
            break;
        case 2:
            buscarNumero();
            break;
        case 3:
            cout << "Adios";
            break;
        default:
            cout << "OPCION INVALIDA";

    }
}

void digitarNumero() {
    int num = 0;
    cout << "Digite numero a insertar: ";
    cin>>num;
    gestor.insertarSiguiente(num);
    //    gestor.insertarSiguiente(8);
    //    gestor.insertarSiguiente(4);
    //    gestor.insertarSiguiente(23);
    cout << gestor.getLista();
}

void buscarNumero() {
    int num = 0;
    cout << "Digite numero a buscar: ";
    cin>>num;
    cout << gestor.busquedaNumero(num);
}

