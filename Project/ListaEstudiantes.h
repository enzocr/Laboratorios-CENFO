/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: ListaEstudiantes.h
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */


#ifndef LISTAESTUDIANTES_H
#define LISTAESTUDIANTES_H
#include"NodoEstudiante.h"
#include <iostream>
#include<ostream>
using namespace std;

class ListaEstudiantes {
public:
    ListaEstudiantes();
    bool isNull();
    void insertarInicio(int, string, string, string, string, int, string);
    void insertarOrdenado(int, string, string, string, string, int, string);
    NodoEstudiante* buscarPorCedula(int);
    bool eliminarNodoEstudiante(int);
    std::string mostrarLista();
    NodoEstudiante* getCabeza();
    void setCabeza(NodoEstudiante*);
    string estudiantesPorEstado(string);
private:
    NodoEstudiante* cabeza;

};

#endif /* LISTAESTUDIANTES_H */

