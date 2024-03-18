#include"coda.h"
#include<iostream>
using namespace std;

void coda::push(int x)
{
    do{
        p=p->next;
    } while(p->next!=NULL);
    p->next=new nodo;
    p=p->next;
    p->info=x;
    p->next=NULL;
       
}

void coda::pop()
{
    p=testa;
    testa=testa->next;
    delete p;
}

int coda::top()
{
    return testa->info;
}


void coda::stampa()
{p=testa;
    do
    {
        cout<<p->info<<endl;
        p=p->next;
    }while(p->next!=NULL);
}
    