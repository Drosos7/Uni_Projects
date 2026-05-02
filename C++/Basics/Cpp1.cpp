#include <iostream>
//Υπερφόρτωση συνάρτησης παράδειγμα
using namespace std;

int sum(int x, int y);
double sum(double x, double y);

int main()
{
    
    cout<<sum(1,2)<<endl;
    cout<<sum(1.1,2.0)<<endl;

    return 0;
}

int sum(int x, int y)
{
    return x+y;
}

double sum(double x, double y)
{
    return x+y;
}