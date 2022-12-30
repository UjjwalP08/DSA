-------------------------> Reverse Linked List in kth group<-------------------------


class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        
        // base case
        if(head == NULL)
        {
            return NULL;
        }
        
        struct node* prev = NULL;
        struct node* curr = head;
        struct node* fwd = NULL;
        int cnt = 0;
        
        // reverse list in 1st k nodes
        while(curr!= NULL && cnt<k)
        {
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            cnt++;
        }
        
        // recursion conditions
        if(fwd!=NULL)
        {
            // store the recursion o/p to next of head
            head->next = reverse (fwd,k);
        }
        
        // return prev
        return prev;
        
    }
};