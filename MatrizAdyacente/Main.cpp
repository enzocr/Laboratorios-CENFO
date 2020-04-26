/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Main.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Hashing – Tarea No.7
 * Fecha de creación: Octubre del 2018
 * Fecha de último cambio: Noviembre del 2018
 */



#include <cstdlib>

#include "Controller.h"

Controller controller;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);
void registrarCiudad();
void buscarCiudad();
void mostrarCiudad();
void insertarEtiqueta();
void mostrarEtiquetas();

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
    cout << "1. ---|         REGISTRAR CIUDAD        |--- \n";
    cout << "2. ---|          BUSCAR CIUDAD          |--- \n";
    cout << "3. ---|         MOSTRAR CIUDAD          |--- \n";
    cout << "4. ---|       INSERTAR  ETIQUETA        |--- \n";
    cout << "5. ---|        MOSTRAR ETIQUETAS        |--- \n";
    cout << "6. ---|             SALIR               |--- \n";
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
            registrarCiudad();
            break;
        case 2:
            buscarCiudad();
            break;
        case 3:
            mostrarCiudad();
            break;
        case 4:
            insertarEtiqueta();
            break;
        case 5:
            mostrarEtiquetas();
            break;
        case 6:
            cout << "Cerrando aplicación";
            break;
        default:
            cout << "OPCION INVALIDA";

    }
}

void registrarCiudad() {
    string ciudad;
   
    for (int i = 0; i < 8; i++) {
         bool bandera = true;
        do {
            cout << "Digitar ciudad #" << i << ": ";
            cin>>ciudad;
            if (controller.agregarEnArreglo(i, ciudad)) {
                cout << "Ciudad agregada\n";
                bandera = false;
            } else {
                cout << "Ciudad ya existe con ese nombre, agregar otro\n";
            }
        } while (bandera);

    }
}

void buscarCiudad() {
    string ciudad, ciudad2;
    cout << "Digitar nombre de ciudad A: ";
    cin>>ciudad;
    cout << "Digitar nombre de ciudad B: ";
    cin>>ciudad2;
    cout << controller.buscarEtiqueta(controller.buscarCiudad(ciudad), controller.buscarCiudad(ciudad2));
}

void mostrarCiudad() {
    cout << controller.mostrarCiudades();
}

void insertarEtiqueta() {
    string ciudad, ciudad2;
    int distancia, tiempo;
    cout << "Digitar nombre de ciudad A: ";
    cin>>ciudad;
    cout << "Digitar nombre de ciudad B: ";
    cin>>ciudad2;
    cout << "Distancia ciudad A -> B: ";
    cin>>distancia;
    cout << "Tiempo ciudad A -> B: ";
    cin>>tiempo;
    cout << controller.agregarEnMatriz(controller.buscarCiudad(ciudad), controller.buscarCiudad(ciudad2), distancia, tiempo);

}

void mostrarEtiquetas() {
    cout << controller.mostrarEtiquetas();
}