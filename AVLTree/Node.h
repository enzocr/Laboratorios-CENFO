/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Node.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * AVLTree – Tarea No.3
 * Fecha de creación: Setiembre del 2018
 * Fecha de último cambio: Octubre del 2018
 */

#ifndef NODE_H
#define NODE_H
#include <string>
using namespace std;
class Node {
public:
    Node();
    Node(int);
    Node(const Node& orig);
    virtual ~Node();

    int getData();
    void setData(int);
    Node* getLeft();
    void setLeft(Node*);
    Node* getRight();
    void setRight(Node*);
    int getHeight();
    void setHeight(int);
    string toString();
private:
    int data;
    Node* left;
    Node* right;
    int height;

};

#endif /* NODE_H */

