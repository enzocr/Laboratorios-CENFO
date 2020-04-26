/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: enzoq
 *
 * Created on May 28, 2018, 8:54 PM
 */

#include <iostream>
#include <cstdlib>
using namespace std;
void hola();

/*
 * 
 */
int main(int argc, char** argv) {
    hola();
    return 0;
}

void hola() {
    int a;
    int *aPtr;
    a = 7;
    aPtr = &a;
    cout << "La direccion de a es: " << &a
            << endl;
    cout << "El valor de aPtr es: " << aPtr
            << endl;
}

