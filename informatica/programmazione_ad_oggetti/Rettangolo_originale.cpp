#include<iostream>
#include<cmath>
using namespace std;
class Rettangolo
{
    private:
    
        double base;
        double altezza;
    
    public:

    Rettangolo()
    {
        base=1;
        altezza=1;
    }
    Rettangolo(double base, double altezza)
    {
        this->base=base;
        this->altezza=altezza;
    }
    void setBase(double base)
    {
        this->base=base;
    }
     void setAltezza(double altezza)
    {
        this->altezza=altezza;
    }
    
    double getBase()
    {
         return base;
    }
    double getAltezza()
    {
        return altezza;
    }
    double calcolaPerimetro()
    {
        double z;
        z=(altezza * 2)+(base * 2);
        return z;
    }
    double calcolaArea()
    {
        double x;
        x=base*altezza;
        return x;
    }
    double calcolaDiagonale()
    {
        return sqrt(base*base+altezza*altezza);
    }
    void stampaTutto()
    {
        cout<<"base "<<base<<endl;
        cout<<"altezza "<<altezza<<endl;
        cout<<"perimetro "<<calcolaPerimetro()<<endl;
        cout<<"area "<<calcolaArea()<<endl;
        cout<<"diagonale "<<calcolaDiagonale()<<endl;
    }
};
int main()
{
    Rettangolo r1;
    r1.setBase(12);
    r1.setAltezza(8);
    r1.stampaTutto();
}