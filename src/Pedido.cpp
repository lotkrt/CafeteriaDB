#include "../include/Pedido.hpp"
#include <iostream>

Pedido::Pedido(int id, int idCliente, int* idProductos, int* cantidades, int numProductos) 
    : id(id), idCliente(idCliente), numProductos(numProductos), total(0) {
    
    this->idProductos = new int[numProductos];
    this->cantidades = new int[numProductos];
    
    for (int i = 0; i < numProductos; ++i) {
        this->idProductos[i] = idProductos[i];
        this->cantidades[i] = cantidades[i];
    }
    
    calcularTotal();
}

Pedido::~Pedido() {
    delete[] idProductos;
    delete[] cantidades;
}

float Pedido::calcularTotal() {
    // En una implementación real, aquí se consultaría el precio de cada producto
    // y se calcularía el total real. Por ahora usamos un valor simulado.
    total = 0;
    for (int i = 0; i < numProductos; ++i) {
        total += cantidades[i] * 10.0f; // Suponemos que cada producto cuesta 10
    }
    return total;
}

void Pedido::mostrarDatos() const {
    std::cout << "=== PEDIDO ===" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Cliente: " << idCliente << std::endl;
    std::cout << "Productos:" << std::endl;
    
    for (int i = 0; i < numProductos; ++i) {
        std::cout << "  - Producto ID: " << idProductos[i] 
                  << ", Cantidad: " << cantidades[i] << std::endl;
    }
    
    std::cout << "Total: $" << total << std::endl;
    std::cout << "=============" << std::endl;
}

// Implementación de getters y métodos de manejo de productos...
