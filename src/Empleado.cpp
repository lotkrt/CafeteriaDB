#include "../include/Empleado.hpp"
#include <iostream>

// Constructores
Empleado::Empleado() : Persona(), ID(0), salario(0) {}

Empleado::Empleado(std::string inName, std::string inDNI , std::string inEmail,int inID , int inSalario)
    : Persona(inName,inDNI,inEmail),
      ID(inID),salario(inSalario) {}

void Empleado::setID(int inID) { ID = inID; }
void Empleado::setSalario(int inSalario) { salario = inSalario; }

int Empleado::getID() const { return ID; }
int Empleado::getSalario() const { return salario; }

//---

void Empleado::aumentarSalario(int porcentaje) {
  if (porcentaje > 0) {
    salario += salario * porcentaje / 100;
  }
}

void Empleado::printInfo() const {
  std::cout << "Empleado: " << name << "\n"
            << "ID: " << ID << "\n"
            << "DNI: " << getDNI() << "\n"
            << "Email: " << email << "\n"
            << "Salario: $" << salario << std::endl;
}

