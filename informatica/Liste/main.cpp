#include<iostream>
#include "lista_concatenata.h"
using namespace std;

int  main()
{
    lista l1;
    l1.push(12);
    l1.push(10);
    l1.pop();
    l1.push(21);
    l1.top();
    l1.stampa();
}