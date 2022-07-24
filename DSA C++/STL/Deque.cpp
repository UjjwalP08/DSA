#include<iostream>
#include<deque>
using namespace std;
 

int main()
{

deque <int> de;

de.push_back(5);
de.push_back(6);
de.push_back(7);

de.push_front(8);
de.push_front(9);
de.push_front(10);

cout << "Elements of Deque is" << endl;
for(int i = 0;i<de.size();i++)
{
        cout << de[i] << " ";
}
cout<< endl;
cout << "Size of Deque is " << de.size() << endl;

cout<<"Elements before popout from back side" << endl;

for(int i = 0;i<de.size();i++)
{
        cout << de[i] << " ";
}
cout<< endl;
cout<<"Elements After popout from back side" << endl;


de.pop_back();

for(int i = 0;i<de.size();i++)
{
        cout << de[i] << " ";
}
cout<< endl;

cout<<"Elements before popout from fron side" << endl;

for(int i = 0;i<de.size();i++)
{
        cout << de[i] << " ";
}
cout<< endl;

cout<<"Elements After popout from fron side" << endl;


de.pop_front();
for(int i = 0;i<de.size();i++)
{
        cout << de[i] << " ";
}
cout<< endl;

}