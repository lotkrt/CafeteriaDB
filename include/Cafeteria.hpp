#ifndef CAFETERIA_HPP
#define CAFETERIA_HPP

#include <string>
#include <vector>



#include "Empleado.hpp"
#include "Cliente.hpp"
#include "Producto.h"
#include "Maquina.hpp"
#include "Mesa.hpp"
#include "Inventario.hpp"
#include "Pedido.hpp"
#include "Factura.hpp"
#include "Proveedor.hpp"
#include "Turno.hpp"

class Cafeteria {
private:
    std::string nombre;
    std::string direccion;
    
    std::vector<Empleado> empleados;
    std::vector<Cliente> clientes;
    std::vector<Producto> productos;
    std::vector<Maquina> maquinas;
    std::vector<Mesa> mesas;
    Inventario inventario;
    std::vector<Pedido> pedidos;
    std::vector<Factura> facturas;
    std::vector<Proveedor> proveedores;
    std::vector<Turno> turnos;

public:
    // Constructor y destructor
    Cafeteria(const std::string& nombre, const std::string& direccion);
    ~Cafeteria() = default;
    
    //gestión de empleados
    void altaEmpleado(const Empleado& inEmpleado);
    void bajaEmpleado(int inID);
    Empleado* buscarEmpleado(int inID);
    
    //gestión de clientes
    void altaCliente(const Cliente& c);
    void bajaCliente(int id);
    Cliente* buscarCliente(int id);
    
    //gestión de productos
    void altaProducto(const Producto& p);
    void bajaProducto(int id);
    Producto* buscarProducto(int id);
    
    // maquinas
    void agregarMaquina(const Maquina& m);
    void removerMaquina(int id);
    Maquina* buscarMaquina(int id);
    
    // Métodos para mesas
    void agregarMesa(const Mesa& m);
    void removerMesa(int id);
    Mesa* buscarMesa(int id);
    
    //pedidos y facturación
    void registrarPedido(const Pedido& p);
    void cancelarPedido(int id);
    Factura* generarFactura(int idPedido);
    
    // proveedores
    void agregarProveedor(const Proveedor& p);
    void removerProveedor(int id);
    Proveedor* buscarProveedor(int id);
    
    // turnos
    void agregarTurno(const Turno& t);
    void removerTurno(int id);
    std::vector<Turno> obtenerTurnosPorEmpleado(int idEmpleado) const;
    
    // consulta
    void mostrarResumen() const;
    void mostrarEmpleados() const;
    void mostrarClientes() const;
    void mostrarProductos() const;
    void mostrarMaquinas() const;
    void mostrarMesas() const;
    void mostrarPedidos() const;
    void mostrarFacturas() const;
    void mostrarProveedores() const;
    void mostrarTurnos() const;
    
    // Getters
    const std::string& getNombre() const;
    const std::string& getDireccion() const;
    const Inventario& getInventario() const;
    size_t getNumEmpleados() const;
    size_t getNumClientes() const;
    size_t getNumProductos() const;
    size_t getNumMaquinas() const;
    size_t getNumMesas() const;
    size_t getNumPedidos() const;
    size_t getNumFacturas() const;
    size_t getNumProveedores() const;
    size_t getNumTurnos() const;
    
    // Setters
    void setNombre(const std::string& nuevoNombre);
    void setDireccion(const std::string& nuevaDireccion);
    
    // Operador de salida
    friend std::ostream& operator<<(std::ostream& os, const Cafeteria& caf);
};

#endif // CAFETERIA_HPP



