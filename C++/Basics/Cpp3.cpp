#include <iostream>
using namespace std;

double average(int x, int y);
double average(double x, double y);

int main()
{
   int  a,b,choice,count=1;
   double k,l;
    cout<<"1.Akeraios 2.Pragmatikos"<<endl;
    cin>>choice;
    
    if(choice==1)
    {
        
            cout<<"Dwse ton " <<count<< " akeraio:" << endl;
            cin>> a;
            cout<<"Dwse ton " <<count+1<< " akeraio:" << endl;
            cin>> b;
            cout<<"O Mesos oros tou " <<a<< " kai tou " <<b<< " einai o: "<<average(a,b)<<endl;
    }
    else
    {
        cout<<"Dwse ton " <<count<< " pragmatiko:"<<endl;
        cin>>k;
        cout<<"Dwse ton " <<count+1<< " pragmatiko"<<endl;
        cin>>l;
        cout<<"O Mesos oros tou " <<k<< " kai "<<l<<" einai o: "<<average(k,l)<<endl;

    } 
    


    return 0;
}

double average (int a , int b)
{

    return (a+b)/2.0;
}
double average(double x, double y)
{

return (x+y)/2;
}