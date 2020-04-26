/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: main.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * AVLTree – Tarea No.3
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Octubre del 2018
 */



#include <cstdlib>
#include <string>
#include <iostream>
#include "Controller.h"


void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);
Controller controller;
void addData();
void printPreOrder();
void printInOrder();
void printPostOrder();
void deleteData();
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

    } while (opc != 6);

    return 0;
}

void mostrarMenu() {
    cout << "\n";
    cout << "\n";
    cout << "1. ---|         INGRESAR DATO        |--- \n";
    cout << "2. ---|           PRE-ORDEN          |--- \n";
    cout << "3. ---|           IN-ORDEN           |--- \n";
    cout << "4. ---|          POST-ORDEN          |--- \n";
    cout << "5. ---|         ELIMINAR DATO        |--- \n";
    cout << "6. ---|             SALIR            |--- \n";
    cout << "\n";
    cout << "\n";
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
            addData();
            break;
        case 2:
            printPreOrder();
            break;
        case 3:
            printInOrder();
            break;
        case 4:
            printPostOrder();
            break;
        case 5:
            deleteData();
            break;
        case 6:
            cout << "Cerrando aplicación";
            break;
        default:
            cout << "OPCION INVALIDA";

    }
}

void addData() {
    int data;
    cout << "Número a ingresar: ";
    cin>>data;
    cout << controller.insertInt(data);
}

void printPreOrder() {
    cout << "PREORDEN: " << controller.showPreOrder();
}

void printInOrder() {
    cout << "IN-ORDEN: " <<  controller.showInOrder();
}

void printPostOrder() {
    cout << "POST-ORDEN: " << controller.showPostOrder();
}

void deleteData() {

}