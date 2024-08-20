#include <iostream>

int main() {

    // Operador ternario ?: = es un reemplazo para usar una declaracion if-else.
    // condicion ? expresion1 : expresion2;

    int calificacion = 50;
    calificacion >= 60 ? std::cout << "Pasas!" : std::cout << "Fallaste!";
    // Salida: Fallaste!

    std::cout << std::endl;

    int numero = 15;
    numero % 2 ? std::cout << "impar" : std::cout << "par";
    // Salida: impar

    std::cout << std::endl;

    bool hambriento = false;
    hambriento ? std::cout << "tienes hambre" : std::cout << "estas lleno";
    // Salida: estas lleno

    return 0;
}