/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Controller.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * AVLTree – Tarea No.3
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Octubre del 2018
 */

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Tree.h"

#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
class Controller {
public:
    Controller();
    Controller(const Controller& orig);
    virtual ~Controller();

    string insertInt(int);
    string showPreOrder();
    string showInOrder();
    string showPostOrder();
private:
    Tree* tree;
    Tree getTree();
    void setTree(Tree);
};

#endif /* CONTROLLER_H */

