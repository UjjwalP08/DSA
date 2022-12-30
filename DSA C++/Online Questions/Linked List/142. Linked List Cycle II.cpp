            // 142. Linked List Cycle II
                    // LeetCode

                    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:

    ListNode *floyd(ListNode* head)
    {
        if(head == NULL)
            return NULL;
        
        ListNode *fast = head;
        ListNode* slow = head;

        while(fast != NULL && slow!= NULL)
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

public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* topnode = floyd(head);

            if(topnode == NULL)        
                return NULL;
        ListNode* slow = head;

        while(slow != topnode)
        {
            slow = slow->next;
            topnode = topnode->next;
        }

        return slow;
    }
};