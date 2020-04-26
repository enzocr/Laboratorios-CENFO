/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: main.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 Tarea Lista de Personas
 Fecha de creación: 27/06/2018
 Fecha de último cambio: 28/06/2018
 */
#include <iostream>
#include <cstdlib>
#include "Nodo.h"
#include "Lista.h"
#include "Gestor.h"

using namespace std;
Gestor gestor;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);
void registrarPersona();
void buscarPersonaPorCedula();
void buscarPersonaPorNombre();
void mostrarPersonas();
void eliminarPersonaPorCedula();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do {
        mostrarMenu();
        opc = leerOpcion();
        ejecutarAccion(opc);

    } while (opc != 6);

    return 0;
}

void mostrarMenu() {
    cout << "\n";
    cout << "1. ---|         REGISTRAR PERSONA          |--- \n";
    cout << "2. ---|     BUSCAR PERSONA POR CEDULA      |--- \n";
    cout << "3. ---|     BUSCAR PERSONA POR NOMBRE      |--- \n";
    cout << "4. ---|         MOSTRAR PERSONAS           |--- \n";
    cout << "5. ---|        ELIMINAR PERSONAS           |--- \n";
    cout << "6. ---|              SALIR                 |--- \n";
}

int leerOpcion() {

    int opcion;


    cout << "Seleccione accion a realizar: ";
    cin>>opcion;


    return opcion;
}

void ejecutarAccion(int pOpcion) {

    switch (pOpcion) {

        case 1:
            registrarPersona();
            break;
        case 2:
            buscarPersonaPorCedula();
            break;
        case 3:
            buscarPersonaPorNombre();
            break;
        case 4:
            mostrarPersonas();
            break;
        case 5:
            eliminarPersonaPorCedula();
            break;
        case 6:
            cout << "Adios";
            break;
        default:
            cout << "OPCION INVALIDA";

    }
}

void registrarPersona() {


    string nombre, apellidos, domicilio;
    int cedula;
    cout << "Nombre: ";
    cin>>nombre;
    cout << "Apellido(s): ";
    cin>>apellidos;
    cout << "Cedula: ";
    cin>>cedula;
    cout << "Domicilio: ";
    cin>>domicilio;


    gestor.registrarPersona(nombre, apellidos, cedula, domicilio);
    //    gestor.registrarPersona("Enzo", "Quartino", 123456, "Escazu");
    //    gestor.registrarPersona("Carlos", "Quesada", 175477, "Escazu");
    //    gestor.registrarPersona("Andres", "Salazar", 142444, "Escazu");
    //    gestor.registrarPersona("Milena", "Sibaja", 876544, "Escazu");
    //    gestor.registrarPersona("Sara", "Marin", 879879, "Escazu");
    //    gestor.registrarPersona("Carolina", "Zamora", 123455, "Escazu");
    //    gestor.registrarPersona("Josue", "Rojas", 177777, "Escazu");
    //    gestor.registrarPersona("Melany", "Arias", 888888, "Escazu");

}

void buscarPersonaPorCedula() {
    int cedula;
    cout << "Cedula de persona a buscar: ";
    cin>>cedula;
    int* punteroCedula;
    punteroCedula = &cedula;

    cout << gestor.buscarPersonaPorCedula(punteroCedula)->getPersona().toString();
}

void buscarPersonaPorNombre() {
    string nombre;
    cout << "Nombre de persona a buscar: ";
    cin>>nombre;
    string* punteroNombre;
    punteroNombre = &nombre;

    cout << gestor.buscarPersonaPorNombre(punteroNombre)->getPersona().toString();
}

void mostrarPersonas() {
    cout << gestor.getLista();
}

void eliminarPersonaPorCedula() {
    int cedula;
    cout << "Cedula de persona a eliminar: ";
    cin>>cedula;
    int* punteroCedula;
    punteroCedula = &cedula;
    cout << gestor.eliminarNodoPersona(punteroCedula);
}