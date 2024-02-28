#include <iostream>
#include "Pila.h"
int main()
{
    Pila r1;
    Pila r2(10);
    
    r1.push(10);
    r1.push(21);
    r1.stampa();
    r1.pop();
    r1.stampa();

}