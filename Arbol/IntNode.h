/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: IntNode.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@cenfotec.com,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * RepasoEstructuras2 – Tarea No.1
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Setiembre del 2018
 */

#ifndef INTNODE_H
#define INTNODE_H

#include <string>

class IntNode {
private:
    int info;
    IntNode* father;
    IntNode* leftChild;
    IntNode* rightChild;
public:
    IntNode();
    IntNode(int);
    void setInfo(int);
    int getInfo();
    IntNode* getFather();
    void setFather(IntNode*);
    IntNode* getLeftChild();
    void setLeftChild(IntNode*);
    IntNode* getRightChild();
    void setRightChild(IntNode*);

};

#endif /* INTNODE_H */

