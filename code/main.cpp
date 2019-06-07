#include <iostream>
#include "Matriz.h"

int main() {
    int filas = 4, columnas = 4;

    Matriz<int> matriz1(filas,columnas);
    Matriz<int> matriz2(4,4);
    for (int i = 0; i < filas; ++i){
        for (int j = 0; j < columnas; ++j){
            matriz1.set(i,j,12);
            matriz2.set(i,j,8);
        }
    }
    cout << "Matriz 1 \n";
    matriz1.print_matriz();
    cout << "Matriz 2 \n";
    matriz2.print_matriz();

    Matriz<int> matriz3(filas,columnas);

    if ( matriz2.igual_dimension(matriz1) ){
        matriz3 = matriz1 + matriz2;
        cout << "Matriz Suma \n";
        matriz3.print_matriz();
    } else {
        cout << "Dimensines distintas";
    }

    return 0;
}