/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Nodo.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */

#ifndef NODO_H
#define NODO_H
#include "Persona.h"
using namespace std;

class Nodo {
public:
    Nodo();
    Nodo(Persona);
    Nodo(const Nodo& orig);
    virtual ~Nodo();
    Persona getPersona();
    void setPersona(Persona);
    Nodo* getSiguiente();
    void setSiguiente(Nodo*);
private:
    Persona persona;
    Nodo* siguiente;

};

#endif /* NODO_H */

