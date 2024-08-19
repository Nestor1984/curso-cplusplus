// Programa para calcular la circunferencia de un circulo

#include <iostream>

int main() {
    // const: especifica que el valor de una variable es constante

    const double PI = 3.14159;
    double radio = 10;
    double circunferencia = 2 * PI * radio;

    // Mostramos en consola
    std::cout<<circunferencia<<" centimetros";

    return 0;
}

// Salida: 62.8318 centimetros