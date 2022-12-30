#include <iostream>
#include <string.h>
using namespace std;

// hero(char name[])
// {
//     this->name = name;
// }
//  in above code this->name means our class name variable or attribute and the other name is the variable of the constructor

class hero
{
private:
    int level;
    int power;

public:
    int health;
    int value;
    char *name;

    // getter:- Use for to access the object value
    int getLevel()
    {
        return level;
    }

    int getPower()
    {
        return power;
    }

    // setter:- Use for the Set the object Value
    void setLevel(int l)
    {
        level = l;
    }

    void setPower(int p)
    {
        power = p;
    }
    void print()
    {
        cout << "[ Name : " << this->name << ",";
        cout << " Level : " << this->level << ",";
        cout << " Power : " << this->power << " ]";
        cout << endl;
    }

    // -----------> Constructor <-----------
    hero()
    {
        cout << "Constructor Called" << endl;
        cout << endl;
        // Dynamically Allocate name array
        name = new char[20];
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // -----------> Paramatrised Constructor <-----------
    hero(int level)
    {
        cout << "Paramrised Constructor is called" << endl;
        this->level = level;
        cout << "Adress of this is " << this << endl;
        // this is the pointer which points the current object
    }

    hero(int power, int level)
    {
        this->power = power;
        this->level = level;
    }

    // -----------> Overwrite the By Defalut Copy Constructor <-----------
    hero(hero &temp)
    {
        // Need to pass by object as refrence because it directly reflect on object behaviour not create the object copy
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        this->level = temp.level;
        this->power = temp.power;
        cout << "Copy Constructor is Called " << endl;
    }
};

// Types Of Constructor
// i) default Constructor
// ii) Paramatrised Constructor
// iii) Copyy Constructor

int main()
{

    // For statically
    hero m1;

    // For Dynamically
    hero *h2 = new hero;

    hero *h = new hero(100);
    cout << "Address of h1 is " << h << endl;
    // h->print();
    // cout << endl;

    hero h1(230, 400);
    cout << "Address of h1 is " << &h1 << endl;
    // h1.print();
    cout << endl;

    // Copy Consturctor (By Defalut Exist)
    hero ujjwal(h1);
    cout << "Print the value of Ujjwal Obj " << endl;
    // ujjwal.print();

    hero h3;
    char name[] = "Ujjwal";
    h3.setName(name);
    h3.setLevel(100);
    h3.setPower(200);
    cout << "------------> H3 object detalis Without any Changes <------------" << endl;

    h3.print();

    hero h4(h3);
    cout << "H4 objcet detalis " << endl;
    h4.print();
    cout << endl;

    // h3.name[0] = 'k';
    // // Update h3 object name
    // cout << endl;
    // h3.print();
    // cout << "H4 object detalis"<<endl;
    // Change Reflectd in H4 Objcet (shallow Copy)
    // h4.print();
    // Here we make change in the h3 object but the chagne also reflcetd in the h4 objcet, because  H3 and H4 objcet us Shallow Copy in the copy Constructor

    // in h3 object when we make the change in the name array first index that same time the h4 obj also point the same name array so the when we perfom change in h3 array change also happen in h4 array to solve this problme we need to use

    // -------------> Deep Copy in our Copy Constructor <---------------

    // in Deep Copy it make new name array so the if we make change in h3 obj it will not reflect in the h4 obj name attribute

    // ------------> How to make Deep Copy in Constuctor <----------------
    // to make deep copy we need to make our own copy consturtor(Not use defalut Copy consturtor) and make new array in the copy consturcotr

    cout << "------------> H3 object detalis  with the change in name <------------" << endl;
    h3.name[0] = 'k';
    // Update h3 object name
    h3.print();
    cout << "H4 object detalis" << endl;
    // Change not refelctd in the H4 objce (Deep Copyy)
    h4.print();

    return 0;
}