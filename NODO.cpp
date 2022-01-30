#include "NODO.h"

template <typename T>
NODO<T>::NODO(T dato, int m){
    mov = m;
    info = dato;
    siguiente = NULL;
}

template <typename T>
NODO<T>::~NODO(){
}

template <typename T>
void NODO<T>::setInfo(T dato){
    info = dato;
}

template <typename T>
T NODO<T>::getInfo(){
    return info;
}

template <typename T>
void NODO<T>::setSiguiente(NODO<T> *nuevo){
    siguiente = nuevo;
}

template <typename T>
NODO<T> *NODO<T>::getSiguiente(){
    return siguiente;
}

template <typename T>
void NODO<T>::print(){
    cout<<info<<endl;
}

template <typename T>
int NODO<T>::movimientos(int m){
    mov = mov + m;
    return mov;
}

template <typename T>
void NODO<T>::setMoves(int m){
    mov = mov + m;
}

template <typename T>
int NODO<T>::getMoves(){
    return mov;
}
