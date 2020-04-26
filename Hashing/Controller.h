/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Controller.h
 * Author: enzoq
 *
 * Created on October 8, 2018, 8:40 PM
 */

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "TablaHash.h"
#include "Persona.h"
#include <stdlib.h>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

class Controller {
public:
    Controller();
    Controller(const Controller& orig);
    virtual ~Controller();
    string add(string, string, int);
    int hashingNumber(int);
    int hashingChar(char);
    string searchByID(int);
    string searchByLastName(char);
    TablaHash* getHashTable();
private:
    TablaHash* th;
};

#endif /* CONTROLLER_H */

