#include<iostream>
#include<map>
using namespace std;
 
int main()
{

        map<int,string> m;

        m.insert({1,"Ujjwal"});
        m.insert({2,"Ayush"});
        m.insert({3,"Meet"});
        m.insert({4,"Jenish"});
        m.insert({5,"Alpesh"});
        m.insert({6,"Manish"});
        m.insert({7,"Divya"});
        m.insert({8,"Kirtan"});

        cout<<"Map Elements are"<<endl;
        cout<<"Key\tValue "<<endl;
        for(auto i:m)
        {
            
            cout<<i.first <<"\t"<<i.second <<endl;
        }
     
}