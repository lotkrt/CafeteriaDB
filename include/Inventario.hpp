#ifndef INVENTARIO_HPP
#define INVENTARIO_HPP

#include "Ingrediente.hpp" // Declaración adelantada

class Inventario {
private:
    Ingrediente** ingredientes;
    int numIngredientes;
    int capacidadMaxima;

public:
    Inventario(int max);
    ~Inventario();
    
    void agregarIngrediente(Ingrediente* ing);
    void actualizarStock(int id, float delta);
    void mostrarStock() const;
    
    // Getters
    int getNumIngredientes() const;
    int getCapacidadMaxima() const;
};

#endif // INVENTARIO_HPP
