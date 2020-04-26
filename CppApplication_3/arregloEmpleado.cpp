

//
//  arregloEmpleado.cpp
//  proyecto 1 verano
//
//  Created by Rafa Cerdas on 12/16/19.
//  Copyright © 2019 Rafa Cerdas. All rights reserved.
//

#include "arregloEmpleado.h"

ArregloEmpleado::ArregloEmpleado()
{
    this->tam=50;
    this->cant=0;
    for(int i=0;i<cant;i++)
    {
        vector[i]=nullptr;
    }
}
    ArregloEmpleado::ArregloEmpleado(int tam )
    {
        this->tam=tam;
        
        for(int i=0;i<tam;i++)
        {
            vector[i]=nullptr;
        }
    }

 void ArregloEmpleado::setTam( int tam)
{
    this->tam=tam;
}

int ArregloEmpleado::getTam()
{
    return this->tam;
}

void ArregloEmpleado::insertarEmpleado(Empleado* empleado)
{
    for(int i=0;i<tam;i++)
    {
        if(vector[i]==nullptr)
        {
            vector[i]=empleado;
            this->cant++;
        }
    }
}

void ArregloEmpleado::borrarEmpleado(string id)
{
    
    
    
    for(int i=0;i<tam;i++)
    {
        if(vector[i]->getId()==id)
        {
            vector[i]=nullptr;
            cout<<"se ha borrado con exito "<<endl;
            cant--;
        }
        
    }
}

void ArregloEmpleado::encontrarEmpleado(string id)
{
    int cont=0;
    for(int i=0;i<tam;i++)
    {
        if(vector[i]->getId()==id)
        {
            vector[i]->toString();
        }
        cont++;
        
    }
    if(cont==this->tam)
    {
        cout<<"nullptr "<<endl;
    }
    
}
string ArregloEmpleado::toString()
{
    stringstream s;
    
    for(int i=0;i<tam;i++)
    {
        s<<"el campo "<<i<<" es :" <<vector[i]->getNombre()<<endl;
        cout<<endl;
    }
    
    return s.str();
}

ArregloEmpleado::~ArregloEmpleado()
{
    for(int i=0;i<tam;i++)
    {
        vector[i]=nullptr;
        this->cant--;
    }
    
}
