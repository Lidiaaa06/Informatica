#include"lista_concatenata.h"
#include<iostream>
using namespace std;

void lista::push(int x)
{
    p=new nodo;
    p->info=x;
    p->next=testa;
    testa=p;
}

void lista::pop()
{
    p=testa;
    testa=testa->next;
    delete p;
}

int lista::top()
{
    return testa->info;
}


void lista::stampa()
{p=testa;
    do
    {
        cout<<p->info<<endl;
        p=p->next;
    }while(p->next!=NULL);
}
    

































