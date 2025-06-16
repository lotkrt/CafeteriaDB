#include "../../include/libs/Persona.hpp"

#include <iostream>
#include <string>

bool Persona::isValid_DNI(const std::string &dni) const {
  if (dni.length() != 8) {
    return false;
  }

  for (char c : dni) {
    if (!isdigit(c)) {
      return false;
    }
  }

  return true;
}

bool Persona::isValid_Email(const std::string &email) const {

  // si almenos se tiene un @ y un punto
  size_t arroba = email.find('@');
  if (arroba == std::string::npos || arroba == 0) {
    return false;
  }

  size_t punto = email.find('.', arroba);
  if (punto == std::string::npos || punto == email.length() - 1) {
    return false;
  }

  return true;
}
// Constructores
Persona::Persona() : name(""), email(""), DNI("") {}

Persona::Persona(const std::string &inName, const std::string &inDNI,
                 const std::string &inEmail) {
  setName(inName);
  setEmail(inEmail);
  setDNI(inDNI);
}


Persona::~Persona() = default;

std::string Persona::getName() const { return name; }
std::string Persona::getEmail() const { return email; }
std::string Persona::getDNI() const { return DNI; }

void Persona::setName(const std::string &newName) {
  if (!newName.empty()) {
  name = newName;
  }
  else{
    std::cout<<"incorrect Name parameter";
  }

}

void Persona::setEmail(const std::string &newEmail) {
  if (isValid_Email(newEmail)) {
  email = newEmail;}
  else{
    std::cout<<"incorrect Email parameter";
  }
}

void Persona::setDNI(const std::string &newDNI) {
  if (isValid_DNI(newDNI)) {
    DNI = newDNI;
  } else {
    std::cout << "incorrect DNI parameter";
  }
}

// Métodos adicionales
void Persona::printInfo() const {
  std::cout << "Información de Persona:\n"
            << "  Nombre: " << name << "\n"
            << "  Email: " << email << "\n"
            << "  DNI: " << DNI << "\n";
}

// Operadores
bool Persona::operator==(const Persona &other) const {
  return DNI == other.DNI;
}
