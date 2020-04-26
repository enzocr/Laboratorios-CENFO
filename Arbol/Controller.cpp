/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Controller.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@cenfotec.com,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Árbol Binario de Búsqueda– Tarea No.2
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Setiembre del 2018
 */

#include "Controller.h"
#include "IntTree.h"
#include "IntNode.h"

#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

Controller::Controller() {
    tree = new IntTree();
}

IntTree* Controller::getTree() {
    return tree;
}

string Controller::addToNode(int pNumero) {
    ostringstream s;
    if (getTree()->addNode(pNumero)) {
        s << "Numero: " << pNumero << " agregado al árbol" << "\n";
    } else {
        s << "Numero: " << pNumero << " NO ha sido agregado al árbol" << "\n";
    }
    return s.str();
}

string Controller::isTerminal(int pNumero) {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío\n";
    } else {
        if (!getTree()->searchForElement(pNumero)) {
            s << "Número no se encuentra en el árbol\n";
        } else {
            if (getTree()->isTerminal(pNumero)) {
                s << "Numero: " << pNumero << " es terminal\n";
            } else {
                s << "Numero: " << pNumero << " NO es terminal\n";
            }
        }
    }
    return s.str();
}

string Controller::searchInTree(int pNumero) {
    ostringstream s;
    IntNode* node = getTree()->searchForElement(pNumero);
    if (node != NULL) {
        s << "Numero " << pNumero << " ha sido encontrado en el árbol\n";
    } else {
        s << "Numero " << pNumero << " NO ha sido encontrado en el árbol\n";
    }
    return s.str();
}

string Controller::getWeightOfTree() {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío\n";
    } else {
        s << "Peso: " << getTree()->getWeight() << "\n";
    }
    return s.str();
}

string Controller::getMinOfTree() {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío" << "\n";
    } else {
        s << "Menor valor: " << getTree()->getMinimunTree() << "\n";
    }
    return s.str();
}

string Controller::getMaxOfTree() {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío" << "\n";
    } else {
        s << "Mayor valor: " << getTree()->getMaximunTree() << "\n";
    }
    return s.str();
}

string Controller::removeDataFromTree(int pNumero) {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío" << "\n";
    } else {
        if (getTree()->searchForElement(pNumero) != NULL) {
            if (!getTree()->removeNode(pNumero)) {
                s << pNumero << " eliminado del árbol\n";
            } else {
                s << pNumero << " ERROR eliminando el árbol\n";
            }
        } else {
            s << "Número no se encuentra en el árbol\n";
        }

    }
    return s.str();
}

string Controller::preOrderTree() {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío" << "\n";
    } else {

        s << "PREORDEN: " << getTree()->showPreOrder() << "\n";
    }
    return s.str();
}

string Controller::inOrderTree() {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío" << "\n";
    } else {
        s << "INORDEN: " << getTree()->showInOrder() << "\n";
    }
    return s.str();
}

string Controller::postOrderTree() {
    ostringstream s;
    if (getTree()->isEmpty()) {
        s << "Árbol vacío" << "\n";
    } else {
        s << "POSTORDER: " << getTree()->showPostOrder() << "\n";
    }
    return s.str();
}