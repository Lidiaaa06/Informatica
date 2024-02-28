#ifdef PILA_H
#define PILA_H

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
    bool push();
    bool pop();
    bool top(void);

};
#endif
