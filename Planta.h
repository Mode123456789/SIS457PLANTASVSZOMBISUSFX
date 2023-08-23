//#pragma once
//class Planta
//{
//
//};
#pragma once
#include <iostream>
using namespace std;

class Planta
{
private:
    int posicionX;
    int posicionY;
    int Salud;
    int costo;
    int tiempoDeRecarga;
    int da�o;
    int alcance;
    string nombre;
    string imagen;

public:
    Planta(string nombre, int costo, int tiempoDeRecarga, int da�o, int alcance, string imagen);

    void setCosto(int _costo) { costo = _costo; }
    int getCosto() { return costo; }

    void setTiempoDeRecarga(int _tiempoDeRecarga) { tiempoDeRecarga = _tiempoDeRecarga; }
    int getTiempoDeRecarga() { return tiempoDeRecarga; }

    void setDa�o(int _da�o) { da�o = _da�o; }
    int getDa�o() { return da�o; }

    void setAlcance(int _alcance) { alcance = _alcance; }
    int getAlcance() { return alcance; }


    void setImagen(string _imagen) { imagen = _imagen; }
    string getImagen() { return imagen; }

    void atacar();
    void recogerSol();
    void colocar(int x, int y);
    void verificarRecarga();
    void recibirDa�o(int da�o);
    void actualizar();
    void dibujar();

};
