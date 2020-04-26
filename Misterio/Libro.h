/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Libro.h
 * Author: enzoq
 *
 * Created on February 22, 2020, 3:37 PM
 */

#ifndef LIBRO_H
#define LIBRO_H

#include "Libro.h"


#include <string>

class Libro {
private:
    std::string nombre;
    std::string consecutivo;
    std::string categoria;

public:
    Libro();
    Libro(std::string, std::string, int);
    void setNombre(std::string);
    void setCategoria(std::string);
    void setConsecutivo(std::string);
    std::string getNombre();
    std::string getCategoria();
    std::string getConsecutivo();
    std::string toString();
    ~Libro();
};





#endif /* LIBRO_H */

