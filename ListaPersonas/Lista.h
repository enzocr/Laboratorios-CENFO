/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Lista.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */
#ifndef LISTA_H
#define LISTA_H
#include "Persona.h"
#include "Nodo.h"
#include <iostream>
using namespace std;

class Lista {
public:
    Lista();
    Lista(const Lista& orig);
    virtual ~Lista();
    bool isNull();
    void insertarInicio(Persona);
    void insertarOrdenado(Persona);
    Nodo* buscarPorCedula(int);
    Nodo* buscarPorNombre(string);
    bool eliminarNodoPersona(int);
    std::string mostrarLista();
    Nodo* getCabeza();
    void setCabeza(Nodo*);
private:
    Nodo* cabeza;
};

#endif /* LISTA_H */

