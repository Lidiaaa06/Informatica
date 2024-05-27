#ifndef PILA_H
#define PILA_H
#include<iostream>
using namespace std;
struct nodo
{
   int info;
   struct nodo * next;

}typedef nodo;

class pila
{
    private:
        nodo * testa;
        nodo * p;

    public:
        pila(int dato=0)
        {
            testa = new nodo;
            testa->info = 0;
            testa->next=NULL;
        }

        void push(int);
        void pop();
        int top();
        void stampa();
};

#endif