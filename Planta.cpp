#include "Planta.h"

Planta::Planta(string _nombre, int _costo, int _tiempoDeRecarga, int _da�o, int _alcance, string _imagen){ 
    nombre = _nombre;
    Salud = 100; // Valor predeterminado
    posicionX = 0;       // Valor predeterminado
    posicionY = 0;       // Valor predeterminado
}

void Planta::atacar() {
    // L�gica de ataque a un zombi espec�fico
}
void Planta::recogerSol() {
    // L�gica para recoger soles del suelo
    // ...
}

void Planta::colocar(int x, int y) {
    posicionX = x;
    posicionY = y;
    cout << "la planta esta en la posicion x = 70.0f" << endl;
}

void Planta::verificarRecarga() {
    // L�gica para verificar si la planta est� lista para atacar nuevamente

}
void Planta::recibirDa�o(int da�o) {
    Salud -= da�o;
    // L�gica para manejar el da�o recibido

}

void Planta::actualizar() {
    // L�gica para actualizar el estado de la planta en cada turno

}

void Planta::dibujar() {
    // L�gica para dibujar la imagen de la planta en su posici�n
}
