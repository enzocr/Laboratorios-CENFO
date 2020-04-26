/*
 Cenfotec – Costa Rica
 Estructura de Datos – 2018-02
 Nombre del archivo: Main.cpp
 Autor: Enzo Quartino Zamora
 e-mail: equartinoz@ucenfotec.ac.cr
 * Proyecto #1
 Fecha de creación: 12/07/2018
 Fecha de último cambio: 29/07/2018
 */

#include <iostream>
#include <cstdlib>
#include "NodoCurso.h"
#include "NodoEstudiante.h"
#include "Gestor.h"



using namespace std;
void mostrarMenu();
int leerOpcion();
void ejecutarAccion(int);

Gestor gestor;
void crearCurso();
void verCursosDisponibles();
void cursosMatriculadosPorEstudiante();
void eliminarCurso();
void agregarEstudianteNuevo();
void matricularEstudiante();
void eliminarEstudianteDeCurso();
void verEstudiantesPorCurso();
void matricularEstudianteACurso(NodoEstudiante*);
//bool puedeMatricularEstudiante();
void mostrarEstudiantesPorEstado();

/*
 * 
 */
int main(int argc, char** argv) {
    int opc;
    do {
        mostrarMenu();
        opc = leerOpcion();
        ejecutarAccion(opc);

    } while (opc != 10);

    return 0;
}

void mostrarMenu() {
    cout << "\n";
    cout << "1. ---|           CREAR CURSO              |--- \n";
    cout << "2. ---|      VER CURSOS DISPONIBLES        |--- \n";
    cout << "3. ---| CURSOS MATRICULADOS POR ESTUDIANTE |--- \n";
    cout << "4. ---|         ELIMINAR CURSO             |--- \n";
    cout << "5. ---|      AÑADIR ESTUDIANTE NUEVO       |--- \n";
    cout << "6. ---|   MATRICULAR ESTUDIANTE A CURSO    |--- \n";
    cout << "7. ---|    ELIMINAR ESTUDIANTE DE CURSO    |--- \n";
    cout << "8. ---|     VER ESTUDIANTES POR CURSO      |--- \n";
    cout << "9. ---|  MOSTRAR ESTUDIANTES POR ESTADO    |--- \n";
    cout << "10. ---|              SALIR                 |--- \n";
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
            crearCurso();
            break;

        case 2:
            verCursosDisponibles();
            break;

        case 3:
            cursosMatriculadosPorEstudiante(); //*****
            break;

        case 4:
            eliminarCurso();
            break;

        case 5:
            agregarEstudianteNuevo();
            break;

        case 6:
            matricularEstudiante(); //*****
            break;

        case 7:
            eliminarEstudianteDeCurso();
            break;

        case 8:
            verEstudiantesPorCurso(); //*****
            break;

        case 9:
            mostrarEstudiantesPorEstado();

        case 10:
            cout << "GRACIAS POR USAR EL SISTEMA";
            break;

        default:
            cout << "OPCION INVALIDA";

    }
}

void crearCurso() {
    int codigo;
    string nombre, horario, dia, aula;

    cout << "Codigo del curso: ";
    cin>>codigo;
    NodoCurso* curso = gestor.buscarCursoPorCodigo(codigo);
    if (curso != NULL) {
        cout << "Curso ya existe con el codigo: " << codigo;
    } else {
        cout << "Nombre del curso: ";
        cin>>nombre;
        cout << "Nombre del aula: ";
        cin>>aula;
        cout << "Horario del curso: ";
        cin >> horario;
        cout << "Dia del curso: ";
        cin >> dia;
        gestor.crearCurso(codigo, nombre, aula, horario, dia);
    }

}

void verCursosDisponibles() {
    cout << gestor.verCursosDisponibles();
}

void cursosMatriculadosPorEstudiante() {
    int cedula;
    cout << "Cedula: ";
    cin>>cedula;
    NodoEstudiante* est = gestor.buscarEstudiante(cedula);
    if (est != NULL) {
          
    } else {
        cout << "Estudiante no encontrado en el sistema";
    }
}

void eliminarCurso() {
    int eliminar;
    cout << "Digite codigo del curso a eliminar";
    cin>>eliminar;

    if (gestor.eliminarNodoCurso(eliminar)) {
        cout << "CURSO ELIMINADO \n";
    } else {
        cout << "EL CURSO NO FUE ELIMINADO O ENCONTRADO \n";
    }
}

