/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: IntNode.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@cenfotec.com,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Árbol Binario de Búsqueda– Tarea No.2
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Setiembre del 2018
 */


#include "IntNode.h"

IntNode::IntNode() {
    setInfo(0);
    setFather(NULL);
    setLeftChild(NULL);
    setRightChild(NULL);
}

IntNode::IntNode(int pNumber) {
    setInfo(pNumber);
    setFather(NULL);
    setLeftChild(NULL);
    setRightChild(NULL);
}

void IntNode::setInfo(int pNum) {
    info = pNum;
}

int IntNode::getInfo() {
    return info;
}

IntNode* IntNode::getFather() {
    return father;
}

void IntNode::setFather(IntNode* pFather) {
    father = pFather;
}

IntNode* IntNode::getLeftChild() {
    return leftChild;
}

void IntNode::setLeftChild(IntNode* pLeftChild) {
    leftChild = pLeftChild;
}

IntNode* IntNode::getRightChild() {
    return rightChild;
}

void IntNode::setRightChild(IntNode* pRightChild) {
    rightChild = pRightChild;
}

