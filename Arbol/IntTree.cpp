/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: IntTree.cpp
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@cenfotec.com,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Árbol Binario de Búsqueda– Tarea No.2
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Setiembre del 2018
 */

#include "IntTree.h"
#include "IntNode.h"
#include <stdlib.h>
#include <iostream>
#include <sstream>

using namespace std;

IntTree::IntTree() {
    setRoot(NULL);
}

IntTree::IntTree(const IntTree& orig) {
}

IntTree::~IntTree() {
}

IntNode* IntTree::getRoot() {
    return root;
}

void IntTree::setRoot(IntNode* pRoot) {
    root = pRoot;
}

bool IntTree::isEmpty() {

    return getRoot() == NULL;
}

bool IntTree::addNode(int pNum) {
    if (isEmpty()) {
        IntNode* newNode = new IntNode(pNum);
        setRoot(newNode);
        return true;
    } else {
        if (searchForElement(pNum) == NULL) {
            return addNodeRecursively(getRoot(), pNum);
        } else {
            return false;
        }
    }

}

bool IntTree::addNodeRecursively(IntNode* pRoot, int pNum) {
    IntNode* newNode;
    if (pNum < pRoot->getInfo()) {
        if (pRoot->getLeftChild() == NULL) {
            newNode = new IntNode(pNum);
            newNode->setFather(pRoot);
            pRoot->setLeftChild(newNode);
            return true;
        } else {
            addNodeRecursively(pRoot->getLeftChild(), pNum);
        }
    } else if (pRoot->getRightChild() == NULL) {
        newNode = new IntNode(pNum);
        newNode->setFather(pRoot);
        pRoot->setRightChild(newNode);
        return true;
    } else {
        addNodeRecursively(pRoot->getRightChild(), pNum);
    }
}

bool IntTree::isTerminal(int pNumero) {

    IntNode* newRoot = searchForElement(pNumero);
    if (newRoot != NULL) {
        if (newRoot == NULL || newRoot->getLeftChild() != NULL || newRoot->getRightChild() != NULL) {
            return false;
        } else {
            return true;
        }
    } else {
        return false;
    }

}

IntNode* IntTree::searchForElement(int pNum) {

    return searchForElementRecursively(getRoot(), pNum);
}

IntNode* IntTree::searchForElementRecursively(IntNode* pRoot, int pNum) {
    if (pRoot != NULL) {
        if (pRoot->getInfo() == pNum) {
            return pRoot;
        } else {
            if (pNum < pRoot->getInfo()) {
                searchForElementRecursively(pRoot->getLeftChild(), pNum);
            } else {
                searchForElementRecursively(pRoot->getRightChild(), pNum);
            }
        }
    } else {
        return pRoot;
    }
}

int IntTree::getWeight() {
    return getWeightRecursively(getRoot());
}

int IntTree::getWeightRecursively(IntNode* pNode) {

    if (pNode == NULL) {
        return 0;
    } else if (pNode->getLeftChild() == NULL && pNode->getRightChild() == NULL) {
        return 1;
    } else {
        return 1 + getWeightRecursively(pNode->getLeftChild()) + getWeightRecursively(pNode->getRightChild());
    }
}

int IntTree::getMinimunTree() {
    return getMinimunTreeRecursively(getRoot());
}

int IntTree::getMinimunTreeRecursively(IntNode* pRoot) {
    if (pRoot == NULL) {
        return NULL;
    } else {
        if (pRoot->getLeftChild() != NULL) {
            return getMinimunTreeRecursively(pRoot->getLeftChild());
        } else {
            return pRoot->getInfo();
        }
    }
}

int IntTree::getMaximunTree() {
    return getMaximunTreeRecursively(getRoot());
}

int IntTree::getMaximunTreeRecursively(IntNode* pRoot) {
    if (pRoot == NULL) {
        return NULL;
    } else {
        if (pRoot->getLeftChild() != NULL) {
            return getMaximunTreeRecursively(pRoot->getRightChild());
        } else {
            return pRoot->getInfo();
        }
    }

}

string IntTree::showPreOrder() {
    return showPreOrderRecursively(getRoot());
}

string IntTree::showPreOrderRecursively(IntNode* pRoot) {
    ostringstream s;
    if (pRoot == NULL) {
        return "";
    } else {
        s << pRoot->getInfo() << " -> ";
        s << showPostOrderRecursively(pRoot->getLeftChild());
        s << showPostOrderRecursively(pRoot->getRightChild());
    }
    return s.str();
}

