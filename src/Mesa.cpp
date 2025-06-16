#include "../include/Mesa.hpp"

#include <iostream>

// Constructor
Mesa::Mesa(int id, int num, int cap, bool disp) 
    : ID(id), numero(num), capacidad(cap), disponible(disp) {}

// Getters
int Mesa::getID() const {
    return ID;
}

int Mesa::getNumero() const {
    return numero;
}

int Mesa::getCapacidad() const {
    return capacidad;
}

bool Mesa::isDisponible() const {
    return disponible;
}

// Setters
void Mesa::setNumero(int nuevoNumero) {
    numero = nuevoNumero;
}

void Mesa::setCapacidad(int nuevaCapacidad) {
    capacidad = nuevaCapacidad;
}

void Mesa::setDisponible(bool disponibilidad) {
    disponible = disponibilidad;
}


void Mesa::ocuparMesa() {
    disponible = false;
}

void Mesa::liberarMesa() {
    disponible = true;
}

void Mesa::mostrarInformacion() const {
    std::cout << "Mesa #" << numero 
              << " (ID: " << ID << ")"
              << "\nCapacidad: " << capacidad << " personas"
              << "\nEstado: " << (disponible ? "Disponible" : "Ocupada") 
              << std::endl;
}

bool Mesa::operator<(const Mesa& otra) const {
    // ordenar por numero de Mesa por defecto
    return numero < otra.numero;
}

