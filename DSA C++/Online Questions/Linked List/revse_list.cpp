-------------------------> Reverse Linked List <-------------------------
    
    -----------------> Iterative Approach <-----------------
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL; 
        ListNode* curr = head;
        
        if(head == NULL || head->next == NULL)
            return head;
        else
        {
            
        
        while(curr!=NULL)
        {
            ListNode* fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            
        }
        
        return prev;
        }
    }
};

in this approach we using the 3 pointers
i) pointer which points to null (prev pointer)
ii) pointer which points the current node(curr pointer)
iii) pointer which points the next node of the current node(fwd pointer)

 

    -----------------> Recursive Approach <-----------------

class Solution {
    
    void reverse(ListNode* &head,ListNode* &curr,ListNode* &prev)
    {
//         Base Case
        if(curr == NULL)
        {
            head = prev;
            return;
        }
        
//         condtional case
        ListNode* fwd = curr->next;
        reverse(head,fwd,curr);
        curr->next = prev;
        
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        
       reverse(head,curr,prev);
        return head;
    }
};