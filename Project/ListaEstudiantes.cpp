/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: ListaEstudiantes.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#include <sstream>
#include <iostream>
#include "ListaEstudiantes.h"
#include "NodoEstudiante.h"
#include "Estudiante.h"
using namespace std;

ListaEstudiantes::ListaEstudiantes() {
    setCabeza(NULL);
}

NodoEstudiante* ListaEstudiantes::getCabeza() {
    return cabeza;
}

void ListaEstudiantes::setCabeza(NodoEstudiante* pCabeza) {
    cabeza = pCabeza;
}

bool ListaEstudiantes::isNull() {
    return getCabeza() == NULL;
}

void ListaEstudiantes::insertarInicio(int pCedula, string pPrimerNombre, string pSegundoNombre, string pPrimerApellido,
        string pSegundoApellido, int pNotaFinal, string pEstado) {
    Estudiante estudiante(pCedula, pPrimerNombre, pSegundoNombre, pPrimerApellido,
            pSegundoApellido, pNotaFinal, pEstado);
    NodoEstudiante* nuevo = new NodoEstudiante(estudiante);
    nuevo->setSiguiente(getCabeza());

    setCabeza(nuevo);

}

void ListaEstudiantes::insertarOrdenado(int pCedula, string pPrimerNombre, string pSegundoNombre, string pPrimerApellido,
        string pSegundoApellido, int pNotaFinal, string pEstado) {
    Estudiante estudiante(pCedula, pPrimerNombre, pSegundoNombre, pPrimerApellido,
            pSegundoApellido, pNotaFinal, pEstado);
    NodoEstudiante* nuevo = new NodoEstudiante(estudiante);

    if (isNull()) {
        insertarInicio(pCedula, pPrimerNombre, pSegundoNombre, pPrimerApellido,
                pSegundoApellido, pNotaFinal, pEstado);
    } else {

        if (getCabeza()->getEstudiante().getCedula() > nuevo->getEstudiante().getCedula()) {
            insertarInicio(pCedula, pPrimerNombre, pSegundoNombre, pPrimerApellido,
                    pSegundoApellido, pNotaFinal, pEstado);
        } else {
            NodoEstudiante* aux = getCabeza();
            while (aux->getSiguiente() != NULL && aux->getSiguiente()->getEstudiante().getCedula() <
                    nuevo->getEstudiante().getCedula()) {
                aux = aux->getSiguiente();
            }
            nuevo->setSiguiente(aux->getSiguiente());
            aux->setSiguiente(nuevo);
        }
    }
}

NodoEstudiante* ListaEstudiantes::buscarPorCedula(int pCedula) {

    if (!isNull()) {
        NodoEstudiante* aux = getCabeza();
        while (aux != NULL) {
            if (aux->getEstudiante().getCedula() == pCedula) {
                return aux;
            } else {
                aux = aux ->getSiguiente();
                
            }
        }
    } else {
        return NULL;
    }

}

string ListaEstudiantes::mostrarLista() {

    std::ostringstream s;
    if (!isNull()) {
        NodoEstudiante* aux = getCabeza();
        while (aux != NULL) {

            s << aux->getEstudiante().toString();
            aux = aux ->getSiguiente();

        }
    } else {
        s << "No hay estudiantes registrados\n";
    }
    return s.str();


}

string ListaEstudiantes::estudiantesPorEstado(string pEstado) {
    std::ostringstream s;
    if (!isNull()) {
        NodoEstudiante* aux = getCabeza();
        while (aux != NULL) {
            if (aux->getEstudiante().getEstado() == pEstado) {
                s << aux->getEstudiante().toString();
            }
            aux = aux->getSiguiente();
        }
    } else {
        s << "No hay estudiantes registrados";
    }
    return s.str();
}

bool ListaEstudiantes::eliminarNodoEstudiante(int pCedula) {
    if (isNull()) {
        return false;
    } else {
        if (getCabeza()->getEstudiante().getCedula() == pCedula) {
            setCabeza(getCabeza()->getSiguiente());
            return true;
        } else {
            NodoEstudiante* temp = getCabeza();
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