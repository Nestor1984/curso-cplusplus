#include <iostream>

int main()
{

    char op;
    double num1;
    double num2;
    double resultado;

    std::cout << "########## CALCULADORA ##########\n";

    std::cout << "Ingrese (+ - * /): ";
    std::cin >> op;

    std::cout << "Ingrese el Numero #1: ";
    std::cin >> num1;

    std::cout << "Ingrese el Numero #2: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            resultado = num1 + num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case '-':
            resultado = num1 - num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;

        case '*':
            resultado = num1 * num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        case '/':
            resultado = num1 / num2;
            std::cout << "El resultado es: " << resultado << std::endl;
            break;
        default:
            std::cout << "Error!\n";
    }

    std::cout << "#################################";

    /*
    Salida:
    ########## CALCULADORA ##########
    Ingrese (+ - * /): +
    Ingrese el Numero #1: 1
    Ingrese el Numero #2: 5
    El resultado es: 6
    #################################
    */

    return 0;
}