#include <iostram>
#include "Pila.h"
using namespace std;

Pila::Pila()
{
    vet=new int[10];
    size=10;
    fine=0;
}

Pila::Pila(int size)
{
    vet=new int [10];
    this->size=size;
    fine=0;
}

bool Pila::isEmpty()
{
    if(fine==0)return true;
    return false;
}

bool Pila::isFull()
{
    if(fine==size)return true;
    return false;
}

bool Pila::push(int x)
{
    if(!isFull)
    {
      vet[fine]=x;
      fine++;
      return true;
      
    }
    return false;
 }

 bool Pila::pop(void)
 {
     if(!isEmpty)
    {
      fine--;
      return true;
    }
    return false;
 }
   
void Pila::stampa(int x)
{
    
}
