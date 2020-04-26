/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Node.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * AVLTree – Tarea No.3
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Octubre del 2018
 */


#include "Node.h"


#include <stdlib.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>

Node::Node() {
    setData(0);
    setLeft(NULL);
    setRight(NULL);
    setHeight(0);
}

Node::Node(int pData) {
    setData(pData);
    setLeft(NULL);
    setRight(NULL);
    setHeight(0);

}

Node::Node(const Node& orig) {
}

Node::~Node() {
}

int Node::getData() {
    return data;
}

void Node::setData(int pData) {
    data = pData;
}

Node* Node::getLeft() {
    return left;
}

void Node::setLeft(Node* pLeft) {
    left = pLeft;
}

Node* Node::getRight() {
    return right;
}

void Node::setRight(Node* pRight) {
    right = pRight;
}

int Node::getHeight() {
    return height;
}

void Node::setHeight(int pHeight) {
    height = pHeight;
}

string Node::toString() {
    stringstream string;
    string << "                            " << getData() << "                \n"
            <<"                               |           | "
            "      " << getLeft()->getData() << "       " << getRight()->getData()<<"\n";

}