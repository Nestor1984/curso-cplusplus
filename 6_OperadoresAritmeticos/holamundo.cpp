#include <iostream>

int main() {

    // Suma
    int estudiantes = 20;
    // estudiantes = estudiantes + 2;
    // estudiantes += 2;
    estudiantes++;
    std::cout<<estudiantes<<std::endl;
    // Salida: 21

    // Resta
    estudiantes = 20;
    // estudiantes = estudiantes - 2;
    // estudiantes -= 2;
    estudiantes--;
    std::cout<<estudiantes<<std::endl;
    // Salida: 19

    // Multiplicacion
    estudiantes = 20;
    // estudiantes = estudiantes * 3;
    estudiantes *= 3;
    std::cout<<estudiantes<<std::endl;
    // Salida: 60

    // Division
    double estudiantes2 = 20;
    // estudiantes2 = estudiantes2 / 3;
    estudiantes2 /= 3;
    std::cout<<estudiantes2<<std::endl;
    // Salida: 6.66667

    // Modulo (%)
    estudiantes = 21;
    int resto = estudiantes % 2;
    std::cout<<resto<<std::endl;
    // Salida: 1

    return 0;
}