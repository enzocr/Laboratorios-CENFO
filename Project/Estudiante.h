/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Estudiante.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
using namespace std;

class Estudiante {
public:
    Estudiante();
    Estudiante(int, string, string, string, string, int, string);
    Estudiante(const Estudiante& orig);
    virtual ~Estudiante();


    int getCedula();
    void setCedula(int);
    string getPrimerNombre();
    void setPrimerNombre(string);
    string getSegundoNombre();
    void setSegundoNombre(string);
    string getPrimerApellido();
    void setPrimerApellido(string);
    string getSegundoApellido();
    void setSegundoApellido(string);
    int getNotaFinal();
    void setNotaFinal(int);
    string getEstado();
    void setEstado(string);
    string toString();
private:

    int cedula;
    string primerNombre;
    string segundoNombre;
    string primerApellido;
    string segundoApellido;
    int notaFinal;
    string estado;

};

#endif /* ESTUDIANTE_H */

