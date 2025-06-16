#ifndef INGREDIENTE_HPP
#define INGREDIENTE_HPP


#include <string>


class Ingrediente {
private:
    int id;
    std::string nombre;
    std::string unidadMedida;  // "kg", "litros", "unidades", etc.
    float cantidad;
    float cantidadMinima;      // Nivel mínimo de stock
    std::string proveedorPrincipal;

public:
    // Constructor
    Ingrediente(int id, const std::string& nombre, const std::string& unidadMedida, 
               float cantidad, float cantidadMinima, const std::string& proveedorPrincipal);
    
    // Métodos de modificación
    void modificarCantidad(float delta);
    void ajustarCantidadMinima(float nuevaCantidadMinima);
    void cambiarProveedor(const std::string& nuevoProveedor);
    
    // Métodos de consulta
    void mostrar() const;
    bool necesitaReponer() const;
    
    // Getters
    int getId() const;
    const std::string& getNombre() const;
    const std::string& getUnidadMedida() const;
    float getCantidad() const;
    float getCantidadMinima() const;
    const std::string& getProveedorPrincipal() const;
    
    // Setters
    void setNombre(const std::string& nuevoNombre);
    void setUnidadMedida(const std::string& nuevaUnidad);
    
  
};
#endif // !INGREDIENTE_HPP
