/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: NodoCurso.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */


#ifndef NODOCURSO_H
#define NODOCURSO_H
//#include "ListaEstudiantes.h"
//#include "NodoCurso.h"
#include "Curso.h"
#include <sstream>
#include <iostream>
using namespace std;

class NodoCurso {
public:
    NodoCurso();
    NodoCurso(Curso);

    Curso getCurso();
    void setCurso(Curso);

    NodoCurso* getSiguiente();
    void setSiguiente(NodoCurso*);

private:
    Curso curso;
    NodoCurso* siguiente;

};

#endif /* NODOCURSO_H */

