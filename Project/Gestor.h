/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Gestor.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */


#ifndef GESTOR_H
#define GESTOR_H

#include "ListaCursos.h"
#include "ListaEstudiantes.h"
#include <iostream>
#include <sstream>

using namespace std;

class Gestor {
public:
    Gestor();
    Gestor(const Gestor& orig);
    virtual ~Gestor();
    void crearCurso(int, string, string, string, string);
    std::string verCursosDisponibles();
    bool eliminarNodoCurso(int);
    void matricularEstudianteACurso(NodoEstudiante*, NodoCurso*);
    bool eliminarNodoEstudiante(int);
    std::string verEstudiantesPorCurso(int);
    NodoCurso* buscarCursoPorCodigo(int);
    string buscarEstudianteParaEliminar(NodoEstudiante*);
    void agregarEstudianteNuevo(int, string, string, string, string, int);
    NodoEstudiante* buscarEstudiante(int);
    string calcularEstado(int);
    string verEstudiantesPorEstado(string);

    ListaCursos* getListaCursos();
    ListaEstudiantes* getListaEstudiantes();
    void setListaCursos(NodoCurso*);
    void setListaEstudiantes(NodoEstudiante*);
private:
    ListaCursos* listaCursos;
    
     ListaEstudiantes* listaEstudiantes;

};

#endif /* GESTOR_H */

