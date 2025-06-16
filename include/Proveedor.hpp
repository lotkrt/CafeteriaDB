#ifndef PROVEEDOR_HPP
#define PROVEEDOR_HPP

#include <string>
#include <iostream>

class Proveedor {
private:
    int id;
    std::string nombre;
    std::string telefono;
    std::string direccion;

public:
    Proveedor(int id, const std::string& nombre, const std::string& telefono, const std::string& direccion);
    
    void mostrarDatos() const;
    
    // Getters
    int getId() const;
    const std::string& getNombre() const;
    const std::string& getTelefono() const;
    const std::string& getDireccion() const;
    
    // Setters
    void setNombre(const std::string& nuevoNombre);
    void setTelefono(const std::string& nuevoTelefono);
    void setDireccion(const std::string& nuevaDireccion);
    
    // Operador para facilitar la salida
    friend std::ostream& operator<<(std::ostream& os, const Proveedor& prov);
};

#endif // PROVEEDOR_HPP
