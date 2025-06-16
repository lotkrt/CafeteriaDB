#include "../include/Proveedor.hpp"

Proveedor::Proveedor(int id, const std::string& nombre, 
                    const std::string& telefono, const std::string& direccion)
    : id(id), nombre(nombre), telefono(telefono), direccion(direccion) {}

void Proveedor::mostrarDatos() const {
    std::cout << *this;
}

int Proveedor::getId() const {
    return id;
}

const std::string& Proveedor::getNombre() const {
    return nombre;
}

const std::string& Proveedor::getTelefono() const {
    return telefono;
}

const std::string& Proveedor::getDireccion() const {
    return direccion;
}

void Proveedor::setNombre(const std::string& nuevoNombre) {
    nombre = nuevoNombre;
}

void Proveedor::setTelefono(const std::string& nuevoTelefono) {
    telefono = nuevoTelefono;
}

void Proveedor::setDireccion(const std::string& nuevaDireccion) {
    direccion = nuevaDireccion;
}

std::ostream& operator<<(std::ostream& os, const Proveedor& prov) {
    os << "=== PROVEEDOR ===" << std::endl
       << "ID: " << prov.id << std::endl
       << "Nombre: " << prov.nombre << std::endl
       << "Teléfono: " << prov.telefono << std::endl
       << "Dirección: " << prov.direccion << std::endl
       << "=================";
    return os;
}
