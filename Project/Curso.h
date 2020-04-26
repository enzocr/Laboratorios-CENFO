/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Curso.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#ifndef CURSO_H
#define CURSO_H
//#include "NodoEstudiante.h"
#include "ListaEstudiantes.h"
//#include "NodoCurso.h"
#include <sstream>
#include <iostream>
using namespace std;

class Curso {
public:
    Curso();
    Curso(int, string, string, string, string);
    Curso(const Curso& orig);
    virtual ~Curso();

    int getCodigo();
    void setCodigo(int);
    string getNombre();
    void setNombre(string);
    string getAula();
    void setAula(string);
    string getHorario();
    void setHorario(string);
    string getDia();
    void setDia(string);
    string toString();

    ListaEstudiantes* getListaEstudiantesMatriculados();
    void setListaEstudiantesMatriculados(NodoEstudiante*);

private:
    int codigo;
    string nombre;
    string aula;
    string horario;
    string dia;
    ListaEstudiantes* listaEstudiantesMatriculados;
};

#endif /* CURSO_H */

