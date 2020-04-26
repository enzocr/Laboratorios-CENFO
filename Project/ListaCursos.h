/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: ListaCursos.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */


#ifndef LISTACURSOS_H
#define LISTACURSOS_H
#include "NodoCurso.h"
using namespace std;

class ListaCursos {
public:
    ListaCursos();
    bool isNull();
    void insertarInicio(int, string, string, string, string);
    void insertarOrdenado(int, string, string, string, string);
    NodoCurso* buscarPorCodigo(int);
    bool eliminarNodoCurso(int);
    std::string mostrarLista();
    bool aulasLlenas();
    NodoCurso* getCabeza();
    void setCabeza(NodoCurso*);

private:
    NodoCurso* cabeza;
};

#endif /* LISTACURSOS_H */

