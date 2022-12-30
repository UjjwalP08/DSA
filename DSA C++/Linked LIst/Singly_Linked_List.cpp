#include <iostream>
using namespace std;

class Node
{
    // -------------> Creating Node <-------------

public:
    int data;
    Node *next;


    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;

        if(this->next != NULL)
        {
            delete next;
            this ->next = NULL;
        }
            cout << "Free the memory  with data " << value<< endl;
    }
};

// ************************** Insertion Operation **************************

// -------------> insert at the beginning <-------------
void insertAtBegin(Node *&head, int data)
{
    Node *temp = new Node(data); // create the new node

    temp->next = head; // that new node address point to the next node which is already created
    head = temp;       // newnode is now our head node
}

// -------------> Insertion at the end (using head node) <-------------
void insertAtEnd(Node *&tail, int data)
{
    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

// -------------> Insertion at the Specific Postion <-------------
void insertAtPosition(Node *&tail, Node *&head, int data, int pos)
{
    Node *newnode = new Node(data);
    Node *temp = head;
    int cnt = 1;

    // if you want to insert at first position
    if (pos == 1)
    {
        insertAtBegin(head, data);
        return;
    }

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insert at the end positon
    if (temp->next == NULL)
    {
        insertAtEnd(tail, data);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

// -------------> Insertion at the end (using head node) <-------------
// void insertAtend(Node* &head,int data)
// {
//     Node *newnode = new Node(data);
//     Node* temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }

//     temp->next = newnode;

// }

// ************************** Deletion Operation **************************

// -------------> Deletion at the beginning <-------------

void deleteAtBegin(Node *&head)
{
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

// -------------> Deletion at the end  (using tail node)<-------------

void deleteAtEnd(Node *&head, Node *&tail)
{
    Node *temp = head;

    while (temp->next != tail)
    {
        temp = temp->next;
    }
    tail = temp;
    tail->next = NULL;
    delete temp->next;
}

// -------------> Deletion at the Specific Postion <-------------
void deleteAtPosition(Node *&tail, Node *&head, int pos)
{
    // if position is 1st
    if (pos == 1)
    {
        deleteAtBegin(head);
        return;
    }

    Node *temp = head;
    Node *curr = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        // temp = temp->next;
        curr = curr->next;
        cnt++;
    }

    temp = curr->next;
    // deltion at end
    if (temp->next == NULL)
    {
        deleteAtEnd(head, tail);
        return;
    }

    // Deletion at specify position
    curr->next = temp->next;
    temp->next = NULL;
    delete temp;
}

// -------------> travarse the linked list or Display  <-------------
void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -------------> Check Linked list is Circular or Not <-------------
bool checklist(Node *&tail)
{
    Node *temp = tail->next;

    // list is empty
    if (tail == NULL)
    {
        return true;
    }

    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }

    if (temp == NULL)
        return 0;
    else
        return 1;
}






int main()
{

    Node *node = new Node(10);

    Node *head = node;
    Node *tail = node;
    display(head);

    insertAtBegin(head, 11);
    insertAtBegin(head, 12);
    insertAtEnd(tail, 8);
    insertAtPosition(tail, head, 9, 1);
    insertAtPosition(tail, head, 9, 6);
    insertAtPosition(tail, head, 19, 7);

    deleteAtBegin(head);
    cout << tail->data << endl;
    // deleteAtEnd(head, tail);
    // deleteAtPosition(tail, head,1);
    // deleteAtPosition(tail, head, 6);

    
    bool ans = checklist(tail);
    // bool ans = floydCycle(tail);

    if (ans)
    {
        cout << "List is Circular" << endl;
    }
    else
    {
        cout << "List is Not Circular" << endl;
    }

    display(head);
    return 0;
}