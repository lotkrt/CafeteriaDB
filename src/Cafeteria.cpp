#include "../include/Cafeteria.hpp"
#include <iostream>
#include <algorithm>
#include <ostream>

using namespace std;

// Constructor
Cafeteria::Cafeteria(const string& nombre, const string& direccion) 
    : nombre(nombre), direccion(direccion), inventario(100) {}

// Métodos de gestión de empleados
void Cafeteria::altaEmpleado(const Empleado& e) {
    empleados.push_back(e);
}

void Cafeteria::bajaEmpleado(int id) {
    empleados.erase(
        remove_if(empleados.begin(), empleados.end(),
            [id](const Empleado& e) { return e.getID() == id; }),
        empleados.end()
    );
}

Empleado* Cafeteria::buscarEmpleado(int id) {
    auto it = find_if(empleados.begin(), empleados.end(),
        [id](const Empleado& e) { return e.getID() == id; });
    return it != empleados.end() ? &(*it) : nullptr;
}

// Métodos similares para otras entidades (implementación patrón similar)
// ...

// Métodos para pedidos y facturación
void Cafeteria::registrarPedido(const Pedido& p) {
    pedidos.push_back(p);
}

Factura* Cafeteria::generarFactura(int idPedido) {
    
    return nullptr;
}

// Métodos de consulta
void Cafeteria::mostrarResumen() const {
    cout << "=== RESUMEN CAFETERÍA ===" << endl
         << "Nombre: " << nombre << endl
         << "Dirección: " << direccion << endl
         << "--- Estadísticas ---" << endl
         << "Empleados: " << empleados.size() << endl
         << "Clientes: " << clientes.size() << endl
         << "Productos: " << productos.size() << endl
         << "Máquinas: " << maquinas.size() << endl
         << "Mesas: " << mesas.size() << endl
         << "Pedidos: " << pedidos.size() << endl
         << "Facturas: " << facturas.size() << endl
         << "Proveedores: " << proveedores.size() << endl
         << "Turnos: " << turnos.size() << endl;
}

void Cafeteria::mostrarEmpleados() const {
    cout << "=== EMPLEADOS ===" << endl;
    for (const auto& e : empleados) {
        cout << e.getName() <<"_"<< e.getID()<<endl;
    }
}

// Implementaciones similares para otros métodos de mostrar...
// ...

// Getters
const string& Cafeteria::getNombre() const { return nombre; }
const string& Cafeteria::getDireccion() const { return direccion; }
const Inventario& Cafeteria::getInventario() const { return inventario; }
size_t Cafeteria::getNumEmpleados() const { return empleados.size(); }
// ... otros getters

// Setters
void Cafeteria::setNombre(const string& nuevoNombre) { nombre = nuevoNombre; }
void Cafeteria::setDireccion(const string& nuevaDireccion) { direccion = nuevaDireccion; }



