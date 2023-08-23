#include "Planta.h"

Planta::Planta(string _nombre, int _costo, int _tiempoDeRecarga, int _daño, int _alcance, string _imagen){ 
    nombre = _nombre;
    Salud = 100; // Valor predeterminado
    posicionX = 0;       // Valor predeterminado
    posicionY = 0;       // Valor predeterminado
}

void Planta::atacar() {
    // Lógica de ataque a un zombi específico
}
void Planta::recogerSol() {
    // Lógica para recoger soles del suelo
    // ...
}

void Planta::colocar(int x, int y) {
    posicionX = x;
    posicionY = y;
    cout << "la planta esta en la posicion x = 70.0f" << endl;
}

void Planta::verificarRecarga() {
    // Lógica para verificar si la planta está lista para atacar nuevamente

}
void Planta::recibirDaño(int daño) {
    Salud -= daño;
    // Lógica para manejar el daño recibido

}

void Planta::actualizar() {
    // Lógica para actualizar el estado de la planta en cada turno

}

void Planta::dibujar() {
    // Lógica para dibujar la imagen de la planta en su posición
}
