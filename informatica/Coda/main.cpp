#include<iostream>
#include "coda.h"
using namespace std;

int  main()
{
    coda c1;
    c1.push(6);
    c1.push(15);
    c1.pop();
    c1.push(24);
    c1.top();
    c1.stampa();
}