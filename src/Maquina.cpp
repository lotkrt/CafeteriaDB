#include "../include/Maquina.hpp"
#include <iostream>

Maquina::Maquina(int id, const std::string& tipo, bool estado) 
    : id(id), tipo(tipo), estado(estado) {}

void Maquina::encender() {
    estado = true;
}

void Maquina::apagar() {
    estado = false;
}

void Maquina::mostrarEstado() const {
    std::cout << "Máquina ID: " << id 
              << "\nTipo: " << tipo 
              << "\nEstado: " << (estado ? "Encendida" : "Apagada") 
              << std::endl;
}

int Maquina::getId() const {
    return id;
}

const std::string& Maquina::getTipo() const {
    return tipo;
}

bool Maquina::getEstado() const {
    return estado;
}

void Maquina::setTipo(const std::string& nuevoTipo) {
    tipo = nuevoTipo;
}