string IntTree::showInOrder() {
    return showInOrderRecursively(getRoot());
}

string IntTree::showInOrderRecursively(IntNode* pRoot) {
    ostringstream s;
    if (pRoot == NULL) {
        return "";
    } else {
        s << showPostOrderRecursively(pRoot->getLeftChild());
        s << pRoot->getInfo() << " -> ";
        s << showPostOrderRecursively(pRoot->getRightChild());
    }
    return s.str();
}

string IntTree::showPostOrder() {
    return showPostOrderRecursively(getRoot());
}

string IntTree::showPostOrderRecursively(IntNode* pRoot) {
    ostringstream s;
    if (pRoot == NULL) {
        return "";
    } else {
        s << showPostOrderRecursively(pRoot->getLeftChild());
        s << showPostOrderRecursively(pRoot->getRightChild());
        s << pRoot->getInfo() << " -> ";
    }
    return s.str();
}

bool IntTree::removeNode(int n) {
    removeNodePrivate(getRoot(), n);
    return searchForElement(n);
}

void IntTree::removeNodePrivate(IntNode* pRoot, int n) {
    if (pRoot != NULL) {
        if (pRoot->getInfo() == n) {
            removeRootMatch();
        } else {
            if (n < pRoot->getInfo() && pRoot->getLeftChild() != NULL) {
                pRoot->getLeftChild()->getInfo() == n ?
                        removeMatch(pRoot, pRoot->getLeftChild(), true) :
                        removeNodePrivate(pRoot->getLeftChild(), n);
            } else if (n > pRoot->getInfo() && pRoot->getRightChild() != NULL) {
                pRoot->getRightChild()->getInfo() == n ?
                        removeMatch(pRoot, pRoot->getRightChild(), false) :
                        removeNodePrivate(pRoot->getRightChild(), n);
            } else {

            }
        }
    } else {

    }
}

void IntTree::removeMatch(IntNode* pRoot, IntNode* pMatch, bool left) {
    if (pRoot != NULL) {
        IntNode* delPtr;
        int matchKey = pMatch->getInfo();
        int smallestRightSubtree;

        if (pMatch->getLeftChild() == NULL && pMatch->getRightChild() == NULL) {
            delPtr = pMatch;
            left == true;
            left == true ? pRoot->setLeftChild(NULL) : pRoot->setRightChild(NULL);
            delete delPtr;
        } else if (pMatch->getLeftChild() == NULL && pMatch->getRightChild() != NULL) {
            left == true ? pRoot -> setLeftChild(pMatch->getRightChild()) : pRoot->setRightChild(pMatch->getRightChild());
            pMatch->setRightChild(NULL);
            delPtr = pMatch;
            delete delPtr;
        } else if (pMatch->getLeftChild() != NULL && pMatch->getRightChild() == NULL) {
            left == true ? pRoot->setLeftChild(pMatch->getLeftChild()) : pRoot->setRightChild(pMatch->getLeftChild());
            pMatch->setLeftChild(NULL);
            delPtr = pMatch;
            delete delPtr;
        } else {
            smallestRightSubtree = getMinimunTreeRecursively(pRoot->getRightChild());
            removeNodePrivate(pMatch, smallestRightSubtree);
            pMatch->setInfo(smallestRightSubtree);
        }
    } else {

    }
}

void IntTree::removeRootMatch() {
    if (getRoot() != NULL) {
        IntNode* delPtr = getRoot();
        int rootNumber = delPtr->getInfo();
        int smallestRightSubTree;

        if (getRoot()->getLeftChild() == NULL && getRoot()->getRightChild() == NULL) {
            setRoot(NULL);

        } else if (getRoot()->getLeftChild() == NULL && getRoot()->getRightChild() != NULL) {
            setRoot(getRoot()->getRightChild());
            delPtr->setRightChild(NULL);
            delete delPtr;

        } else if (getRoot()->getLeftChild() != NULL && getRoot()->getRightChild() == NULL) {
            setRoot(getRoot()->getLeftChild());
            delPtr->setLeftChild(NULL);
            delete delPtr;
        } else {
            smallestRightSubTree = getMaximunTreeRecursively(getRoot()->getRightChild());
            removeNodePrivate(getRoot(), smallestRightSubTree);
            getRoot()->setInfo(smallestRightSubTree);
        }
    } else {
    }

}