/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Controller.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * AVLTree – Tarea No.3
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Octubre del 2018
 */



#include "Controller.h"


#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include "Tree.h"

Controller::Controller() {
    tree = new Tree();
}

Controller::Controller(const Controller& orig) {
}

Controller::~Controller() {
}

string Controller::insertInt(int pData) {

    if (tree->insert(pData)) {
        return "Elemento agregado";
    } else {
        "Elemento no agregado";
    }
}

string Controller::showPreOrder() {
    return tree->showTreePreOrder();
}

string Controller::showInOrder() {
    return tree->showTreeInOrder();
}

string Controller::showPostOrder() {
    return tree->showTreePostOrder();
}

