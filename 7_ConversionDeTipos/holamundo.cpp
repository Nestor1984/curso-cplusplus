#include <iostream>

int main() {
    int PCorrecta = 8;
    int PTotal = 10;

    double puntaje = PCorrecta / (double)PTotal * 100; // Convertimos PTotal a double

    std::cout<< puntaje << "%";

    return 0;
}

// Salida: 80%