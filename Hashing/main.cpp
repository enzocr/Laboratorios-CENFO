/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: enzoq
 *
 * Created on October 8, 2018, 8:15 PM
 */

#include <cstdlib>
#include <ratio>

#include "Controller.h"

using namespace std;
void showMenu();
int readOption();
void executeAction(int);
void insert();
void searchByID();
void searchByLastName();
Controller controller;

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do {
        showMenu();
        opc = readOption();
        executeAction(opc);

    } while (opc != 4);

    return 0;
}

void showMenu() {
    cout << "\n";
    cout << "1. ---|         REGISTRAR PERSONA          |--- \n";
    cout << "2. ---|     BUSCAR PERSONA POR CEDULA      |--- \n";
    cout << "3. ---|     BUSCAR PERSONA POR APELLIDO    |--- \n";
    cout << "4. ---|              SALIR                 |--- \n";
}

int readOption() {

    int option;


    cout << "Seleccione accion a realizar: ";
    cin>>option;


    return option;
}

void executeAction(int pOption) {

    switch (pOption) {

        case 1:
            insert();
            break;
        case 2:
            searchByID();
            break;
        case 3:
            searchByLastName();
            break;
        case 4:
            "Gracias por usar la aplicación";
            break;
        default:
            cout << "OPCION INVÁLIDA";
    }
}

void insert() {
    string name, lastName;
    int id;
    cout << "Nombre: ";
    cin>>name;
    cout << "Apellido: ";
    cin>>lastName;
    cout << "Cedula: ";
    cin>>id;
    cout << controller.add(name, lastName, id);
}

void searchByID() {
    int id;
    cout << "Cédula a buscar: ";
    cin>>id;
    cout << controller.searchByID(id);
}

void searchByLastName() {
//    string lastName;
//    cout << "Apellido a buscar: ";
//    cin>>lastName;
//    cout << controller.searchByLastName(getline(cin, lastName));
}