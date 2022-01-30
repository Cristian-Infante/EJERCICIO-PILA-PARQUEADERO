#include "PILA.h"

template <typename T>
PILA<T>::PILA(){
    top = nullptr;
}

template <typename T>
PILA<T>::~PILA(){
    /*NODO<T> *aux;
    while(top != nullptr){
        aux = top;
        top = aux->getSiguiente();
        delete aux;
    }*/
}

template <typename T>
bool PILA<T>::isEmpty(){
    if(top == nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
T PILA<T>::Top(){
    return top->getInfo();
}

template <typename T>
void PILA<T>::push(T dato, int m){
    if(search(dato)==false){
        if(top==nullptr){
            top = new NODO<T>(dato, m);
            top->setSiguiente(nullptr);
        }
        else{
            NODO<T> *nuevo = new NODO<T>(dato, m);
            nuevo->setSiguiente(top);
            top = nuevo;
        }
    }
    else{
        cout<<endl<<"\tEl carro ya se encuentra parqueado"<<endl;
        getch();
    }
}

template <typename T>
T PILA<T>::pop(){
    if(top==nullptr){
        cout<<endl<<"\tPila vacia"<<endl;
    }
    else{
        NODO<T> *aux = top;
        top = aux->getSiguiente();
        return aux->getInfo();
    }
}

template <typename T>
void PILA<T>::print(){
    NODO<T> *aux = top;
    cout<<endl;
    while(aux != nullptr){
        cout<<"\t"<<aux->getInfo()<<endl;
        aux = aux->getSiguiente();
    }
}

template <typename T>
bool PILA<T>::search(T dato){
    NODO<T> *aux = top;
    int cont;
    while((aux!=nullptr)&&(aux->getInfo()!=dato)){
        aux = aux->getSiguiente();
        cont++;
    }
    if(aux!=nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
int PILA<T>::moves(){
    int x = top->movimientos(0);
    return x;
}

template <typename T>
int PILA<T>::Gmoves(int m){
    movesG = movesG + m;
    return movesG;
}
