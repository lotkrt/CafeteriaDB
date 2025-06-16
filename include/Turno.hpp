#ifndef TURNO_HPP
#define TURNO_HPP

#include <string>
#include <iostream>

class Turno {
private:
    int id;
    int idEmpleado;
    std::string fecha;
    std::string horaInicio;
    std::string horaFin;

public:
    Turno(int id, int idEmpleado, 
          const std::string& fecha, 
          const std::string& horaInicio, 
          const std::string& horaFin);
    
    void mostrar() const;
    
    // Getters
    int getId() const;
    int getIdEmpleado() const;
    const std::string& getFecha() const;
    const std::string& getHoraInicio() const;
    const std::string& getHoraFin() const;
    
    // Setters
    void setFecha(const std::string& nuevaFecha);
    void setHoraInicio(const std::string& nuevaHoraInicio);
    void setHoraFin(const std::string& nuevaHoraFin);
    
    // Operador para facilitar la salida
    friend std::ostream& operator<<(std::ostream& os, const Turno& turno);
};

#endif // TURNO_HPP
