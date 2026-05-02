//Παράδειγμα Κλάσης dog :χρήση constructor και destructor 
#include <iostream>
using namespace std;
//αρχειο dog.h θα μπρουσε να ειναι
class dog{

public:
 dog(int in_mood);//εδω ειναι ο constructor με ονομα ιδιο με το class!
 ~dog();
 void bark();
 void set_mood(int in_mood);
 int get_mood()const;
 void report_mood();

 private:
 int mood;
};

//εδω φταιχνουμε τα σωματα των public μεθόδων 
//Θα μπορουσε να ηταν σε αλλο αρχειο πχ. dog.cpp μονο με την υλοποιηση τψων μεθοδων 

//Constructor
  dog::dog(int in_mood)
  {
    mood=in_mood;

  }  
  //Destructor
  dog::~dog()
  {
    cout<<"I'll be waiting.....!"<<endl;
  }
  //Setter
  void dog::set_mood(int in_mood)
  {
    mood=in_mood;

  }
  
  //Getter
  int dog::get_mood()const
  {
    return mood;
  }

  void dog::bark()
  {
    cout<<"woof"<<endl;
  }
  void dog::report_mood()
  {
    if(mood>10)
        cout<<"Cool";
     else cout<<"Furious ";   
  }

  int main()
  {
    dog piko(8);
    cout<<"Piko how are u?"<<endl;
    piko.report_mood();
    cout<<endl;
    cout<<"Piko, bark twice"<<endl;
    piko.bark();
    piko.bark();
    return 0;
  }