//
// Created by jeanlee on 7/06/19.
//

#ifndef CODE_MATRIZ_H
#define CODE_MATRIZ_H

#include <iostream>
using namespace std;

template <typename T>
class Matriz{
    int filas;
    int columnas;
    T** matriz;
public:
    Matriz():filas{0}, columnas{0} {};
    Matriz(T filas, T columnas):filas{filas}, columnas{columnas} {
        matriz = new T* [filas];
        for (int i = 0; i < filas; ++i)
            matriz[i] = new T[columnas];
    }

    T get(int i, int j){
        return matriz[i][j];
    }
    T get_filas(){
        return filas;
    }
    T get_columnas(){
        return columnas;
    }

    void set(int pos_fila, int pos_columna, T valor){
        matriz[pos_fila][pos_columna] = valor;
    }

    Matriz operator+(Matriz other) const{
        Matriz<T> temp(filas,columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j)
                temp.set(i,j,matriz[i][j] + other.get(i,j));
        }
        return temp;
    }

    Matriz&operator=(Matriz other){
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                matriz[i][j] = other.get(i,j);
            }
        }
    }

    bool igual_dimension(Matriz other){
        return ((filas == other.get_filas()) && (columnas == other.get_columnas()));
    }

    void print_matriz(){
        for (int i = 0; i < filas; ++i){
            for (int j = 0; j < columnas; ++j)
                cout << matriz[i][j] << "\t";
            cout<<endl;
        } cout<<endl;
    }
    /*~Matriz(){
        for (int i = 0; i < filas; ++i)
            delete matriz[i];
        delete[] matriz;
    }*/
};

#endif //CODE_MATRIZ_H
