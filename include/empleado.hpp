#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>
class empleado{
  private: 
  std::string name;
  std::string lastName;
  std::string email;

  int ID;
  std::string DNI;
  int salario;
  public: 
  
  empleado();
  
  void setName();
  void setLastName();
  void setEmail();
  void setID();
  
  std::string getName(std::string inName);
  std::string getLastName(std::string inLastName);
  std::string getEmail(std::string inEmail);



};







#endif // !EMPLEADO_HPP

