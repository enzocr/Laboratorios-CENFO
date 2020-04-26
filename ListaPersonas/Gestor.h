/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Gestor.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */
#ifndef GESTOR_H
#define GESTOR_H

#include <iostream>
#include "Lista.h"
#include <string>
using namespace std;

class Gestor {
public:
    Gestor();
    Gestor(const Gestor& orig);
    virtual ~Gestor();
    void registrarPersona(string, string, int, string);
    Nodo* buscarPersonaPorCedula(int*);
    Nodo* buscarPersonaPorNombre(string*);
    bool eliminarNodoPersona(int*);
    std::string getLista();
private:
    Lista lista;
};

#endif /* GESTOR_H */

