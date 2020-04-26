/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Curso.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#include "Curso.h"
#include "ListaEstudiantes.h"
#include "Estudiante.h"

Curso::Curso() {
}

Curso::Curso(int pCodigo, string pNombre, string pAula, string pHorario, string pDia) {
    setCodigo(pCodigo);
    setNombre(pNombre);
    setAula(pAula);
    setHorario(pHorario);
    setDia(pDia);
    setListaEstudiantesMatriculados(NULL);
}

Curso::Curso(const Curso& orig) {
}

Curso::~Curso() {
}

int Curso::getCodigo() {
    return codigo;
}

void Curso::setCodigo(int pCodigo) {
    codigo = pCodigo;
}

string Curso::getNombre() {
    return nombre;
}

void Curso::setNombre(string pNombre) {
    nombre = pNombre;
}

string Curso::getAula() {
    return aula;
}

void Curso::setAula(string pAula) {
    aula = pAula;
}

string Curso::getHorario() {
    return horario;
}

void Curso::setHorario(string pHorario) {
    horario = pHorario;
}

string Curso::getDia() {
    return dia;
}

void Curso::setDia(string pDia) {
    dia = pDia;
}

string Curso::toString() {
    std::ostringstream s;
    s << getCodigo() << ", " << getNombre() << ", " << getAula() << ", " << getHorario() << ", " << getDia() << "\n";
    s << getListaEstudiantesMatriculados()->mostrarLista();
    return s.str();
}

void Curso::setListaEstudiantesMatriculados(NodoEstudiante* pEstudiante) {
    getListaEstudiantesMatriculados()->insertarInicio(
            pEstudiante->getEstudiante().getCedula(),
            pEstudiante->getEstudiante().getPrimerNombre(),
            pEstudiante->getEstudiante().getSegundoNombre(),
            pEstudiante->getEstudiante().getPrimerApellido(),
            pEstudiante->getEstudiante().getSegundoApellido(),
            pEstudiante->getEstudiante().getNotaFinal(),
            pEstudiante->getEstudiante().getEstado());

}

ListaEstudiantes* Curso::getListaEstudiantesMatriculados() {
    return listaEstudiantesMatriculados;
}

