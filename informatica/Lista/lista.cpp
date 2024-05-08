#include"lista.h"
#include<iostream>
using namespace std;

lista::lista()
{
    this->testa=NULL;
}


void lista::InsInTesta(int x)    
{
    nodo* l=new nodo;
    l->info=x;
    l->next=testa;
    testa=l;
}

void lista::cancellaTesta()
{
   nodo*c;
   if(testa!=NULL)
   {
       c=testa;
       testa=testa->next;
       delete c;
   }
} 

void lista::InsInCoda(int x)
{
    nodo *p=new testa;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    nodo* l=new nodo;
    l->info=x;
    l->next=testa;
    testa=l;
}   

void  lista::CancellaCoda() 
{
    nodo*p;
    
}   

void lista::StampaLista()
{
    nodo*c= testa;
    while(c!=NULL)
    {
    cout<<c->info<<endl;
    c=c->next;
    }
    cout<<endl;
}  

bool lista::IsEmpty()
{

}

void lista::InserisciPosizione(int x,int y)
{

}

void lista::CancellaPosizione(int x)
{

}