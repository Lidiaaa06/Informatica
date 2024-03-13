#ifdef LISTA_H
#define LISTA_H
#include<iostream>
using namespace std
struct nodo
{
   int info;
   struct nodo * next;

}typedef nodo;

class lista
{
    private:
        nodo * testa;
        nodo * p;

    public:
        lista(int dato=0)
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