#include "../include/Inventario.hpp"
//#include "../include/Ingrediente.hpp"
#include <iostream>

Inventario::Inventario(int max) : capacidadMaxima(max), numIngredientes(0) {
    ingredientes = new Ingrediente*[capacidadMaxima];
    for (int i = 0; i < capacidadMaxima; ++i) {
        ingredientes[i] = nullptr;
    }
}

Inventario::~Inventario() {
    for (int i = 0; i < numIngredientes; ++i) {
        delete ingredientes[i];
    }
    delete[] ingredientes;
}

void Inventario::agregarIngrediente(Ingrediente* ing) {
    if (numIngredientes < capacidadMaxima) {
        ingredientes[numIngredientes++] = ing;
    } else {
        std::cerr << "Error: Inventario lleno, no se puede agregar más ingredientes" << std::endl;
    }
}

void Inventario::actualizarStock(int id, float delta) {
    for (int i = 0; i < numIngredientes; ++i) {
        if (ingredientes[i]->getId() == id) {
            ingredientes[i]->modificarCantidad(delta);
            return;
        }
    }
    std::cerr << "Error: Ingrediente con ID " << id << " no encontrado" << std::endl;
}

void Inventario::mostrarStock() const {
    std::cout << "=== INVENTARIO ===" << std::endl;
    for (int i = 0; i < numIngredientes; ++i) {
        ingredientes[i]->mostrar();
    }
    std::cout << "==================" << std::endl;
}

int Inventario::getNumIngredientes() const {
    return numIngredientes;
}

int Inventario::getCapacidadMaxima() const {
    return capacidadMaxima;
}
