#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include "libs/Persona.hpp"
#include <string>


class Cliente : public Persona {
public:
  int ID;
  std::string tipoCliente; //premium, regular, ocasional 

private:
  Cliente();
  Cliente(std::string& inName, std::string& inDNI ,std::string& inEmail,int inID, std::string& inTipoCliente);

  void setID(int inID);
  void setTipoCliente(std::string& inTipoCliente);
int getID();
std::string getTipoCliente();

void printInfo();

};

#endif // !CLIENTE_HPP
