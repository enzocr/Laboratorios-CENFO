

//
//  arregloEmpleado.hpp
//  proyecto 1 verano
//
//  Created by Rafa Cerdas on 12/16/19.
//  Copyright © 2019 Rafa Cerdas. All rights reserved.
//

#ifndef arregloEmpleado_hpp
#define arregloEmpleado_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include "empleado.h"
using namespace std;
class ArregloEmpleado
{
private:
    Empleado* vector[50];
    int tam;
    int cant=0;
public:
    ArregloEmpleado();
    ArregloEmpleado(int);
    void setTam(int);
    int getTam();
    void insertarEmpleado(Empleado*);
    void borrarEmpleado(string);
    void encontrarEmpleado(string);
    string toString();
    ~ArregloEmpleado();
};



#endif /* arregloEmpleado_hpp */
