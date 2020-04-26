
#include <iostream>
#include <string>
#include "Libro.h"
#include "Nodo.h"
#include <stdlib.h>
#include "Libreria.h"

using namespace std;

void imprimirMenu();
void seleccionMenu(int);
Libro solicitarDatosLibro();
Libreria libreria;
void seleccionSubMenu(int);

int main() {
    std::cout << "Tarea 1, Estructuras de datos 2.\n\n\n";
    std::cout << "Bienvenido a la LibreriaApp\n\n";


    int opc = 0;
    string opcString;

    do {

        imprimirMenu();
        std::getline(std::cin, opcString);

        try {
            opc = std::stoi(opcString);
            seleccionMenu(opc);
        } catch (exception) {
            std::cout << "Error, las opciones son numeros solamente del 1 al 7.";
        }


    } while (opc != 7);
}

void imprimirMenu() {

    std::cout << "\nDigite 1 para agregar un libro a la pila\n";
    std::cout << "Digite 2 para agregar un libro a la cola\n";
    std::cout << "Digite 3 para agregar un libro a la lista\n";
    std::cout << "Digite 4 para mover un libro de una pila\n";
    std::cout << "Digite 5 para mover un libro de una cola\n";
    std::cout << "Digite 6 para mover un libro de una lista\n";
    std::cout << "Digite 7 para salir\n\n";


    std::cout << "Digite su opcion y luego enter\n\n";
}

void seleccionMenu(int pOpc) {


    Libro libroTemp;

    switch (pOpc) {

        case 1:
            libroTemp = solicitarDatosLibro();
            libreria.agregarPila(libroTemp);
            break;
        case 2:
            solicitarDatosLibro();
            break;
        case 3:
            solicitarDatosLibro();
            break;
        case 4:
            seleccionSubMenu(pOpc);
            break;
        case 5:
            Nodo* aux;
            aux = new Nodo();
            aux = libreria.getPila().RemoverNodo();
            if (libreria.getPila().esVacia() == true) {
                std::cout << "\n\nLa Pila NO Tiene datos";
            } else {

                std::cout << "\n\nNodo/libro POPPED: " << aux->getLibro().toString() << "\n\n";
            }

            break;
        case 6:
            /*seleccionSubMenu(pOpc);*/
            libreria.getPila().recorrerPila();
            break;
        case 7:
            std::cout << "\n\nGracias por utilizar LibreriaApp.\n";
            break;

    }

}

void seleccionSubMenu(int pOpc) {

    int opc = 0;
    string opcString;

    switch (pOpc) {

        case 4:
            std::cout << "\n\nDesea mover desde la pila a la COLA o a la LISTA?\n\nDigite:\n1: Cola\n2: Lista.\n\n";
            std::getline(std::cin, opcString);
            try {
                opc = std::stoi(opcString);
            } catch (exception) {
                std::cout << "\n\nERROR en la seleccion\n\n";
            }
            if (opc == 1) {

            } else if (opc == 2) {

            }
            break;
        case 5:
            std::cout << "\n\nDesea mover desde la cola a la PILA o a la LISTA?\n\nDigite:\n1: Pila\n2: Lista.\n\n";
            try {
                opc = std::stoi(opcString);
            } catch (exception) {
                std::cout << "\n\nERROR en la seleccion\n\n";
            }
            if (opc == 1) {

            } else if (opc == 2) {

            }
            break;
        case 6:
            std::cout << "\n\nDesea mover desde la lista a la COLA o a la PILA?\n\nDigite:\n1: Cola\n2: Pila.\n\n";
            try {
                opc = std::stoi(opcString);
            } catch (exception) {
                std::cout << "\n\nERROR en la seleccion\n\n";
            }
            if (opc == 1) {

            } else if (opc == 2) {

            }
            break;
        case 0:
            break;
        default:
            break;
    }

}

Libro solicitarDatosLibro() {

    string name;
    string category;
    string consecutive;
    Libro libro;

    std::cout << "Digite el nombre del libro\n\n";
    std::getline(std::cin, name);
    std::cout << "Digite la categoria del libro\n\n";
    std::getline(std::cin, category);
    std::cout << "Digite el consecutivo del libro(si no hay, un 0)\n\n";
    std::getline(std::cin, consecutive);

    libro.setNombre(name);
    libro.setCategoria(category);
    libro.setConsecutivo(consecutive);

    return libro;

}



//test

//int variable;
//int * apuntador = &variable;
//*apuntador = 265;