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
    nuovo->next=this->testa;
    this->testa=nuovo;
}

void lista::cancellaTesta()
{

} 

void lista::InsInCoda(int x)
{

}   

void  lista::CancellaCoda() 
{

}   

void lista::StampaLista()
{

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