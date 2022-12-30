#include<iostream>
using namespace std;

// Destructor: Use for to disalloacte the menory of objcet
// After the objcet life is over
// Destructor is alread declared by the c++ but we can create our own destructor using ~class_Name() 


class hero{
    private:
    int level;
    int power;

    public:
    int health;
    int value;

    void setLevel(int level)
    {
        this->level = level;
    }
    void setPower(int power)
    {
        this->power = power;
    }
    int getLevel()
    {
        return level;
    }
    int getPower()
    {
        return power;
    }

    // Create Destrucotr
    ~hero()
    {
        cout << "Destructor is called" << endl;
    }


};
 
int main()
{

// Static Object
hero h1;

// Dynamic Obj
hero *h = new hero;

// for dynamic obj destructor is not called automaticaly
// we need to call it manyally using delete keyword

delete h;

     
return 0;
}