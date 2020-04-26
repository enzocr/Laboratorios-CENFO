//
//  main.cpp
//  PicasYFijas
//
//  Created by Diego Herrera Jara on 14/5/18.
//  Copyright © 2018 Diego Herrera Jara. All rights reserved.
//

#include <iostream>
#include "implementacion.cpp"
using namespace std;
void inicializar();
double*getNumeroBase();
void setNumeroBase(double*);
double verificarArreglo(double*);


int main(int argc, const char * argv[]) {
    
    numeroBase miImplementacion;
    miImplementacion.inicializar();
    //cout<<miImplementacion.getNumeroBase();
    std::cout<<"PICAS Y FIJAS";
    std::cout<<"Intrucciones: Usted debe adivinar un numero de 4 digitos. Tiene 10 oportunidades, en las que se le irá informando el número de picas y fijas ";
    std::cout<<"Picas: Número correcto en posicion incorrecta";
    std::cout<<"Fijas: Número correcto en posicion correcta";
    std::cout<<"ADIVINE EL NÚMERO DE 4 DÍGITOS";
    
    int variable;

    
    double arregloDigitado[4];
    double n1, n2, n3, n4;
    
    std::cout<<"Digite el primer numero";
    cin>>n1;
    std::cout<<"Digite el segundo numero";
    cin>>n2;
    std::cout<<"Digite el tercero numero";
    cin>>n3;
    std::cout<<"Digite el cuarto numero";
    cin>>n4;
    
    arregloDigitado[0] = n1;
    arregloDigitado[1] = n2;
    arregloDigitado[2] = n3;
    arregloDigitado[3] = n4;
    
    variable = miImplementacion.verificarArreglo(arregloDigitado);
    
    int contador = 0;
    
    while(variable != 4 || contador <= 10){
        if(variable == 0){
            cout<<"tiene 0 picas" << arregloDigitado;
        }if(variable == 1){
            cout<<"tiene 1 pica" << arregloDigitado;
        }if(variable == 2){
            cout<<"tiene 2 picas" << arregloDigitado;
        }if(variable == 3){
            cout<<"tiene 3 picas" << arregloDigitado;
        }if(variable == 4){
            cout<<"tiene 4 picas" << arregloDigitado;
        }
        contador++;
    };
}








