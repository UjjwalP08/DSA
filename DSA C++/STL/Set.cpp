#include<iostream>
#include<set>
using namespace std;
 
int main()
{

    set<int> st;

    st.insert(2);
    st.insert(24);
    st.insert(5);
    st.insert(8);
    st.insert(9);
    st.insert(1);

    cout<<"Elements of the set are " << endl;
    for(int i : st)
    {
        cout << i << " ";
    }
    cout<<endl;

    // st.count(1);
    // use for whether the element present on the set

    cout<<"Erase the element at begin for the 1st time"<<endl;
    st.erase(st.begin());
    cout<<"Now Elements of the set are " << endl;
    for(int i : st)
    {
        cout << i << " ";
    }
    cout<<endl;

    cout<<"Erase the element at begin for the 2nd time"<<endl;
    st.erase(st.begin());
    cout<<"Now Elements of the set are " << endl;
    for(int i : st)
    {
        cout << i << " ";
    }
    cout<<endl;


}