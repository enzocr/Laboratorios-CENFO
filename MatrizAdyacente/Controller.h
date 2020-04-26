/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Controller.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Hashing – Tarea No.7
 * Fecha de creación: Octubre del 2018
 * Fecha de último cambio: Noviembre del 2018
 */


#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Grafo.h"
#include <stdlib.h>
#include <algorithm>
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
    Grafo* getGrafo();
    bool agregarEnArreglo(int, string);
    string agregarEnMatriz(int, int, int, int);
    int buscarCiudad(string);
    string buscarEtiqueta(int, int);
    string mostrarCiudades();
    string mostrarEtiquetas();
private:
    Grafo* grafo;

};

#endif /* CONTROLLER_H */

