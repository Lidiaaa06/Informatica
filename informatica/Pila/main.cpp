#include<iostream>
#include "pila.h"
using namespace std;

int  main()
{
    pila p1;
    p1.push(12);
    p1.push(10);
    p1.pop();
    p1.push(21);
    p1.top();
    p1.stampa();
}