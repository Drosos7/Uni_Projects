#include <iostream>
#include <cstring>//για strlen και strcpy
#include <string>//για ΤΔ string 
#include <cstdio>//για perror
#include <cstdlib>//για exit

using namespace std;
using std::ostream;

//Δήλωση της κλάσης 
class Foithths{
    public:
    //Δήλωση πρωτοτύπων μεθόδων και συναρτήσεν
    Foithths(const char * in_AM , string in_Onomateponumo);//Constructor 1
    Foithths(const char *in_AM, string in_Onomateponumo,  unsigned int in_semester, string in_Fulo);//Constructor 2

    Foithths(const Foithths &temp);//Copy constructor
   
    //setters 
    void set_AM( const char *in_AM);
    void set_Onomateponumo(string in_Onomateponumo);
    void set_Fulo(string in_Fulo);
    void set_semester(unsigned int in_semester); 
   
    // getters 
    char *get_AM()const;
    string get_Onomateponumo()const;
    string get_Fulo()const;
    unsigned int get_semester()const;

    //Destructor
    ~Foithths();

    //Συναρτήσεις
     void print(ostream &output)const;
    void operator-();
    void operator++();
    void operator++(int);
    void operator +=(unsigned int);
    void operator -=(unsigned int );
    


    private: 
        char * AM;
        string Onomateponumo;
        string Fulo;       
        unsigned int semester;   
        
};

//Σώματα μεθόδων και συναρτήσεων 
Foithths::Foithths(const char*in_AM,string in_Onomateponumo)
{
   
   AM =new char[strlen(in_AM)+1];
   if(!AM)
   {
    perror("Error:Δεν δεσμεύτηκε μνήμη για τον AM");
    exit(1);
   }
   strcpy(AM,in_AM);
    Onomateponumo=in_Onomateponumo;
    semester=1;
    Fulo="-";

}

Foithths::Foithths(const char *in_AM, string in_Onomateponumo,unsigned int in_semester,string in_Fulo)
{
   
    AM= new char [strlen(in_AM)+1];
    if(!AM)
    {
        perror("Error:Δεν δεσμεύτηκε μνήμη για τον AM");
        exit(1);

    }
    strcpy(AM,in_AM);
    Onomateponumo=in_Onomateponumo;
    semester=in_semester;
    Fulo=in_Fulo;
}

//αποφευγω το -> με temp αντικειμενο βοηθητικο
Foithths::Foithths(const Foithths &temp)
{
   
    AM=new char[strlen(temp.AM)+1];
   
    if(!AM)
    {
        perror("Error: Δεν δεσμεύτηκε μνήμη για την αντιγραφή του  AM");
        exit(1);
    }
    strcpy(AM,temp.AM);//source ,dest
    Onomateponumo=temp.Onomateponumo;
    Fulo=temp.Fulo;
    semester=temp.semester;
}

void Foithths::set_AM(const char *in_AM)
{
    if(AM)
        delete[]AM;

     AM=new char[strlen(in_AM)+1];
     if(!AM)
     {
        perror("Error: Δεν δεσμεύτηκε μνήμη για τον AM");
        exit(1);
     }   
     strcpy(AM,in_AM);
}
char *Foithths::get_AM()const
{
    return AM;
}

void Foithths::set_Onomateponumo(string in_Onomateponumo)
{
    Onomateponumo=in_Onomateponumo;

}

string Foithths::get_Onomateponumo()const
{ 
    return Onomateponumo;
}
void Foithths::set_Fulo(string in_Fulo)
{
    if(Fulo=="Male" || Fulo=="Female")
        Fulo=in_Fulo;
    else Fulo="-";    
}

string Foithths::get_Fulo()const
{
    return Fulo;
}

void Foithths::set_semester(unsigned int in_semester)
{
    if(in_semester<16 && in_semester>=1)
        semester=in_semester;

}

unsigned int Foithths::get_semester()const
{
    return semester;
}

Foithths::~Foithths()
{
    delete [] AM;
}

void Foithths::print(ostream& output) const
{
    output<<"AM:"<<AM;
    int length=strlen(Onomateponumo.c_str());
    output<<" Φοιτητής/τρια: "<<Onomateponumo<<" ("<<length<<")";
    output<<" Φύλο:"<<Fulo;
    output<<" Εξάμηνο:"<<semester;
    cout<<endl;
}

void Foithths::operator++()
{
    if(semester<16)
    semester++;
    else cout<<"Για την/τον "<<Onomateponumo<< "τα εξάμηνα δεν υπερβαίνουν τα 16!"<<endl;
}

     


void Foithths::operator ++(int)
{
    if(semester<16)
    semester++;
    else cout<<"Για την/τον "<<Onomateponumo<< " τα εξάμηνα δεν υπερβαίνουν τα 16!"<<endl;
}

void Foithths::operator +=(unsigned int p)
{
    if((semester+p)<=16)
    semester+=p;
    else{ 
        semester =16;
        cout<<"Για την/τον "<<Onomateponumo<< " τα εξάμηνα δεν υπερβαίνουν τα 16!"<<endl;
}
}

void Foithths::operator -=(unsigned int p)
{
    if(semester >p &&(semester-p) >=1)
        semester -= p;
    else {
        semester=1;
        cout<<"Για την/τον "<<Onomateponumo<< " ελάχιστο εξάμηνο το 1!"<<endl;
}
    }

void Foithths::operator -()
{
    if(Fulo=="Male")
        Fulo="Female";
     else 
      Fulo="Male";
       
}
ostream& operator<<(ostream& output, const Foithths & f)
{
    f.print(output);
    return output;
}

//main 

int main()
{
   Foithths*array[4];
   
    array[0]=new Foithths ("25390171","Γιάννης Δρόσος",3,"Male");
    array[1]=new Foithths("25390025","Giorgos Metaxas",5,"Male");
    array[2]=new Foithths("2539043","Alexandra Dhmhtriou",10,"Female");
    array[3]=new Foithths("2539054","Dhmhtris Manolis");

    cout<<"Αρχικά: "<<endl;
    for(int i=0; i<4;i++)
     {
        cout<< *array[i];
    }
    cout<<endl;
    cout<<"Αλλαγές:"<<endl;
    ++(*array[0]);
    -(*array[1]);
    *array[2]+=7;
    *array[3]-=3;
    cout<<endl;

    for(int i=0;i<4;i++){
     array[i]->print(cout);
    }

        for(int i=0;i<4;i++)
            delete array[i];
            cout<<endl;
    return 0;
}

