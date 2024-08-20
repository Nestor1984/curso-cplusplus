#include <iostream> // Esta linea incluye la biblioteca estandar de entrada y salida de C++

// cout es el objeto para salida de datos.
// cin es el objeto para entrada de datos.
// << es el operador que se usa con cout para enviar datos a la consola.
// >> es el operador que se usa con cin para recibir datos desde la consola.

int main() {

    std::string nombre;
    int edad;

    std::cout << "Cual es tu edad? ";
    std::cin >> edad; // Leemos un entero y lo guardamos en la variable edad

    /*
    std::getline(std::cin >> std::ws, variable): lee toda una linea de texto hasta que encuentra un salto de linea.
    Sintaxis:
    std::cin: es el flujo de entrada.
    std::ws: limpia cualquier espacio en blanco que quede en el buffer (como el salto de linea que queda despues de introducir la edad).
    variable: es el nombre de la variable donde se guardara la linea completa que el usuario escriba.
    */

    std::cout << "Cual es su nombre completo? ";
    std::getline(std::cin>>std::ws, nombre); // Leemos una cadena con espacios y lo guardamos en la variable nombre

    std::cout << "Hola " << nombre << '\n';
    std::cout << "Tu edad es " << edad << " anios";

    /*
    Salida:
    Cual es tu edad? 20
    Cual es su nombre completo? Nestor Jhoel
    Hola Nestor Jhoel
    Tu edad es 20 anios
    */

    return 0;
}