#ifndef NODO_H
#define NODO_H
#include "string"
#include "iostream"
#include "conio.h"
using namespace std;

template <class T>
class NODO{
    private:
        T info;
        NODO<T> *siguiente;
        int mov;
    public:
        int movimientos(int);
        void setMoves(int);
        int getMoves();
        NODO(T,int);
        ~NODO();
        void setInfo(T);
        T getInfo();
        void setSiguiente(NODO<T> *);
        NODO *getSiguiente();
        void print();
};

#endif // NODO_H
