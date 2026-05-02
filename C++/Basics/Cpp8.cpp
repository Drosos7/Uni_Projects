//Κλαση Μαγος 
#include <iostream>
#include <cstring>

using namespace std;

class Magos{
    public:
    Magos(int in_age, char * in_beard, int mana=100);
    void set_mana(int in_mana);
    int get_mana()const;
    void Fireball_Spell();
    void Lighting_spell();
    void waitting();

    private: 
    int age;
    char beard[50];
    int mana;
    


};


int main()
{
    char str[50]="grey";
    Magos Gandalf(2019,str);
    Gandalf.Fireball_Spell();
    Gandalf.waitting();
    Gandalf.Lighting_spell();
    Gandalf.waitting();
    Gandalf.Lighting_spell();
    Gandalf.waitting();


    return 0;
}

Magos::Magos(int in_age, char*in_beard, int in_mana)
{
    age=in_age;
    strcpy(beard,in_beard);
    mana=in_mana;
}
void Magos::set_mana(int in_mana)
{
    mana=in_mana;
}
int Magos::get_mana()const
{
    return mana;
}

void Magos::Fireball_Spell()
{
    if(mana>=30)
        mana-=30;
    else cout<<"Not enouh mana"<<endl;    
        cout<<"mana "<<mana<<endl;
    
}
void Magos::Lighting_spell()
{
    if(mana>=90)
        mana-=90;
    else cout<<"Not enough mana "<<endl;    
    cout<<"mana "<<mana<<endl;
}
void Magos::waitting()
{
    mana+=10;
    cout<<"mana "<<mana<<endl;
}