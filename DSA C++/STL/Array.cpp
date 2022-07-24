#include<iostream>
#include<array>
using namespace std;
 
 
int main()
{

array<int,0> arr2;
array<int,4> arr = {1,2,3,4};

cout << "Element at the index 2 is " << arr.at(2) << endl;

cout << "Array size is " << arr.size() << endl;

cout<<"Array elements are "<<endl;
for(int i = 0;i<arr.size();i++)
{
    cout<< arr[i] << " ";
}
cout<<endl;

cout<<"First element of the array is " << arr.front() <<endl;
cout<<"Last element of the array is " << arr.back() <<endl;

cout<<"Is array empty 1->True and 0->False and answer is " << arr.empty()<<endl;
cout<<"Is array empty 1->True and 0->False and answer is " << arr2.empty();

}