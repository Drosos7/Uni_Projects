//Σειριακή Αναζήτηση με χρήση της break//
#include <iostream>
#define N 5

using namespace std;

int main()
{
    int i;
    int A[N]={1,2,3,4,5};
    int x=7;
    bool found = false;//flag
     
    //Ψάχνουμε το χ
    for(i=0; i<N; i++)
    {

        if(A[i]==x)
        found=true;
            break;    
    }
    
    if(found)
     cout<<"To stoixeio "<<x<<"vrethike sthn thesh  "<< i+1 << " tou pinaka. ";
     else 
     cout<<"To stoixeio "<< x <<" den vrethike ";



    return 0;
}

