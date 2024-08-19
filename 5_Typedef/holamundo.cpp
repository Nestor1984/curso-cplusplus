// Typedef y Type Aliases
/*
typedef: es una palabra reservada. Su funcion es asignar un nombre alternativo a tipos
existentes.

Sintaxis:
typedef tipoDeDato alias;

Otra forma es usando 'using'.

Sintaxis:
using alias = tipoDeDato;
*/

#include <iostream>

// typedef std::string text_t;
// typedef int numero_t;
using text_t = std::string;
using numero_t = int;

int main() {

    text_t nombre = "Alex"; // Dato de tipo string
    numero_t edad = 24; // Dato de tipo int

    std::cout<<nombre<<" "<<edad<<std::endl;

    return 0;
}

// Salida: Alex 24