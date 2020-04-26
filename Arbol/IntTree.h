/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: IntTree.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@cenfotec.com,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Árbol Binario de Búsqueda– Tarea No.2
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Setiembre del 2018
 */

#ifndef INTTREE_H
#define INTTREE_H
#include "IntNode.h"
#include "IntTree.h"
using namespace std;

class IntTree {
public:
    IntTree();
    IntTree(const IntTree& orig);
    virtual ~IntTree();

    IntNode* getRoot();
    void setRoot(IntNode*);

    bool addNode(int);
    bool addNodeRecursively(IntNode*, int);

    IntNode* searchForElement(int);
    IntNode* searchForElementRecursively(IntNode*, int);

    bool removeNode(int);
    void removeNodePrivate(IntNode*, int);
    void removeMatch(IntNode*, IntNode*, bool);
    void removeRootMatch();
    
    int getMinimunTree();
    int getMinimunTreeRecursively(IntNode*);

    int getMaximunTree();
    int getMaximunTreeRecursively(IntNode*);

    int getWeight();
    int getWeightRecursively(IntNode*);

    bool isTerminal(int);
    bool isEmpty();


    string showPreOrder();
    string showPreOrderRecursively(IntNode*);
    string showInOrder();
    string showInOrderRecursively(IntNode*);
    string showPostOrder();
    string showPostOrderRecursively(IntNode*);


private:
    IntNode* root;

};

#endif /* INTTREE_H */

