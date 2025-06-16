#ifndef MESA_HPP
#define MESA_HPP

class Mesa {
private:
    int ID;
    int numero;
    int capacidad;
    bool disponible;

public:
    Mesa(int id, int numero, int capacidad, bool disponible = true);

    int getID() const;
    int getNumero() const;
    int getCapacidad() const;
    bool isDisponible() const;

    void setNumero(int nuevoNumero);
    void setCapacidad(int nuevaCapacidad);
    void setDisponible(bool disponibilidad);

    
    void ocuparMesa();
    void liberarMesa();
    void mostrarInformacion() const;

    // operador de comparación para ordenar mesas
    bool operator<(const Mesa& otra) const;
};

#endif // MESA_HPP
