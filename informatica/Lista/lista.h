#ifndef LISTA_H
#define LISTA_H
#include<iostream>
using namespace std;

struct s_nodo
{
   int info;
   struct s_nodo* next;
}; typedef struct s_nodo nodo

class lista
{
    private:
        nodo * testa;
    public:
       Lista();   
       void InsInTesta(int);    
       void cancellaTesta();                   
       void InsInCoda(int);   
       void CancellaCoda();     
       void StampaLista();  
       bool IsEmpty();
       void InserisciPosizione(int,int);
       void CancellaPosizione(int);

#endif