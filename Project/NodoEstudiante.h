/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: NodoEstudiante.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */


#ifndef NODOESTUDIANTE_H
#define NODOESTUDIANTE_H
#include "Estudiante.h"
#include <iostream>
using namespace std;

class NodoEstudiante {
public:
    NodoEstudiante();
    NodoEstudiante(Estudiante);
    virtual ~NodoEstudiante();

    Estudiante getEstudiante();
    void setEstudiante(Estudiante);

    NodoEstudiante* getSiguiente();
    void setSiguiente(NodoEstudiante*);
private:
    Estudiante estudiante;
    NodoEstudiante* siguiente;
};

#endif /* NODOESTUDIANTE_H */

