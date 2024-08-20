#include <iostream>
#include <cmath> // Libreria cmath

int main() {

    // max(): devuelve el mayor de dos valores
    double x = 8;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << z;
    std::cout << std::endl;
    // Salida: 8

    // min(): devuelve el menor de dos valores
    double x2 = 8;
    double y2 = 15;
    double z2;

    z2 = std::min(x2, y2);
    std::cout << z2;
    std::cout << std::endl;
    // Salida: 8

    // pow(): sirve para elevar una base a una potencia (pertenece a la libreria cmath)
    double z3;

    z3 = std::pow(2, 4);
    std::cout << z3;
    std::cout << std::endl;
    // Salida: 16

    // sqrt(): permite calcular la raiz cuadrada (pertenece a la libreria cmath)
    double z4;

    z4 = std::sqrt(25);
    std::cout << z4;
    std::cout << std::endl;
    // Salida: 5

    // abs(): esta funcion nos va devolver el valor absoluto de un numero (Su version para puntos flotantes pertenece a la libreria cmath)
    double z5;

    z5 = std::abs(-150);
    std::cout << z5;
    std::cout << std::endl;
    // Salida: 150

    // round(): esta funcion va redondear un valor (Si es menor a .5 va redondear hacia abajo y si es mayor o igual a .5 va redondear hacia arriba) (pertenece a la libreria cmath)
    double x3 = 3.14;
    double z6;

    z6 = std::round(x3);
    std::cout << z6;
    std::cout << std::endl;
    // Salida: 3

    // ceil(): esta funcion va redondear siempre hacia arriba (pertenece a la libreria cmath)
    double x4 = 3.1;
    double z7;

    z7 = std::ceil(x4);
    std::cout << z7;
    std::cout << std::endl;
    // Salida: 4

    // floor(): esta funcion va redondear siempre hacia abajo (pertenece a la libreria cmath)
    double x5 = 3.9;
    double z8;

    z8 = std::floor(x5);
    std::cout << z8;
    std::cout << std::endl;
    // Salida: 3

    return 0;
}