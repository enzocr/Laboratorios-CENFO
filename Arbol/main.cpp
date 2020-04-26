/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: main.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@cenfotec.com,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Árbol Binario de Búsqueda– Tarea No.2
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Setiembre del 2018
 */

#include <cstdlib>
#include <iostream>
#include "Controller.h"

using namespace std;
Controller controller;

/*
 * 
 */
int main(int argc, char** argv) {

    int num1, num2, opcion, terminal, eliminar;
    int borrar;
    do {

        cout << "Numero: ";
        cin>>num1;
        cout << controller.addToNode(num1);
        cout << "\nAgregar otro? SI(1) || NO(2): ";
        cin>>opcion;

    } while (opcion != 2);
    cout << controller.preOrderTree();
    cout << controller.inOrderTree();
    cout << controller.postOrderTree();

    return 0;
}

