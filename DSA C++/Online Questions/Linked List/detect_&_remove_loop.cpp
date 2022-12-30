                // Detect and Remove Loop
    Coding Ninja
// Detect Cycle using floyd cycle detect algo
Node* floydcycle(Node* head)
{
    if(head == NULL)
        return NULL;
    
    Node* fast = head;
    Node* slow = head;
    
    while(fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        
        slow = slow->next;
            
            if(slow == fast)
            {
                return slow;
            }
    }
    return NULL;       
}

// Detect Statring Node of LOOP
Node* topnode(Node* head)
{
    if(head == NULL)
        return NULL;
    
    Node* fst_node = floydcycle(head);
    if(fst_node == NULL)
        return NULL;
    Node* slow = head;
    
    while(slow != fst_node)
    {
        slow = slow->next;
        fst_node = fst_node->next;
    }
    
    return slow;
 }

// remove loop 
Node* removeLoop(Node* head)
{
    if( head == NULL)
        return NULL;

    Node* nod = topnode(head);
    if(nod == NULL)
        return head;
    
    Node* temp = nod;
    
    while(temp->next != nod)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    
    return head;
}

