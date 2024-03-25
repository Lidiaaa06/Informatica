#ifndef CODA_H
#define CODA_H
#include<iostream>
using namespace std;
struct nodo
{
   int info;
   struct nodo * next;

}typedef nodo;

class coda
{
    private:
        nodo * testa;
        nodo * p;

    public:
        coda(int dato=0)
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