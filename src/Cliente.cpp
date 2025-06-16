#include "../include/Cliente.hpp"


Cliente::Cliente():Persona() , ID(0), tipoCliente(""){
  
}
Cliente::Cliente(std::string& inName, std::string& inDNI ,std::string& inEmail,int inID, std::string& inTipoCliente) : Persona(inName,inDNI,inEmail),ID(inID),tipoCliente(inTipoCliente){}

  void Cliente::setID(int inID){
    ID = inID;
  }
  void Cliente::setTipoCliente(std::string& inTipoCliente){
  tipoCliente = inTipoCliente;

  }
int Cliente::getID(){return ID;}
std::string Cliente::getTipoCliente(){return tipoCliente;}

void Cliente::printInfo(){}

