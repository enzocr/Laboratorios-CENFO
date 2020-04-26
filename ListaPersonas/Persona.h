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
#include <iostream>
using namespace std;

class Persona {
public:
    Persona();
    Persona(string, string, int, string);
    //Persona(const Persona& orig);
    virtual ~Persona();
    string getNombre();
    void setNombre(string);
    string getApellidos();
    void setApellidos(string);
    int getCedula();
    void setCedula(int);
    string getDomicilio();
    void setDomicilio(string);
    string toString();
private:
    string nombre;
    string apellidos;
    int cedula;
    string domicilio;
};

#endif /* PERSONA_H */

