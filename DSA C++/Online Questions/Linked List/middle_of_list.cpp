------------------------------------> Middle of the Linked List <-----------------------------------


--------------------------> General Appoach <--------------------------


class Solution {
    
    int getlength(ListNode* head)
    {
        int ans = 0;
        while(head!=NULL)
        {
            head = head->next;
            ans++;
        }
        return ans;
    }
    
public:
    ListNode* middleNode(ListNode* head) {
        
        int len = getlength(head);
        int ans = len/2;
       
      
        ListNode* temp = head;        
        
        int cnt = 0;
        
        while(cnt<ans)
        {
            temp = temp->next;
            cnt++;
        }        
        return temp;
       
    }
};



--------------------------> fast & slow approach <--------------------------

class Solution {
    ListNode* middle(ListNode* head) 
    {
//         if linkedlist is empty or containing 1 node
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        
//         if linkedlist have exact 2 nodes
        if(head->next->next == NULL)
        {
            return head->next;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL)
        {
            fast = fast->next;
            if(fast != NULL)
            {
                fast = fast->next;
            }
            slow = slow->next;
        }
        
        return slow;
    }
public:
    ListNode* middleNode(ListNode* head) {
        
        return middle(head);
        
    }
};