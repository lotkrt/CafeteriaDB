#include "../include/Ingrediente.hpp"
#include <iostream>
Ingrediente::Ingrediente(int id, const std::string& nombre, const std::string& unidadMedida,
                         float cantidad, float cantidadMinima, const std::string& proveedorPrincipal)
    : id(id), nombre(nombre), unidadMedida(unidadMedida), 
      cantidad(cantidad), cantidadMinima(cantidadMinima), 
      proveedorPrincipal(proveedorPrincipal) {}

// Métodos de modificación
void Ingrediente::modificarCantidad(float delta) {
    cantidad += delta;
    if (cantidad < 0) cantidad = 0;  // No permitir cantidades negativas
}

void Ingrediente::ajustarCantidadMinima(float nuevaCantidadMinima) {
    if (nuevaCantidadMinima >= 0) {
        cantidadMinima = nuevaCantidadMinima;
    }
}

void Ingrediente::cambiarProveedor(const std::string& nuevoProveedor) {
    proveedorPrincipal = nuevoProveedor;
}

// Métodos de consulta
void Ingrediente::mostrar() const {
    std::cout<<getNombre();
    std::cout<<getId();
}

bool Ingrediente::necesitaReponer() const {
    return cantidad < cantidadMinima;
}

// Getters
int Ingrediente::getId() const {
    return id;
}

const std::string& Ingrediente::getNombre() const {
    return nombre;
}

const std::string& Ingrediente::getUnidadMedida() const {
    return unidadMedida;
}

float Ingrediente::getCantidad() const {
    return cantidad;
}

float Ingrediente::getCantidadMinima() const {
    return cantidadMinima;
}

const std::string& Ingrediente::getProveedorPrincipal() const {
    return proveedorPrincipal;
}

// Setters
void Ingrediente::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Ingrediente::setUnidadMedida(const std::string& nuevaUnidad) {
    unidadMedida = nuevaUnidad;
}
