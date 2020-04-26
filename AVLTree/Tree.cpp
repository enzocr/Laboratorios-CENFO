/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Tree.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * AVLTree – Tarea No.3
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Octubre del 2018
 */



#include "Tree.h"
#include "Node.h"


#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>

Tree::Tree() {
    setRoot(NULL);
}

Tree::Tree(const Tree& orig) {
}

Tree::~Tree() {
}

Node* Tree::getRoot() {
    return root;
}

void Tree::setRoot(Node* pRoot) {
    root = pRoot;
}

bool Tree::isEmpty() {
    return getRoot() == NULL;
}

bool Tree::insert(int pData) {

    if (isEmpty()) {
        Node* newNode = new Node(pData);
        setRoot(newNode);
        return true;
    } else if (searchAVLTree(pData) != NULL) {
        return false;
    } else {
        return insertRecursively(pData, getRoot());
    }
}

bool Tree::insertRecursively(int pData, Node* pRoot) {
    Node* newNode = new Node(pData);

    if (pData < pRoot->getData()) {
        if (pRoot->getLeft() == NULL) {
            pRoot->setLeft(newNode);
            pRoot = balanceTree(pRoot);
            return true;
        } else {
            insertRecursively(pData, pRoot->getLeft());
        }
    } else if (pRoot->getRight() == NULL) {
        pRoot->setRight(newNode);
        pRoot = balanceTree(pRoot);
        return true;
    } else {
        insertRecursively(pData, pRoot->getRight());
    }
}

Node* Tree::rr_rotation(Node* parent) {
    Node* temp;
    temp = parent->getRight();
    parent->setRight(temp->getLeft());
    temp->setLeft(parent);
    return temp;
}

Node* Tree::ll_rotation(Node* parent) {
    Node* temp;
    temp = parent->getLeft();
    parent->setLeft(temp->getRight());
    temp->setRight(parent);

    return temp;
}

Node* Tree::lr_rotation(Node* parent) {
    Node* temp;
    temp = parent->getLeft();
    parent->setLeft(rr_rotation(temp));
    return ll_rotation(parent);
}

Node* Tree::rl_rotation(Node* parent) {
    Node* temp;
    temp = parent->getRight();
    parent->setRight(ll_rotation(temp));
    return rr_rotation(parent);
}

Node* Tree::balanceTree(Node* pTemp) {
    int balanceFactor = getHeightDifference(pTemp);

    if (balanceFactor > 1) {
        if (getHeightDifference(pTemp->getLeft()) > 0) {
            pTemp = ll_rotation(pTemp);
        } else {
            pTemp = lr_rotation(pTemp);
        }
    } else if (balanceFactor < -1) {
        if (getHeightDifference(pTemp->getRight()) > 0) {
            pTemp = rl_rotation(pTemp);
        } else {
            pTemp = rr_rotation(pTemp);
        }
    }
    return pTemp;
}

int Tree::getHeight(Node* temp) {
    int h = 0;
    if (temp != NULL) {
        int leftHeight = getHeight(temp->getLeft());
        int rightHeight = getHeight(temp->getRight());
        int max_height = max(leftHeight, rightHeight);
        h = max_height + 1;
    }
    return h;
}

int Tree::getHeightDifference(Node* temp) {
    int leftHeight = getHeight(temp->getLeft());
    int rightHeight = getHeight(temp->getRight());
    int balanceFactor = leftHeight - rightHeight;
    return balanceFactor;
}

Node* Tree::searchAVLTree(int pNum) {

    return searchAVLTreeRecursive(getRoot(), pNum);

}

Node* Tree::searchAVLTreeRecursive(Node* pNode, int pNum) {
    if (pNode == NULL) {
        return NULL;
    } else if (pNode->getData() == pNum) {
        return pNode;
    } else if (pNum > pNode->getData()) {
        return searchAVLTreeRecursive(pNode->getRight(), pNum);
    } else {
        return searchAVLTreeRecursive(pNode->getLeft(), pNum);
    }
}

string Tree::showTreePreOrder() {
    return showTreePreOrderRecursive(getRoot());
}

string Tree::showTreePreOrderRecursive(Node* pNode) {
    stringstream concat;
    if (pNode == NULL) {
        return "";
    } else {
        concat << pNode->getData() << " "
                << showTreePreOrderRecursive(pNode->getLeft())
                << showTreePreOrderRecursive(pNode->getRight());
    }
    return concat.str();
}

string Tree::showTreeInOrder() {
    return showTreeInOrderRecursive(getRoot());
}

string Tree::showTreeInOrderRecursive(Node* pNode) {
    stringstream concat;
    if (pNode == NULL) {
        return "";
    } else {
        concat << showTreeInOrderRecursive(pNode->getLeft())
                << pNode->getData() << " "
                << showTreeInOrderRecursive(pNode->getRight());
    }
    return concat.str();
}

string Tree::showTreePostOrder() {
    return showTreePostOrderRecursive(getRoot());
}

string Tree::showTreePostOrderRecursive(Node* pNode) {
    stringstream concat;
    if (pNode == NULL) {
        return "";
    } else {
        concat << showTreePostOrderRecursive(pNode->getLeft())
                << showTreePostOrderRecursive(pNode->getRight())
                << pNode->getData() << " ";
    }
    return concat.str();
}