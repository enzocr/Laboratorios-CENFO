
//
//  empleado.hpp
//  proyecto 1 verano
//
//  Created by Rafa Cerdas on 12/11/19.
//  Copyright © 2019 Rafa Cerdas. All rights reserved.
//

#ifndef empleado_hpp// esto es lo mismo que el #ifndef empleado_h
#define empleado_hpp// esto es lo mismo que el #define empleado_h
//lo que puede hacer si no le funciona con esto, solo lo cambia *pero deberia de servirle
#include <stdio.h>



/*/#ifndef EMPLEADO_H
#define EMPLEADO_H/*/
#include <string>
#include <iostream>
#include <sstream>

#include <stdlib.h>

const float TONC = 10358.55;
const float TOSC = 11264.17;
const float TOC  = 11471.53;
using namespace std;

class Empleado
{
private:
    string nombre;
    string id;
    float salario;
    string puesto;
    bool estado;
    int ocupacion;
public:
    Empleado();
    Empleado(string,string,float,string,bool,int);
    
    void setNombre(string);
    string getNombre();
    
    void setId(string);
    string getId();
    
    void setSalario(float);
    float getSalario();
    
    void setEstado(bool);
    bool getEstado();
    
    void setPuesto(string);
    string getPuesto();
    
    void setOcupacion(int);
    int getOcupacion();
    
    
    void verificaSalarioMen();
    
    void incrementaSalariosBajos();
    
    string toString();
    void inicializarDato();
    
    ~Empleado();
};



#endif /* empleado_hpp */
