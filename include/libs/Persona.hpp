#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>
class Persona {
protected:
  std::string name;
  std::string email;

private:
  std::string DNI;
  bool isValid_DNI(const std::string &inDNI) const;
  bool isValid_Email(const std::string &inEmail)const;

public:
  Persona();
  Persona(const std::string& inName, const std::string& inDNI, const std::string& inEmail);
 virtual ~Persona();


std::string getName() const;
    std::string getEmail() const ;
    std::string getDNI() const;


  virtual void setName(const std::string& inName);
  virtual void setEmail(const std::string& inEmail);
  void setDNI(const std::string& inDNI);
 virtual void printInfo()const;
  bool operator==(const Persona& other) const;
};

#endif // !PERSONA_HPP
