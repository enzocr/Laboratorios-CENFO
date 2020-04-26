/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Controller.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@cenfotec.com,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Árbol Binario de Búsqueda– Tarea No.2
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Setiembre del 2018
 */


#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "IntTree.h"
#include "IntNode.h"

using namespace std;

class Controller {
public:
    Controller();
    IntTree* getTree();
    string addToNode(int);
    string isTerminal(int);
    string getWeightOfTree();
    string searchInTree(int);
    string getMinOfTree();
    string getMaxOfTree();
    string removeDataFromTree(int);
    string preOrderTree();
    string inOrderTree();
    string postOrderTree();
private:
    IntTree* tree;
};

#endif /* CONTROLLER_H */

