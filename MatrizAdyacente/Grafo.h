/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Grafo.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Hashing – Tarea No.7
 * Fecha de creación: Octubre del 2018
 * Fecha de último cambio: Noviembre del 2018
 */

#ifndef GRAFO_H
#define GRAFO_H
#include "Etiqueta.h"
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;
class Grafo {
public:
    Grafo();
    Grafo(const Grafo& orig);
    virtual ~Grafo();
    Etiqueta* getMatriz();
    bool insertarEtiqueta(int,int, Etiqueta);
    bool insertarArreglo(int, string);
    int buscarCiudad(string);
    string buscarDatosEtiqueta(int, int);
    string mostrarArreglo();
    string mostrarEtiquetas();
    
private:
    Etiqueta matriz[8][8];
    string referencia[8];

};

#endif /* GRAFO_H */

