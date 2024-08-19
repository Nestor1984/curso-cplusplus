// Primer Programa

#include <iostream> // Esta linea incluye la biblioteca estandar de entrada y salida en C++

// La funcion principal del programa. main es el punto de inicio de ejecucion del programa.
int main() {
    /*
    std::cout: Se utiliza para imprimir datos y texto en la consola.
    <<: Permite encadenar multiples inserciones en una sola linea.
    std::endl: Inserta un salto de linea en la salida.
    \n: Es un caracter especial que representa un salto de linea.
    return 0: Finaliza la funcion main y el programa, devolviendo 0 para senalar que no ocurrieron errores durante la ejecucion.
    */
    std::cout<<"Hola Mundo!"<<std::endl;
    std::cout<<"Me gusta la Pizza!";
    std::cout<<std::endl;
    std::cout<<"Hola Mundo!"<<'\n';
    std::cout<<"Me gusta la Pizza!";
    return 0;    
}

/*
Salida:
Hola Mundo!
Me gusta la Pizza!
Hola Mundo!
Me gusta la Pizza!
*/