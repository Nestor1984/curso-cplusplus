/* namespace: es una forma de crear un bloque, y que todas las funciones que esten dentro del mismo, 
esten asociadas a ese namespace (o espacio de nombres) */

#include <iostream>

// Primer espacio de nombre
namespace primero {
    int x = 1;
}

// Segundo espacio de nombre
namespace segundo {
    int x = 2;
}

int main() {
    // using namespace std; // Usamos el espacio de nombre std (Ya no es necesario colocar 'std::' en nuestro codigo)
    using std::cout; // Permite usar 'cout' directamente en lugar de 'std::cout'
    using std::string; // Permite usar 'string' directamente en lugar de 'std::string'

    string nombre = "Alex";

    cout<<"X = "<<primero::x;

    return 0;
}

// Salida:  X = 1