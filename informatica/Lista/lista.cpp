#include"lista.h"
#include<iostream>
using namespace std;

lista::lista()
{
    this->testa=NULL;
}


void lista::InsInTesta(int x)    
{
    nodo* nuovo=new nodo;
    nuovo->info=x;
    nuovo->next=testa;
    testa=nuovo;
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

}   

void  lista::CancellaCoda() 
{

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