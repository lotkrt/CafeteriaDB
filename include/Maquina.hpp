#ifndef MAQUINA_HPP
#define MAQUINA_HPP

#include <string>

class Maquina {
private:
    int id;
    std::string tipo;
    bool estado;

public:
    Maquina(int id, const std::string& tipo, bool estado = false);
    
    void encender();
    void apagar();
    void mostrarEstado() const;
    
    // Getters
    int getId() const;
    const std::string& getTipo() const;
    bool getEstado() const;
    
    // Setters
    void setTipo(const std::string& nuevoTipo);
};
#endif // MAQUINA_HPP
