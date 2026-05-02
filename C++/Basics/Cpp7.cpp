//Κλαση σημείο 
#include <iostream>
using namespace std;

class Shmeio{
    double x,y;

    public:
    Shmeio();
    Shmeio(double x1,double y1);
    void set_x(double x1);
    void set_y(double y1);
    double get_x()const;
    double get_y()const;
    void print_shmeio();
};

int main()
{
    Shmeio A(1,1),B,C(3,3);

    cout<<"Proto shmeio:";
    A.print_shmeio();
    cout<<"Deutero shmeio:";
    B.print_shmeio();
    cout<<"Trito shmeio:";
    C.print_shmeio();

    return 0;
}


Shmeio::Shmeio()
{
    x=0.0;
    y=0.0;
}

Shmeio::Shmeio(double x1, double y1)
{
    x=x1;
    y=y1;
}

void Shmeio::set_x(double x1)
{
    x=x1;
    
}
void Shmeio:: set_y( double y1)
{
    y=y1;
}

double Shmeio::get_x()const
{
    return x;
}
double Shmeio::get_y()const{
    return y;
}

void Shmeio:: print_shmeio()
{
    cout << "("<<x<<","<<y<<")"<<endl;
}