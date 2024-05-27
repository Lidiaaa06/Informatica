#include"pila.h"
#include<iostream>
using namespace std;

void pila::push(int x)
{
    p=new nodo;
    p->info=x;
    p->next=testa;
    testa=p;
}

void pila::pop()
{
    p=testa;
    testa=testa->next;
    delete p;
}

int pila::top()
{
    return testa->info;
}


void pila::stampa()
{p=testa;
    do
    {
        cout<<p->info<<endl;
        p=p->next;
        
    }while(p->next!=NULL);
}
    

































