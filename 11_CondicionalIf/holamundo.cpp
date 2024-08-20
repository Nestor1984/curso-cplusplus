#include <iostream>

int main() {

    int edad;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    if(edad >= 100) { // Si
        std::cout << "Eres demasiado mayor para ingresar a este sitio!";
    }
    else if(edad < 0) { // Sino si
        std::cout << "Todavia no has nacido!";
    }
    else if (edad >= 18) { // Sino si
        std::cout << "Bienvenido al sitio";
    }
    else { // Sino
        std::cout << "No tienes la edad suficiente para entrar";
    }

    /*
    Salida:
    Ingresa tu edad: 20
    Bienvenido al sitio
    */
    
    return 0;
}