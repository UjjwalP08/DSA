#include<iostream>
#include<queue>
using namespace std;
 
int main()
{

    queue<int> qu;

    qu.push(45);
    qu.push(3);
    qu.push(4);
    qu.push(7);
    qu.push(1);

    cout<< "Size of the Queue is " << qu.size() << endl;
    cout << "First element of Queue is " << qu.front() << endl;
    cout << "Last element of Queue is " << qu.back() << endl;
    cout<<endl;
    cout<<endl;
    

    cout<< "After the 1st Pop operation"<<endl;
    qu.pop();
    cout << "Top element of stack is " << qu.front() << endl;
    cout<<"Size of the stack is "<<qu.size()<<endl;
    cout<<endl;
        
    cout<< "After the 2nd Pop operation"<<endl;
    qu.pop();
    cout << "Top element of stack is " << qu.front() << endl;
    cout<<"Size of the stack is "<<qu.size()<<endl;
    cout<<endl;


}