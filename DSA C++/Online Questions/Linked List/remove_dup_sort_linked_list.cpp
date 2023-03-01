/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

// Remove Duplicate from sorted linked list
// Coding Ninjs

Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head == NULL)
        return NULL;
    Node* curr = head;
    
    while(curr != NULL)
    {
        if(curr->next!=NULL && (curr->data == curr->next->data))
        {
            Node* next = curr->next->next;
            Node* nod = curr->next;
            delete(nod);
            curr->next = next;
            
        }else
        {
            curr = curr->next ;
        }
    }
    
    return head;
    
    
    
    
    
}