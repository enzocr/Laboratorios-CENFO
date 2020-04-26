
#include "Libro.h"

Libro::Libro() {
    categoria = "";
    nombre = "";
    consecutivo = "";
}

Libro::Libro(std::string pNombre, std::string pCategoria, int pConsecutivo) {
    nombre = pNombre;
    categoria = pCategoria;
    consecutivo = pConsecutivo;
}

void::Libro::setNombre(std::string pNombre) {
    nombre = pNombre;
};

void::Libro::setCategoria(std::string pCategoria) {
    categoria = pCategoria;
};

void::Libro::setConsecutivo(std::string pConsecutivo) {
    consecutivo = pConsecutivo;
};

std::string Libro::getNombre() {
    return nombre;
};

std::string Libro::getCategoria() {
    return categoria;
};

std::string Libro::getConsecutivo() {
    return consecutivo;
};

std::string Libro::toString() {
    return "El nombre del libro es " + nombre + " mi categoria es: " + categoria + ". Tengo de consecutivo: " + consecutivo;
}

Libro::~Libro() {
}
