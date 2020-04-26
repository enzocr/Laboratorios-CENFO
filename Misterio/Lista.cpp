
#include "Lista.h"
#include "Nodo.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

Lista::Lista() {
    cabeza == NULL;
    siguiente == NULL;
    ultimo == NULL;
}

bool Lista::esVacia() {

    if (cabeza == NULL) {
        return true;
    } else {
        return false;
    }

}
//
//bool Lista::insertarLibro(Libro pLibro) {
//
//	Nodo * newNodo;
//	newNodo = new Nodo(pLibro);
//	bool loop = true;
//
//
//	if (cabeza == NULL) {
//		cabeza = newNodo;
//		loop = false;
//	}else if(CompararStrings((cabeza->getLibro().getNombre()), (pLibro.getNombre())) == 1 && siguiente == NULL) { //si la cabeza (s1) es mayor al pLibro (s2) osea zapato vs arbol (ej) y no hay siguiente
//		
//		Nodo * aux;
//		aux = new Nodo();
//		aux = getCabeza();
//		cabeza = newNodo;
//		cabeza->setSiguiente(aux);
//		loop = false;
//	}
//	else if (CompararStrings((cabeza->getLibro().getNombre()), (pLibro.getNombre())) == -1 && siguiente == NULL) {
//		cabeza->setSiguiente(newNodo);
//		loop = false;
//	}
//	if (loop) {
//
//		Nodo * aux;
//		aux = new Nodo();
//		aux = getCabeza();
//		Nodo * aux2;
//		aux2 = new Nodo();
//
//		do {
//
//			aux = aux->getSiguiente();
//
//
//
//		} while (aux != NULL);
//	}
//	
//
//		
//		
//	
//
//	return true;
//}
////int Lista::CompararStrings(string s1, string s2)
////{
////	string s1("Casa"); cabeza
////	string s2("Zapato "); pLibro
////	CompararStrings(s1, s2);
////
////	int x = s1.compare(s2);
////
////	if (x != 0) { //0 para iguales
////		cout << s1 << " is not equal to "
////			<< s2 << endl;
////	}
////	if (x > 0) { //1 para mayores , casa mayor a zapato .falsae	
////		cout << s1 << " is greater than "
////			<< s2 << endl;
////	}else { // -1
////		cout << s2 << " is greater than "
////			<< s1 << endl;
////	}
////
////	return x;
////		
////}

void Lista::recorrerLista() {
}// por implmementar

Nodo * Lista::RemoverNodo() { // por implmementar

    Nodo * aux;
    aux = new Nodo();
    return aux;
}

void Lista::setUltimo(Nodo * pNodo) {
    this->ultimo == pNodo;
}

Nodo * Lista::getUltimo() {
    return this->ultimo;
}

void Lista::setCabeza(Nodo * pNodo) {
    this->cabeza == pNodo;
}

void Lista::setSiguiente(Nodo * pNodo) {
    this->siguiente == pNodo;
}

Nodo* Lista::getSiguiente() {
    return this->siguiente;
}

Nodo* Lista::getCabeza() {
    return this->cabeza;
}

Lista::~Lista() {
}
