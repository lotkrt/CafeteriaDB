#ifndef FACTURA_HPP
#define FACTURA_HPP

#include <string>

class Factura {
private:
    int id;
    int idPedido;
    std::string fecha;
    float impuesto;
    float total;

public:
    Factura(int id, int idPedido, const std::string& fecha, float impuesto = 0.16f, float total = 0);
    
    void mostrar() const;
    
    // Getters
    int getId() const;
    int getIdPedido() const;
    const std::string& getFecha() const;
    float getImpuesto() const;
    float getTotal() const;
    
    // Setters
    void setFecha(const std::string& nuevaFecha);
    void setImpuesto(float nuevoImpuesto);
    void setTotal(float nuevoTotal);
};

#endif // FACTURA_HPP
