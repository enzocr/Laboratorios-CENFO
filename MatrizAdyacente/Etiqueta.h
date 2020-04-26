/* Cenfotec – Costa Rica
 * Estructura de Datos 2 – 2018-03
 * Nombre del archivo: Etiqueta.h
 * Autor: Ernesto Desanti, Ángel Marín, Enzo Quartino, Daniel Rodríguez
 * e-mail: edesantis@ucenfotec.ac.cr,amarint@ucenfotec.ac.cr,equartinoz@ucenfotec.ac.cr,drodriguezr@ucenfotec.ac.cr
 * Hashing – Tarea No.7
 * Fecha de creación: Octubre del 2018
 * Fecha de último cambio: Noviembre del 2018
 */

#ifndef ETIQUETA_H
#define ETIQUETA_H
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;
class Etiqueta {
public:
    Etiqueta();
    Etiqueta(int, int);
    int getDistancia();
    void setDistancia(int);
    int getMinutos();
    void setMinutos(int);
    string toString();

private:
    int distancia;
    int minutos;
};

#endif /* ETIQUETA_H */

