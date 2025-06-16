#include "../include/Factura.hpp"
#include <iostream>

Factura::Factura(int id, int idPedido, const std::string& fecha, float impuesto, float total) 
    : id(id), idPedido(idPedido), fecha(fecha), impuesto(impuesto), total(total) {}

void Factura::mostrar() const {
    std::cout << "=== FACTURA ===" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Pedido: " << idPedido << std::endl;
    std::cout << "Fecha: " << fecha << std::endl;
    std::cout << "Impuesto: " << (impuesto * 100) << "%" << std::endl;
    std::cout << "Total: $" << total << std::endl;
    std::cout << "Total con impuesto: $" << total * (1 + impuesto) << std::endl;
    std::cout << "===============" << std::endl;
}

// Implementación de getters y setters...
int Factura::getId() const { return id; }
int Factura::getIdPedido() const { return idPedido; }
const std::string& Factura::getFecha() const { return fecha; }
float Factura::getImpuesto() const { return impuesto; }
float Factura::getTotal() const { return total; }

void Factura::setFecha(const std::string& nuevaFecha) { fecha = nuevaFecha; }
void Factura::setImpuesto(float nuevoImpuesto) { impuesto = nuevoImpuesto; }
void Factura::setTotal(float nuevoTotal) { total = nuevoTotal; }
