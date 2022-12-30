-------------------------> Reverse Doubly Linked List <-------------------------

-----> GFG 


Node* reverseDLL(Node * head)
{
    //Your code here
    Node* curr = head;
    Node* temp = NULL;
    
    while(curr != NULL)
    {
        Node* fwd = curr->next;
        curr->next = temp;
        curr->prev = fwd;
        temp = curr;
        curr = fwd;
    }
    
    return temp;
}