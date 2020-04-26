/*
 Cenfotec – Costa Rica
 Estructura de Datos 2 – 2018-03
 Nombre del archivo: main.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr 
 * Tarea #1
 Fecha de creación: 10/09/2018
 Fecha de último cambio: 11/09/2018
 */


#include <iostream>
#include <cstdlib>
#include "Gestor.h"

using namespace std;
Gestor gestor;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);

void registrarJugador();
void buscarJugadorPorCedula();
void mostrarJugadores();
void eliminarJugador();
void pasarJugador();

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
    cout << "1. ---|         REGISTRAR JUGADOR          |--- \n";
    cout << "2. ---|     BUSCAR JUGADOR POR CÉDULA      |--- \n";
    cout << "3. ---|        MOSTRAR JUGADOR(ES)         |--- \n";
    cout << "4. ---|         ELIMINAR JUGADOR           |--- \n";
    cout << "5. ---|    PASAR JUGADOR DE ESTRUCTURA     |--- \n";
    cout << "6. ---|              SALIR                 |--- \n";
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
            registrarJugador();
            break;
        case 2:
            buscarJugadorPorCedula();
            break;
        case 3:
            mostrarJugadores();
            break;
        case 4:
            eliminarJugador();
            break;
        case 5:
            pasarJugador();
            break;
        case 6:
            cout << "Saliendo...";
            break;
        default:
            cout << "OPCION INVALIDA";

    }
}

void registrarJugador() {
    string nombre;
    int cedula;
    cout << "Cedula: ";
    cin>>cedula;
    cout << "Nombre: ";
    cin>>nombre;

    int decision;
    cout << "DÓNDE DESEA REGISTRAR AL JUGADOR? LISTA(1) || COLA(2) || PILA(3): ";
    cin>>decision;
    if (decision < 1 || decision > 3) {
        cout << "OPCIÓN INVÁLIDA";
    } else {
        cout << gestor.agregarJugador(decision, cedula, nombre);
    }


}

void buscarJugadorPorCedula() {
    cout << "SOLAMENTE PUEDE BUSCAR JUGADOR EN LA ESTRUCTURA LISTA \n";
    int cedula;
    cout << "Cedula de persona a buscar: ";
    cin>>cedula;
    cout << gestor.buscarJugador(cedula);
}

void mostrarJugadores() {
    int decision;
    cout << "CUÁL ESTRUCTURA DESEA VER? LISTA(1) || COLA(2) || PILA(3): ";
    cin>>decision;
    if (decision < 1 || decision > 3) {
        cout << "OPCIÓN INVÁLIDA";
    } else {
        cout << gestor.listarJugadores(decision);
    }
}

void eliminarJugador() {


    int decision;
    cout << "DÓNDE DESEA ELIMINAR AL JUGADOR? LISTA(1) || COLA(2) || PILA(3): ";
    cin>>decision;
    if (decision < 1 || decision > 3) {
        cout << "OPCIÓN INVÁLIDA";
    } else {
        if (decision == 1) {
            int cedula;
            cout << "Cedula de persona a eliminar: ";
            cin>>cedula;
            if (gestor.eliminarJugadorLista(cedula)) {
                cout << "Jugador eliminado";
            } else {
                cout << "Jugador NO eliminado";
            }
        } else {
            cout << gestor.eliminarJugador(decision);
        }
    }
}

void pasarJugador() {
    int decision, cedula;
    cout << "\n";
    cout << "1. ---|         LISTA -> COLA          |--- \n";
    cout << "2. ---|         LISTA -> PILA          |--- \n";
    cout << "3. ---|         COLA  -> PILA          |--- \n";
    cout << "4. ---|         COLA  -> LISTA         |--- \n";
    cout << "5. ---|         PILA  -> LISTA         |--- \n";
    cout << "6. ---|         PILA  -> COLA          |--- \n";
    cin >> decision;
    if (decision < 1 || decision > 6) {
        cout << "OPCIÓN INVÁLIDA";
    } else {
        if (decision == 1) {
            cout << "Cedula de jugador a pasar a cola: ";
            cin>>cedula;
            cout << gestor.pasarJugadorDeLista(decision, cedula);

        } else if (decision == 2) {
            cout << "Cedula de jugador a pasar a pila: ";
            cin>>cedula;
            cout << gestor.pasarJugadorDeLista(decision, cedula);

        } else if (decision == 3) {
            cout << gestor.pasarJugador(decision);

        } else if (decision == 4) {
            cout << gestor.pasarJugador(decision);

        } else if (decision == 5) {
            cout << gestor.pasarJugador(decision);

        } else if (decision == 6) {
            cout << gestor.pasarJugador(decision);
        }
    }
}