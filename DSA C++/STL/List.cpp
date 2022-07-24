#include<iostream>
#include<list>
using namespace std;
 
int main()
{

list<int> li;

// Insert from back
li.push_back(1);
li.push_back(2);
li.push_back(3);
li.push_back(4);

// insert from frotn
li.push_front(5);
li.push_front(6);
li.push_front(9);
li.push_front(7);

cout<<"Elements of the list are " << endl;
for(int i : li)
{
    cout << i << " ";
}
cout<<endl;

cout<<"Size of the list is "<<li.size()<<endl;

cout<<"After Sorting Elements of the list are " << endl;
li.sort();
for(int i : li)
{
    cout << i << " ";
}
cout<<endl;

cout<<"After Reverse list all Elements of the list are " << endl;
li.reverse();
for(int i : li)
{
    cout << i << " ";
}
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"Before pop_out from font  Elements of the list are " << endl;
for(int i : li)
{
    cout << i << " ";
}
cout<<endl;

li.pop_front();

cout<<"After pop_out from font  Elements of the list are " << endl;
for(int i : li)
{
    cout << i << " ";
}
cout<<endl;
cout<<endl;
cout<<endl;

cout<<"Before pop_out from back  Elements of the list are " << endl;
for(int i : li)
{
    cout << i << " ";
}
cout<<endl;

li.pop_back();

cout<<"After pop_out from back  Elements of the list are " << endl;
for(int i : li)
{
    cout << i << " ";
}
cout<<endl;


// analyze list with any defalut value
cout<<"New list with the defalut value 100"<<endl;
list<int> n(5,100);
for(int i : n)
{
    cout << i << " ";
}
cout<<endl;

// copy the list
cout<<"Copy the list"<<endl;
list<int> l1(n);
for(int i : l1)
{
    cout << i << " ";
}
cout<<endl;
     
}