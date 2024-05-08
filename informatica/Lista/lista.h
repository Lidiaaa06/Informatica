#ifndef LISTA_H
#define LISTA_H
#include<iostream>
using namespace std;

struct s_nodo{
   int info;
   struct s_nodo* next;
}; typedef struct s_nodo nodo

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