void agregarEstudianteNuevo() {

    int cedula;
    string primerNombre;
    string segundoNombre = " ";
    string primerApellido;
    string segundoApellido = " ";
    double notaFinal;

    cout << "Cedula: ";
    cin>>cedula;
    NodoEstudiante* est = gestor.buscarEstudiante(cedula);
    if (est != NULL) {
        cout << "Estudiante ya registrado con cedula: " << cedula;
    } else {

        cout << "Primer nombre: ";
        cin>>primerNombre;
        cout << "Segundo nombre ";
        cin>>segundoNombre;
        cout << "Primer apellido: ";
        cin>>primerApellido;
        cout << "Segundo apellido: ";
        cin>>segundoApellido;
        cout << "Nota final: ";
        cin>>notaFinal;

        gestor.agregarEstudianteNuevo(cedula, primerNombre, segundoNombre, primerApellido, segundoApellido, notaFinal);

        NodoEstudiante* estudiante = gestor.buscarEstudiante(cedula);
        if (estudiante == NULL) {
            cout << "Estudiante no se registró \n";
        } else {
            cout << "Estudiante registrado \n";
        }
        if (gestor.getListaCursos()->isNull()) {
            cout << "No puede matricular estudiantes";
        } else {

            int decision;
            cout << "Desea matricular al estudiante en algun curso? SI(1) || NO (2)";
            cin>>decision;
            if (decision == 1) {
                matricularEstudianteACurso(estudiante);
            }
        }
    }
}

void matricularEstudiante() {

    if (gestor.getListaCursos()->isNull()) {
        cout << "No puede matricular estudiantes";
    } else {
        int cedula;
        cout << "Cedula de estudiante a matricular en curso: ";
        cin>>cedula;
        NodoEstudiante* estudiante = gestor.buscarEstudiante(cedula);
        if (estudiante == NULL) {
            cout << "El estudiante no se encuentra en el sistema";
        } else {
            int codigo;
            cout << "Codigo de curso a matricular: ";
            cin>>codigo;

            NodoCurso* curso = gestor.buscarCursoPorCodigo(codigo);
            if (curso == NULL) {
                cout << "CURSO NO EXISTE";
            } else {
                gestor.matricularEstudianteACurso(estudiante, curso);

                cout << gestor.verEstudiantesPorCurso(curso->getCurso().getCodigo());
            }
        }
    }

}

void eliminarEstudianteDeCurso() {
    int eliminar;
    cout << "Digite cedula del estudiante a eliminar";
    cin>>eliminar;
    NodoEstudiante* estudiante = gestor.buscarEstudiante(eliminar);
    if (estudiante == NULL) {
        cout << "Estudiante no encontrado en el sistema";
    } else {
        cout << gestor.buscarEstudianteParaEliminar(estudiante);
    }
}

void verEstudiantesPorCurso() {
    int codigo;
    cout << "Codigo de curso a ver estudiantes: ";
    cin>>codigo;

    NodoCurso* curso = gestor.buscarCursoPorCodigo(codigo);
    if (curso != NULL) {
        cout << gestor.verEstudiantesPorCurso(codigo);
    } else {
        cout << "Curso no encontrado en el sistema";
    }
}

void matricularEstudianteACurso(NodoEstudiante* estudiante) {
    int codigo;
    cout << "Codigo de curso a matricular: ";
    cin>>codigo;

    NodoCurso* curso = gestor.buscarCursoPorCodigo(codigo);
    if (curso == NULL) {
        cout << "CURSO NO EXISTE";
    } else {
        gestor.matricularEstudianteACurso(estudiante, curso);

          cout << gestor.verEstudiantesPorCurso(curso->getCurso().getCodigo());
    }
}

void mostrarEstudiantesPorEstado() {
    int decision;
    cout << "VER ESTUDIANTES APROBADOS  (1)";
    cout << "VER ESTUDIANTES APLAZADOS  (2)";
    cout << "VER ESTUDIANTES REPROBADOS (3)";
    cin>>decision;

    if (decision == 1) {
        cout << gestor.verEstudiantesPorEstado("APROBADO");

    }
    if (decision == 2) {
        cout << gestor.verEstudiantesPorEstado("APLAZADO");

    }
    if (decision == 3) {
        cout << gestor.verEstudiantesPorEstado("REPROBADOS");
    }
}
