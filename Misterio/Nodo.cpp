/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nodo.cpp
 * Author: enzoq
 * 
 * Created on February 22, 2020, 3:36 PM
 */

#include "Nodo.h"
#include <iostream>

Nodo::Nodo()
{
	this->siguiente = NULL;
}

Nodo::Nodo(Libro pLibro)
{
	this->libro = pLibro;
	this->siguiente = NULL;
}

void Nodo::setLibro(Libro pLibro) {
	this->libro = pLibro;
}

void::Nodo::setSiguiente(Nodo * pNodo){	
	this->siguiente = pNodo;
}


Libro Nodo::getLibro() {
	return libro;
}
Nodo* Nodo::getSiguiente() {
	return siguiente;
}

Nodo::~Nodo()
{
}

