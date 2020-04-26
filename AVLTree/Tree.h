/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Tree.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * AVLTree – Tarea No.3
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Octubre del 2018
 */

#ifndef TREE_H
#define TREE_H
#include <algorithm>
#include "Node.h"
#include <sstream>
#include <string>

using namespace std;

class Tree {
public:
    Tree();
    Tree(const Tree& orig);
    virtual ~Tree();
    Node* getRoot();
    void setRoot(Node*);
    bool insert(int);
    Node* searchAVLTree(int);
    string showTreePreOrder();
    string showTreeInOrder();
    string showTreePostOrder();


private:
    Node* root;

    bool insertRecursively(int, Node*);
    int getHeight(Node*);
    int getHeightDifference(Node*);
    Node* balanceTree(Node*);
    bool isEmpty();

    Node* searchAVLTreeRecursive(Node*, int);
    string showTreePreOrderRecursive(Node*);
    string showTreeInOrderRecursive(Node*);
    string showTreePostOrderRecursive(Node*);

    Node* rr_rotation(Node*);
    Node* ll_rotation(Node*);
    Node* lr_rotation(Node*);
    Node* rl_rotation(Node*);


};

#endif /* TREE_H */

