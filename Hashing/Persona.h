/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Persona.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */
#ifndef PERSONA_H
#define PERSONA_H

#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>


using namespace std;

class Persona {
public:
    Persona();
    Persona(string, string, int);
    //Persona(const Persona& orig);
    virtual ~Persona();
    string getNombre();
    void setNombre(string);
    string getApellidos();
    void setApellidos(string);
    int getCedula();
    void setCedula(int);
    string toString();
private:
    string nombre;
    string apellidos;
    int cedula;
};

#endif /* PERSONA_H */

