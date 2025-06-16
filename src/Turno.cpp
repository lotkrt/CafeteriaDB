#include "../include/Turno.hpp"

Turno::Turno(int id, int idEmpleado, 
             const std::string& fecha, 
             const std::string& horaInicio, 
             const std::string& horaFin)
    : id(id), idEmpleado(idEmpleado), 
      fecha(fecha), horaInicio(horaInicio), horaFin(horaFin) {}

void Turno::mostrar() const {
    std::cout << *this;
}

int Turno::getId() const {
    return id;
}

int Turno::getIdEmpleado() const {
    return idEmpleado;
}

const std::string& Turno::getFecha() const {
    return fecha;
}

const std::string& Turno::getHoraInicio() const {
    return horaInicio;
}

const std::string& Turno::getHoraFin() const {
    return horaFin;
}

void Turno::setFecha(const std::string& nuevaFecha) {
    fecha = nuevaFecha;
}

void Turno::setHoraInicio(const std::string& nuevaHoraInicio) {
    horaInicio = nuevaHoraInicio;
}

void Turno::setHoraFin(const std::string& nuevaHoraFin) {
    horaFin = nuevaHoraFin;
}

std::ostream& operator<<(std::ostream& os, const Turno& turno) {
    os << "=== TURNO ===" << std::endl
       << "ID: " << turno.id << std::endl
       << "ID Empleado: " << turno.idEmpleado << std::endl
       << "Fecha: " << turno.fecha << std::endl
       << "Hora Inicio: " << turno.horaInicio << std::endl
       << "Hora Fin: " << turno.horaFin << std::endl
       << "=============";
    return os;
}
