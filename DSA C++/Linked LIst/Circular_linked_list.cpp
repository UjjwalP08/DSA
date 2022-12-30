#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
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
void insertAtBegin(Node *&tail, int data)
{
    Node *newnode = new Node(data);

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }

    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

// -------------> Insertion at the End <-------------

void insertAtEnd(Node *&tail, int data)
{
    Node *newnode = new Node(data);

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }

    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }
}

// -------------> Travarse Linked list <-------------

void display(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "list is emtpy" << endl;
        return;
    }

    if (tail->next == tail)
    {
        cout << "Display  " << endl;
        cout << tail->data << " " << endl;
        return;
    }

    Node *temp = tail->next;

    while (temp->next != tail->next)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " " << endl;
}

// -------------> Length Linked list <-------------

int lenght(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "list is emtpy" << endl;
        return 0;
    }
    int len = 1;
    Node *temp = tail->next;

    while (temp->next != tail->next)
    {
        temp = temp->next;
        len++;
    }

    return len;
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
// -------------> Detect list has cycle or not usign MAP <-------------
bool Cycle(Node *head)
{
    if(head == NULL)
        return false;
    map<Node*,bool> visited;
    Node* temp = head;

    while(temp!=NULL)
    {
        if(visited[temp] == true)
        {
            return true;
        }

        // visit the 1st time so mark true

        visited[temp] = true;
    }

    return false;

}

// -------------> Detect list has cycle or not usign floyd algorithm <-------------
Node *floydCycle(Node *head)
{
    if (head == NULL)
        return NULL;

    // use fast and slow pointer in floyd cycle detect algorithm
    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;

        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {
            // cout << "The point where slow and fast are meet"<<endl;
            return slow;
        }
    }

    return NULL;
}

// Detect the node where the loop is start in list

Node *nodepoint(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *match_node = floydCycle(head);
    Node *slow = head;

    while (slow != match_node)
    {
        slow = slow->next;
        match_node = match_node->next;
    }

    return slow;
}

int main()
{

    Node *n1 = new Node(5);
    // node point itself
    n1->next = n1;

    Node *tail = n1;

    // display(tail);

    insertAtBegin(tail, 6);
    insertAtBegin(tail, 7);
    // display(tail);
    insertAtEnd(tail, 6);
    insertAtBegin(tail, 8);
    insertAtEnd(tail, 7);
    insertAtBegin(tail, 0);
    insertAtEnd(tail, 18);
    insertAtEnd(tail, 18);
    insertAtEnd(tail, 180);
    display(tail);

    // bool ans = checklist(tail);
    // bool ans = floydCycle(tail);
    bool ans = Cycle(tail);

    if (ans)
    {
        cout << "Cycle Detect" << endl;
    }
    else
    {
        cout << "No Cycle" << endl;
    }

    int len = lenght(tail);

    Node *point = nodepoint(tail);

    cout << "Loop start at Node " << point->data << endl;

    // cout << "Length of linked list is " << len << endl;

    return 0;
}