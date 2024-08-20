#include <iostream>

int main()
{

    // break: evita que el programa continue con los siguientes casos

    char calificacion;

    std::cout << "Calificacion: ";
    std::cin >> calificacion;

    switch (calificacion){
        case 'a':
            std::cout << "Lo hiciste genial!";
            break;
        case 'b':
            std::cout << "Lo hiciste muy bien";
            break;
        case 'c':
            std::cout << "Lo hiciste bien";
            break;
        case 'd':
            std::cout << "No lo hiciste bien";
            break;
        case 'f':
            std::cout << "Fallaste";
            break;
        default:
            std::cout << "Por favor, solo ingrese una letra de grado de la A a la F.";
            // No hace falta un break, por que no hay mas casos abajo
    }

    /*
    Salida:
    Calificacion: a
    Lo hiciste genial!
    */

    return 0;
}