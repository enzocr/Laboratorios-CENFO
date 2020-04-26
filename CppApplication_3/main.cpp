
//
//  main.cpp
//  proyecto 1 verano
//
//  Created by Rafa Cerdas on 12/11/19.
//  Copyright © 2019 Rafa Cerdas. All rights reserved.
//

#include <iostream>
#include "arregloEmpleado.h"
#include "empleado.h"
#include <cstdlib>

using namespace std;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);
void registrarEmpleado();
void consultarListaEmpleados();
void buscarEmpleadoPorID();
void eliminarEmpleado();

int tam = 0;
string n = " ";
float salario = 0;
string puesto = " ";

string id = " ";

char opcion = '0';
char opcion1 = '0';
ArregloEmpleado vectoR(tam);

int main() {
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
    cout << "1. ---|         REGISTRAR EMPLEADO          |--- \n";
    cout << "2. ---|     CONSULTAR LISTA DE EMPLEADOS      |--- \n";
    cout << "3. ---|         BUSCAR EMPLEADO POR ID           |--- \n";
    cout << "4. ---|     AUMENTAR SALARIO     |--- \n";
    cout << "5. ---|        ELIMINAR EMPLEADO           |--- \n";
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
            registrarEmpleado();
            break;
        case 2:
            consultarListaEmpleados();
            break;
        case 3:
            buscarEmpleadoPorID();
            break;
        case 4:
            // aumentarSalario();
            break;
        case 5:
            eliminarEmpleado();
            break;
        case 6:
            cout << "Adios";
            break;
        default:
            cout << "OPCION INVALIDA";

    }
}

void registrarEmpleado() {
    cout << "Digite el nombre del empleado:" << endl;
    cin>>n;
    cout << "Digite la identificacion del empleado:" << endl;
    cin>>id;
    cout << "Digite el salario del empleado:" << endl;
    cin>>salario;
    cout << "Digite el puesto que desempeña el empleado:" << endl;
    cin>>puesto;


    Empleado emp(n, id, salario, puesto, true, 0);


    /*obj1->verificaSalarioMen();
    obj1->incrementaSalariosBajos();*/
    vectoR.insertarEmpleado(&emp);
}

void consultarListaEmpleados() {
    system("cls");
    cout << endl;
    cout << vectoR.toString() << endl;

   
    
    
    cout << endl;
    cout << endl;
    system("pause");
    system("cls");
}

void buscarEmpleadoPorID() {
    cout << "didite la identificacion del empleado que desea buscar " << endl;
    cin>>id;
    vectoR.encontrarEmpleado(id);
    cout << endl;
    cout << endl;
    system("pause");
    system("cls");
}

void eliminarEmpleado() {

    cout << endl;
    cout << endl;
    cout << "digite el ide de la persona que desea eliminar" << endl;
    cin>>id;
    vectoR.borrarEmpleado(id);

    cout << endl;
    cout << endl;
    system("pause");
    system("cls");

}














