/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Gestor.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#include "Gestor.h"
#include "NodoCurso.h"
#include "NodoEstudiante.h"
#include "Curso.h"

#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;
//static ListaCursos* listaCursos;
//static ListaEstudiantes* listaEstudiantes;

Gestor::Gestor() {
    //   listaCursos->setCabeza(NULL);
    //   setListaCursos(NULL);
    // setListaEstudiantes(NULL);
}

Gestor::Gestor(const Gestor& orig) {
}

Gestor::~Gestor() {
}

////////////////////////////////CURSOS

void Gestor::crearCurso(int pCodigo, string pNombre, string pAula, string pHorario, string pDia) {

    getListaCursos()->insertarOrdenado(pCodigo, pNombre, pAula, pHorario, pDia);
}

NodoCurso* Gestor::buscarCursoPorCodigo(int pCodigo) {

    return getListaCursos()->buscarPorCodigo(pCodigo);

}

void Gestor::matricularEstudianteACurso(NodoEstudiante* estudiante, NodoCurso* curso) {

    curso->getCurso().getListaEstudiantesMatriculados()->insertarOrdenado(
            estudiante->getEstudiante().getCedula(),
            estudiante->getEstudiante().getPrimerNombre(),
            estudiante->getEstudiante().getSegundoNombre(),
            estudiante->getEstudiante().getPrimerApellido(),
            estudiante->getEstudiante().getSegundoApellido(),
            estudiante->getEstudiante().getNotaFinal(),
            estudiante->getEstudiante().getEstado());
}

std::string Gestor::verCursosDisponibles() {
    if (getListaCursos()->isNull()) {
        return "No hay cursos registrados";
    } else {
        return getListaCursos()->mostrarLista();
    }
}

bool Gestor::eliminarNodoCurso(int pCodigo) {
    if (getListaCursos()->isNull()) {
        return false;
    } else {
        return getListaCursos()->eliminarNodoCurso(pCodigo);
    }
}

string Gestor::buscarEstudianteParaEliminar(NodoEstudiante* estudiante) {

    int contador = 0;
    if (getListaCursos()->isNull()) {
        return "No hay cursos registrados";
    } else {
        NodoCurso* aux = getListaCursos()->getCabeza();
        while (aux != NULL) {
            if (!aux->getCurso().getListaEstudiantesMatriculados()->isNull()) {
                NodoEstudiante* estudianteCurso = aux->getCurso().getListaEstudiantesMatriculados()->getCabeza();
                while (estudianteCurso != NULL) {
                    if (estudianteCurso->getEstudiante().getCedula() == estudiante->getEstudiante().getCedula()) {
                        contador++;
                    } else {
                        estudianteCurso = estudianteCurso->getSiguiente();
                        estudianteCurso->setSiguiente(aux->getCurso().getListaEstudiantesMatriculados()->getCabeza());
                    }
                }
            } else {
                aux = aux ->getSiguiente();
                aux->setSiguiente(getListaCursos()->getCabeza());
            }
        }
        if (contador >= 1) {
            return "El estudiante no se puede eliminar, esta matriculado en un curso";
        } else {
            if (eliminarNodoEstudiante(estudiante->getEstudiante().getCedula())) {
                return "Estudiante eliminado de la lista general";
            } else {
                return "El estudiante no se pudo eliminar";
            }
        }
    }


}

std::string Gestor::verEstudiantesPorCurso(int pCodigoCurso) {
    if (getListaCursos()->isNull()) {
        return "No hay cursos registrados\n";
    } else {
        if (getListaCursos()->buscarPorCodigo(pCodigoCurso)->getCurso().getListaEstudiantesMatriculados()->isNull()) {
            return "No hay estudiantes registrados\n";
        } else {
            NodoCurso* curso = getListaCursos()->buscarPorCodigo(pCodigoCurso);
            return curso->getCurso().toString();
        }

    }
}
//////////////////////////////////CURSOS


//////////////////////////////////ESTUDIANTES

void Gestor::agregarEstudianteNuevo(int pCedula, string pPrimerNombre, string pSegundoNombre, string pPrimerApellido,
        string pSegundoApellido, int pNotaFinal) {
    getListaEstudiantes()->insertarOrdenado(pCedula, pPrimerNombre, pSegundoNombre, pPrimerApellido,
            pSegundoApellido, pNotaFinal, calcularEstado(pNotaFinal));

}

bool Gestor::eliminarNodoEstudiante(int pCedula) {
    if (getListaEstudiantes()->isNull()) {
        return false;
    } else {
        return getListaEstudiantes()->eliminarNodoEstudiante(pCedula);
    }

}

NodoEstudiante* Gestor::buscarEstudiante(int pCedula) {
    if (getListaEstudiantes()->isNull()) {
        return NULL;
    } else {
        return getListaEstudiantes()->buscarPorCedula(pCedula);
    }
}

//////////////////////////////////ESTUDIANTES

string Gestor::verEstudiantesPorEstado(string pEstado) {
    if (getListaEstudiantes()->isNull()) {
        return "No hay estudiantes registrados";
    } else {
        return getListaEstudiantes()->estudiantesPorEstado(pEstado);
    }
}

string Gestor::calcularEstado(int pNotaFinal) {
    if (pNotaFinal > 70) {
        return "APROBADO";
    } else if (pNotaFinal < 60) {
        return "REPROBADO";
    } else {
        return "APLAZADO";
    }
}

ListaCursos* Gestor::getListaCursos() {
    return listaCursos;
}

ListaEstudiantes* Gestor::getListaEstudiantes() {
    return listaEstudiantes;
}

void Gestor::setListaCursos(NodoCurso* curso) {

    getListaCursos()->insertarInicio(
            curso->getCurso().getCodigo(),
            curso->getCurso().getNombre(),
            curso->getCurso().getAula(),
            curso->getCurso().getHorario(),
            curso->getCurso().getDia());
}

void Gestor::setListaEstudiantes(NodoEstudiante* pEstudiante) {

    getListaEstudiantes()->insertarInicio(
            pEstudiante->getEstudiante().getCedula(),
            pEstudiante->getEstudiante().getPrimerNombre(),
            pEstudiante->getEstudiante().getSegundoNombre(),
            pEstudiante->getEstudiante().getPrimerApellido(),
            pEstudiante->getEstudiante().getSegundoApellido(),
            pEstudiante->getEstudiante().getNotaFinal(),
            pEstudiante->getEstudiante().getEstado());
}
