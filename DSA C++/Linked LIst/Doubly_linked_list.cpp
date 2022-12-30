#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    // Destructor
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Free the memory  with data " << value << endl;
    }
};
// ************************** Insertion Operation **************************

// -------------> Insertion at the beginning <-------------
void insertAtBegin(Node *&head, int data)
{
    Node *newnode = new Node(data);

    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}

// -------------> Insertion at the End <-------------
void insertAtEnd(Node *&tail, int data)
{
    Node *newnode = new Node(data);

    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

// -------------> Insertion at the Specific Position <-------------
void insertAtPos(Node *&tail, Node *&head, int data, int pos, int len)
{
    Node *newnode = new Node(data);
    // Insertion at beginning
    if (pos == 1)
    {
        insertAtBegin(head, data);
        return;
    }

    int cnt = 1;
    Node *temp = head;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Insertion at End
    if (temp->next == NULL)
    {
        insertAtEnd(tail, data);
        return;
    }

    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next = newnode;
}

// ************************** Deletion Operation **************************

// -------------> Deletion at the beginning <-------------
void deleteAtBegin(Node *&head)
{
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete temp;
}

// -------------> Deletion at the End <-------------
void deleteAtEnd(Node *&tail)
{
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete temp;
}

// -------------> Deletion at the Specific Position <-------------
void deleteAtPos(Node *&tail, Node *&head, int pos, int len)
{
    // Deletion at Beginning
    if (pos == 1)
    {
        deleteAtBegin(head);
        return;
    }
    int cnt = 1;
    Node *temp = head;

    while (cnt < pos )
    {
        temp = temp->next;
        cnt++;
    }

    // Deletion at End
    if(temp->next == NULL)
    {
        deleteAtEnd(tail);
        return;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    temp->prev = NULL;
    temp->next = NULL;
    delete temp;

}

// -------------> Travarse Linked list <-------------
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

// -------------> Length Linked list <-------------

int lenght(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;

        temp = temp->next;
    }

    return len;
}

int main()
{

    Node *node1 = new Node(8);

    Node *head = node1;
    Node *tail = node1;
    int len = lenght(head);

    insertAtBegin(head, 9);
    insertAtBegin(head, 11);
    display(head);
    insertAtBegin(head, 31);
    insertAtBegin(head, 10);
    insertAtEnd(tail, 99);
    insertAtEnd(tail, 1);
    insertAtPos(tail, head, 0, 2, len);
    insertAtPos(tail, head, 0, 4, len);
    insertAtPos(tail, head, 0, 1, len);
    insertAtPos(tail, head, 0, 11, len);

    display(head);

    // deleteAtBegin(head);
    // deleteAtEnd(tail);
    // deleteAtEnd(tail);
    // deleteAtPos(tail,head,1,len);
    // display(head);
    deleteAtPos(tail,head,3,len);
    deleteAtPos(tail,head,10,len);
    deleteAtPos(tail,head,5,len);
    display(head);

    cout << "Length of Linked list is " << lenght(head) << endl;
    // cout << "Head data " << head->data << endl;
    // cout << "Tail data " << tail->data << endl;

    return 0;
}