#include<iostream>
#include<stack>
using namespace std;
 
int main()
{

stack<int> st;

st.push(4);
st.push(6);
st.push(3);
st.push(2);
st.push(1);


cout << "Top element of stack is " << st.top() << endl;
cout<<"Size of the stack is "<<st.size()<<endl;
cout<<endl;

cout<< "After the 1st Pop operation"<<endl;
st.pop();
cout << "Top element of stack is " << st.top() << endl;
cout<<"Size of the stack is "<<st.size()<<endl;
cout<<endl;
     
cout<< "After the 2nd Pop operation"<<endl;
st.pop();
cout << "Top element of stack is " << st.top() << endl;
cout<<"Size of the stack is "<<st.size()<<endl;
cout<<endl;
}