/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: enzoq
 *
 * Created on June 25, 2018, 7:01 PM
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
void eliminarNodo();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do {

        mostrarMenu();
        opc = leerOpcion();
        ejecutarAccion(opc);

    } while (opc != 4);
    return 0;
}

void mostrarMenu() {
    cout << "\n";
    cout << "1. ---|      CREAR NODO      |--- \n";
    cout << "2. ---|     BUSCAR NODO      |--- \n";
    cout << "3. ---|     ELIMINAR NODO    |--- \n";
    cout << "4. ---|        SALIR         |--- \n";
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
            eliminarNodo();
            break;
        case 4:
            cout << "Adios";
            break;
        default:
            cout << "OPCION INVALIDA";

    }
}

void digitarNumero() {
    int num;
    cout << "Digite numero a insertar: ";
    cin>>num;
    gestor.insertarNumero(num);
    cout << gestor.getLista();
}

void buscarNumero() {
    int num = 0;
    cout << "Digite numero a buscar: ";
    cin>>num;
    if (gestor.busquedaNumero(num) == NULL) {
        cout << "LISTA VACIA";
    } else {
        cout << gestor.busquedaNumero(num)->getNumero();
    }
}

void eliminarNodo() {
    int num = 0;
    cout << "Digite nodo a eliminar: ";
    cin>>num;
    if (!gestor.eliminarNodo(num)) {
        cout << "LISTA VACIA";
    } else {
        cout << gestor.eliminarNodo(num);
    }
}

