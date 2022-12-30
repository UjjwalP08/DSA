#include <iostream>
using namespace std;

class hero
{

private:
    int level;
    int power;

public:
    int health;
    int value;

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
        cout << "Level is "<<this->level << endl;
        cout << "Powre is "<<this->power << endl;
    }

    // To Access the setter and getter declare in public access modifre

    // 3 types of Access modifires
    //  i) Public
    //  ii) Private
    //  iii) Protectd

    // we can't directly access the private modifires in outside the class
    // to access the private modifires we create getter and setter
};

int main()
{

    // Size of empty class
    // cout << "Size of Empty class is  " << sizeof(hero) << endl;

    // size of class
    // cout << "Size of class is  " << sizeof(hero) << endl;

    // -------------------> make object Statcially <-------------------
    // Syntax:- class_name object_name
    hero ujju;

    // to access public access modifre use (.) operator

    ujju.health = 90;
    ujju.value = 100;

    cout << "Ujjwal Health is " << ujju.health << endl;
    cout << "Ujjwal Value is " << ujju.value << endl;

    // Privat Access Modifire Value
    ujju.setLevel(99);
    ujju.setPower(200);

    cout << "Ujjwal Level is " << ujju.getLevel() << endl;
    cout << "Ujjwal Power is " << ujju.getPower() << endl;

    // -------------------> make object Dynamically <-------------------

    // Synatx:- Class_name *Obj_name = new Class_name;
    hero *h1 = new hero;

    // we can access class value using object h1 2 ways
    //  i) Using (.) operator
    //  ii) Using (->) operator

    //  i) 1st Way
    h1->setLevel(40);
    cout << "h1 health is " << h1->getLevel() << endl;

    // ii) 2nd Way
    h1->setPower(90);
    cout << "h1 power is " << (*h1).getPower() << endl;

    return 0;
}