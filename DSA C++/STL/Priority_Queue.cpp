#include<iostream>
#include<queue>
using namespace std;
 
int main()
{

// Maximum Heap Implementaion
priority_queue<int> maxi;

maxi.push(1);
maxi.push(12);
maxi.push(3);
maxi.push(40);
maxi.push(90);

    cout<<endl;
    cout << "---------------->Maximum Heap <----------------" << endl;

    cout<< "Size of the Queue is " << maxi.size() << endl;
    cout << "First element of Max Queue is " << maxi.top() << endl;
    cout<<endl;
    cout<<endl;

    cout<< "After the 1st Pop operation"<<endl;
    maxi.pop();
    cout << "Top element of stack is " << maxi.top() << endl;
    cout<<"Size of the stack is "<<maxi.size()<<endl;
    cout<<endl;

    cout<< "After the 2nd Pop operation"<<endl;
    maxi.pop();
    cout << "Top element of stack is " << maxi.top() << endl;
    cout<<"Size of the stack is "<<maxi.size()<<endl;
    cout<<endl;

    cout << "---------------->Minimum Heap <----------------" << endl;


// Minimum Heap Implementaion
priority_queue<int,vector<int>,greater<int>> mini;

mini.push(100);
mini.push(2);
mini.push(93);
mini.push(4);
mini.push(9);

    cout<< "Size of the Queue is " << mini.size() << endl;
    cout << "First element of Min Queue is " << mini.top() << endl;
    cout<<endl;
    cout<<endl;

    cout<< "After the 1st Pop operation"<<endl;
    maxi.pop();
    cout << "Top element of stack is " << mini.top() << endl;
    cout<<"Size of the stack is "<<mini.size()<<endl;
    cout<<endl;

    cout<< "After the 2nd Pop operation"<<endl;
    maxi.pop();
    cout << "Top element of stack is " << mini.top() << endl;
    cout<<"Size of the stack is "<<mini.size()<<endl;
    cout<<endl;


     
}