/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: enzoq
 *
 * Created on August 3, 2018, 9:06 AM
 */

#include <cstdlib>
#include <iostream>
#include "Mazo.h"
#include "ListaJugadores.h"
#include "Jugador.h"
#include "Records.h"
#include "Cola.h"

using namespace std;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);
void jugar();
void verReglasJuego();
void creditos();
void reiniciarJuego();
Jugador crearJugador(int);
Carta repartirCarta();
void repartimientoCartas(int, Jugador*, Jugador*);
void ingresoJugadoresEnLaLista(int, Jugador*);
void mostrarCartasJugadoresYdealer(int, int*, Jugador*);
void mostrarGanadores(int, int*, Jugador*);
void prueba(int, int*);
Mazo mazo;
Records recordsJugadores;
ListaJugadores listaJugadores;

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
    cout << "1. ---|         JUGAR BLACKJACK         |--- \n";
    cout << "2. ---|       VER REGLAS DEL JUEGO      |--- \n";
    cout << "3. ---|             CREDITOS            |--- \n";
    cout << "4. ---|              SALIR              |--- \n";
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
            jugar();
            break;

        case 2:
            verReglasJuego();
            break;

        case 3:
            creditos();
            break;


        case 4:
            cout << "GRACIAS POR JUGAR CON NOSOTROS";
            break;

        default:
            cout << "OPCION INVALIDA";

    }
}

void jugar() {

    Jugador dealer(123456789, "Dealer", 999999999);
    Jugador* casaDealer = &dealer;
    int cantJugadores;
    cout << "Cantidad de jugadores: ";
    cin>>cantJugadores;
    if (cantJugadores < 2 || cantJugadores > 6) {
        cout << "La cantidad de jugadores tiene que ser entre 2 y 6\n";
    } else {
        int arregloCedulas[cantJugadores];
        Jugador arregloJugadores[cantJugadores];

        for (int i = 0; i < cantJugadores; i++) {//se crean los jugadores
            Jugador jugador = crearJugador(i + 1);
            arregloCedulas[i] = jugador.getCedula();
            arregloJugadores[i] = jugador;
        }


        repartimientoCartas(cantJugadores, arregloJugadores, casaDealer); //se reparten las cartas

        ingresoJugadoresEnLaLista(cantJugadores, arregloJugadores); //se ingresan los jugadores a la lista

        mostrarCartasJugadoresYdealer(cantJugadores, arregloCedulas, casaDealer); //se muestran las cartas de cada jugador y el dealer

        mostrarGanadores(cantJugadores, arregloCedulas, casaDealer); //muestran ganadores

        prueba(cantJugadores, arregloCedulas);

        reiniciarJuego(); //se inicializa/reinicia el mazo
    }


}

Jugador crearJugador(int pPosicion) {
    string nombre;
    int apuesta, cedula;

    cout << "Cedula jugador #" << pPosicion << ": ";
    cin>>cedula;
    if (listaJugadores.buscarPorCedula(cedula) == NULL) {
        cout << "Proceda a registrarse...\n";
        cout << "Nombre jugador #" << pPosicion << ": ";
        cin>>nombre;
        cout << "Apuesta jugador #" << pPosicion << ": ";
        cin>>apuesta;
        Jugador jugador(cedula, nombre, apuesta);
        return jugador;

    } else {
        cout << "Ya se encuentra registrado en el sistema\n";
        cout << "Tiene " << listaJugadores.buscarPorCedula(cedula)->getJugador().getApuesta() << " colones";
        return listaJugadores.buscarPorCedula(cedula)->getJugador();
    }


}

void repartimientoCartas(int pCantJugadores, Jugador* pArregloJugadores, Jugador* pCasaDealer) {
    cout << "\n";
    for (int j = 0; j < 2; j++) {

        for (int i = 0; i < pCantJugadores; i++) {//reparte a jugadores
            pArregloJugadores[i].setCarta(repartirCarta());
            cout << "Carta repartida a JUGADOR #" << i + 1 << ": " << pArregloJugadores[i].getCartas()[0].toString() << "\n";
        }
        pCasaDealer->setCarta(repartirCarta()); //reparte a dealer
        if (j == 0) {
            cout << "Carta repartida a DEALER:     " << pCasaDealer->getCartas()[0].toString() << "\n";
        } else {
            cout << "Carta repartida a DEALER:       X \n";
        }
    }
}

Carta repartirCarta() {
    return mazo.desapilar();
}

void ingresoJugadoresEnLaLista(int pCantJugadores, Jugador* pArregloJugadores) {
    for (int i = 0; i < pCantJugadores; i++) {
        listaJugadores.insertarInicio(pArregloJugadores[i]);
    }
}

void mostrarCartasJugadoresYdealer(int pCantJugadores, int* pArregloCedulas, Jugador* pCasaDealer) {
    cout << "\n";
    for (int j = 0; j < pCantJugadores; j++) {//muestra cartas

        cout << "Cartas repartidas a JUGADOR #" << j + 1 << ": " << listaJugadores.buscarPorCedula(pArregloCedulas[j])->getJugador().toString() << "\n";
    }
    cout << "Cartas repartidas a DEALER:     " << pCasaDealer->toString();
}

void mostrarGanadores(int pCantJugadores, int* pArregloCedulas, Jugador * pCasaDealer) {
    for (int i = 0; i < pCantJugadores; i++) {
        Jugador jugador = listaJugadores.buscarPorCedula(pArregloCedulas[i])->getJugador();
        jugador.setBeatTheHouse(false);

        if (jugador.getPuntuacion() > pCasaDealer->getPuntuacion()) {
            jugador.setBeatTheHouse(true);
            cout << "\n";
            cout << "JUGADOR #" << i + 1 << ": " << "Le ha ganado a la casa " << jugador.getApuesta() << " colones\n";
            jugador.setApuesta(jugador.getApuesta()*2);

        } else if (jugador.getPuntuacion() == pCasaDealer->getPuntuacion()) {
            cout << "\n";
            cout << "JUGADOR #" << i + 1 << ": " << "Ha empatado con la casa" << "\n";

        } else {
            cout << "\n";
            jugador.setApuesta(0);
            cout << "JUGADOR #" << i + 1 << ": " << "Ha perdido contra la casa" << "\n";
        }

        listaJugadores.eliminarJugador(jugador.getCedula());
        listaJugadores.insertarOrdenado(jugador);
    }


}

void prueba(int pCantJugadores, int* pArregloCedulas) {
    Cola c;
    for (int i = 0; i < pCantJugadores; i++) {
        c.addPlayer(listaJugadores.buscarPorCedula(pArregloCedulas[i])->getJugador());
    }
    cout<<c.sacar()->getJugador().toString();

}

void reiniciarJuego() {
    mazo.inicializar();
}

void verReglasJuego() {
    cout << "Solamente se repartiran dos cartas a cada jugador.";
    cout << "Se juega contra la casa y contra los jugadores de la mesa.";
    cout << "En caso de ganarle a la casa, se le da la misma cantidad apostada";
    cout << "Si se le gana a la mesa y se tuvo la apuesta mas grande entre los jugadores, se ingresa en la lista de records.";
}

void creditos() {
    cout << "Enzo Quartino Zamora || Cedula 9-0108-0939";
    cout << "Alvaro Arce";
}

