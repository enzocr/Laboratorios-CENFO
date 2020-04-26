/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: NodoCurso.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */


#include "NodoCurso.h"
#include "ListaEstudiantes.h"
#include "Curso.h"
using namespace std;

NodoCurso::NodoCurso() {

    setSiguiente(NULL);
}

NodoCurso::NodoCurso(Curso pCurso) {
    setCurso(pCurso);
    setSiguiente(NULL);
}

Curso NodoCurso::getCurso() {
    return curso;
}

void NodoCurso::setCurso(Curso pCurso) {
    curso = pCurso;
}

NodoCurso* NodoCurso::getSiguiente() {
    return siguiente;
}

void NodoCurso::setSiguiente(NodoCurso* pSiguiente) {
    siguiente = pSiguiente;
}

