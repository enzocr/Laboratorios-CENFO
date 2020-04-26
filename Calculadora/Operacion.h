
#ifndef OPERACION_H
#define OPERACION_H

#include <iostream>
using namespace std;

class Operacion {
public:
    Operacion();
    Operacion(double, string);
    double getNumero1();
    void setNumero1(double);
    double getNumero2();
    void setNumero2(double);
    string getSignoOperacion();
    void setSignoOperacion(string);
    double getResultado();
    void setResultado(double);
private:
    double numero1;
    double numero2;
    string signoOperacion;
    double result;
};

#endif /* OPERACION_H */

