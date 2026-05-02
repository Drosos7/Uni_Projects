#include <iostream>
using namespace std;

    struct person{
    int age;
    string name, surname;

   };

int main()
{
   person p1;

   cout<<"Dwse onoma:"<<endl;
   cin>> p1.name;
   cout<<"Dwse epitheto:"<<endl;
   cin>>p1.surname;
   cout<<"Dwse hlikia:"<<endl;
   cin>>p1.age;
   
   cout<<"Athloumenos:""\t"<<p1.name<<"\t" <<p1.surname<<"\t,"<<p1.age<<endl;

    return 0;
}