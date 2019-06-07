#include <iostream>
#include "Matriz.h"

int main() {
    int filas = 4, columnas = 4;

    Matriz<int> matriz1(filas,columnas);
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < columnas; ++j)
            matriz1.set(i,j,12);
    matriz1.print_matriz();

    return 0;
}