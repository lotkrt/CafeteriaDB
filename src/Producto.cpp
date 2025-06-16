#include <string>
#include <iostream>
#include "../include/Producto.h"

int Producto::getId(){return id;}
void Producto::setId(int id){this->id = id;}
std::string Producto::getName(){return name;}
void Producto::setName(std::string name){this->name = name;}
int Producto::getStock(){return stock;}
void Producto::setStock(int inStock){
    stock = inStock;
}
int Producto::getPrecioInt(){return precioInt;}
void Producto::setPrecioInt(int precioInt){this->precioInt = precioInt;}
int Producto::getPrecioDec(){return precioDec;}
void Producto::setPrecioDec(int precioDec){this->precioDec = precioDec;}
int Producto::getCostoInt(){return costoInt;}
void Producto::setCostoInt(int costoInt){this->costoInt = costoInt;}
int Producto::getCostoDec(){return costoDec;}
void Producto::setCostooDec(int costoDec){this->costoDec = costoDec;}

void Producto::printPrecio(){
    std::cout << precioInt << '.' << precioDec;
}
void Producto::printCosto(){
    std::cout << costoInt << '.' << costoDec;
}
