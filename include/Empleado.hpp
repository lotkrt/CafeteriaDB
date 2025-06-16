#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include "libs/Persona.hpp"
class Empleado : public Persona {
private:
  int ID;
  int salario;

public:
  Empleado();
  Empleado(std::string inName, std::string inDNI , std::string inEmail,int ID , int salario);

  void setID(int inID);
  void setSalario(int inSalario);

  int getID() const;
  int getSalario() const;

  //-----
  void aumentarSalario(int porcentaje);
  void printInfo() const;

  // brecargaroperadores ==
};

#endif // !EMPLEADO_HPP
