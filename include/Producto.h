#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>

class Producto{
public:

    int getId();
    void setId(int);
    std::string getName();
    void setName(std::string);
    int getStock();
    void setStock(int);
    int getPrecioInt();
    void setPrecioInt(int);
    int getPrecioDec();
    void setPrecioDec(int);
    int getCostoInt();
    void setCostoInt(int);
    int getCostoDec();
    void setCostooDec(int);

    void printPrecio();
    void printCosto();
    

private:
    int id;
    std::string name;
    int stock;
    bool isStockSet;
    int precioInt;
    int precioDec;
    int costoInt;
    int costoDec;

};
#endif