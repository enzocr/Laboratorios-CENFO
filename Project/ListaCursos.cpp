/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: ListaCursos.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#include <sstream>
#include <iostream>
#include "ListaCursos.h"
#include "NodoCurso.h"
using namespace std;

ListaCursos::ListaCursos() {
    setCabeza(NULL);
}

NodoCurso* ListaCursos::getCabeza() {
    return cabeza;
}

void ListaCursos::setCabeza(NodoCurso* pCabeza) {
    cabeza = pCabeza;
}

bool ListaCursos::isNull() {
    return getCabeza() == NULL;
}

void ListaCursos::insertarInicio(int pCodigo, string pNombre, string pAula, string pHorario, string pDia) {
    Curso curso(pCodigo, pNombre, pAula, pHorario, pDia);
    NodoCurso* nuevo = new NodoCurso(curso);
    nuevo->setSiguiente(getCabeza());
    setCabeza(nuevo);
}

void ListaCursos::insertarOrdenado(int pCodigo, string pNombre, string pAula, string pHorario, string pDia) {
    if (aulasLlenas()) {
        cout << "Aulas llenas, no se puede registrar curso";
    } else {
        Curso curso(pCodigo, pNombre, pAula, pHorario, pDia);
        NodoCurso* nuevo = new NodoCurso(curso);
        if (isNull()) {
            insertarInicio(pCodigo, pNombre, pAula, pHorario, pDia);
        } else {
            if (getCabeza()->getCurso().getCodigo() > nuevo->getCurso().getCodigo()) {
                insertarInicio(pCodigo, pNombre, pAula, pHorario, pDia);
            } else {
                NodoCurso* aux = getCabeza();
                while (aux->getSiguiente() != NULL && aux->getSiguiente()->getCurso().getCodigo() < nuevo->getCurso().getCodigo()) {
                    aux = aux->getSiguiente();
                }
                nuevo->setSiguiente(aux->getSiguiente());
                aux->setSiguiente(nuevo);
            }
        }
    }

}

NodoCurso* ListaCursos::buscarPorCodigo(int pCodigo) {

    if (!isNull()) {
        NodoCurso* aux = getCabeza();
        while (aux != NULL) {
            if (aux ->getCurso().getCodigo() == pCodigo) {
                return aux;
            } else {
                aux = aux ->getSiguiente();
                
            }
        }
    } else {
        return NULL;
    }

}

string ListaCursos::mostrarLista() {

    std::ostringstream s;
    if (!isNull()) {
        NodoCurso* aux = getCabeza();
        while (aux != NULL) {

            s << aux->getCurso().toString();
            aux = aux ->getSiguiente();
        }
    }
    return s.str();


}

bool ListaCursos::aulasLlenas() {
    int contador = 0;
    if (!isNull()) {
        NodoCurso* aux = getCabeza();
        while (aux != NULL) {
            contador++;
            aux = aux ->getSiguiente();
        }
    }
    if (contador == 5) {
        return true;
    } else {
        return false;
    }
}

bool ListaCursos::eliminarNodoCurso(int pCodigo) {
    if (isNull()) {
        return false;
    } else {
        if (getCabeza()->getCurso().getCodigo() == pCodigo) {
            setCabeza(getCabeza()->getSiguiente());
            return true;
        } else {
            NodoCurso* temp = getCabeza();
            while (temp != NULL) {
                temp = temp->getSiguiente();
                if (temp != NULL) {
                    temp = temp->getSiguiente()->getSiguiente();
                    return true;
                } else {
                    return false;
                }
            }
        }
    }
}