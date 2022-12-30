#include <iostream>
using namespace std;

/* Encapsulation:- Wrapping up Data Members and function

also known as the Information Hiding



----------------> Fully Encapsulated Class <----------------
-->All the members are Private
--> Only same class access to this class member

----------------> Advantages <----------------
-->We can only make read the classs
--> Hide the data (Security purpose)
--> Code Reusability
--> Using Encapsulation We can easily perfome Unit Testing




*/

class emp
{

    // ----------------> Fully Encapsulated Class <----------------

private:
    string name;
    int age;
    int salary;

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{

    cout << endl;
    cout << "----------------> This is the all About Encapsulation <----------------";
    cout << endl;
    emp em;

    em.getAge();

    cout << em.getAge() << endl;

    return 0;
}