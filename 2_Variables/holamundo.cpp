#include <iostream>

int main() {

    /*
        int x; // Declaracion
        x = 5; // Asignacion
    */

    // int: para enteros
    int x = 5;
    int y = 6;
    int suma = x + y;
    int edad = 24;
    int anio = 2024;
    int dias = 24;

    // double: para numeros decimales de doble precision
    double precio = 10.99;
    double promedio = 2.5;
    double temperatura = 25.1152;

    // float: para numeros decimales de precision simple
    float precio2 = 22.98;

    // char: para caracteres individuales (Siempre va entre comillas simples)
    char calificacion = 'A';
    char inicial = 'A';

    // bool: para valores booleanos (true o false)
    bool estudiante = false;
    bool encendido = true;
    bool venta = true;

    // std::string: para cadenas de texto
    std::string nombre = "Alexander";

    // Mostramos o imprimimos en consola
    std::cout<<"Hola "<<nombre;

    return 0;
}

// Salida: Hola Alexander