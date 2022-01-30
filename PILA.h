#ifndef PILA_H
#define PILA_H
#include "NODO.cpp"

template <class T>
class PILA{
    private:
        int movesG;
    public:
        NODO<T> *top;
        PILA();
        ~PILA();
        bool isEmpty();
        T Top();
        void push(T,int);
        T pop();
        void print();
        bool search(T);
        int moves();
        int Gmoves(int);
};

#endif // PILA_H
