#ifndef PEDIDO_HPP
#define PEDIDO_HPP

class Pedido {
private:
    int id;
    int idCliente;
    int* idProductos;
    int* cantidades;
    int numProductos;
    float total;

public:
    Pedido(int id, int idCliente, int* idProductos, int* cantidades, int numProductos);
    ~Pedido();
    
    float calcularTotal();
    void mostrarDatos() const;
    
    // Getters
    int getId() const;
    int getIdCliente() const;
    float getTotal() const;
    
    // Métodos para manejar productos
    void agregarProducto(int idProducto, int cantidad);
    void eliminarProducto(int idProducto);
};

#endif // PEDIDO_HPP
