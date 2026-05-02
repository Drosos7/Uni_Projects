//κλαση Dummy 
#include <iostream>
using namespace std;
//Δήλωση κλάσης 
class Dummy{
    public:
    Dummy (); // constructor 1
    Dummy(int in_x); // constructor 2
    void set_x(int in_x);//setter
    int get_x()const;//getter
    ~Dummy();//destructor
    private:
     int x;//Xarakthristika klashs
};
  
int main()
{
    Dummy obj1(10),obj2;

    return 0;
}


//Δήλωση σωμάτων
Dummy::Dummy()
{
    x=0;
}
Dummy::Dummy(int in_x)
{
    x=in_x;
}
Dummy::~Dummy()
{
    cout<<"Object x = "<<x<<" is going to be destructed."<<endl;
}

void Dummy::set_x(int in_x)
{
    x=in_x;
}

int Dummy:: get_x()const
{
    return x;
}


