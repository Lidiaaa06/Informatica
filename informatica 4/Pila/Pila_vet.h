#ifndef PILA_VET_H
#define PILA_VET_H

class Pila
{
    private:
    int *vet;
    int size;
    int fine;
    
    public:
    Pila();
    Pila(int);
    bool isEmpty();
    bool isFull();
    bool push(int);
    bool pop();
    int top();
    void stampa(void);

};
#endif