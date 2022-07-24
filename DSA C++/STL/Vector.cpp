#include<iostream>
#include<vector>
using namespace std;
 
int main()
{

vector<int> v;

v.push_back(2);
v.push_back(3);
v.push_back(5);
v.push_back(6);
v.push_back(9);

int size = v.size();

// int cap = v.capacity();

cout << "Size of vector is " << v.size() <<endl;
cout << "Capacity of vector is " << v.capacity() << endl;
cout <<  "Elements of vector is " << endl;

for(int i = 0;i<size;i++)
{
    cout << v[i] << " ";
}
cout << endl;

cout<<"Element at 2nd index in vecotr is " << v.at(2) << endl;

cout << "The first element of the vecotr is " << v.front() <<endl;

cout << "The Last element of the vecotr is " << v.back() <<endl;

cout << "Before pop out"<<endl;
for(int i:v)
{
    cout << i << " ";
}
cout << endl;

cout<<"After pop out"<<endl;
v.pop_back();

for(int i:v)
{
    cout << i << " ";
}
cout << endl;

v.clear();
cout << "Using the clear function " <<endl;
for(int i:v)
{
    cout << i << " ";
}
cout << endl;

cout << "After using the .clear() method" << endl;
cout << "Size of vector is " << v.size() <<endl;
cout << "Capacity of vector is " << v.capacity(); 
     
}