
// // Remove Duplicate from unordered_list (Coding Ninjas)

// here we use unordered_map because it store the value in map in the order we stored 

// 3 way to solve the problem
// i) using the unordered_map (the method we use here) TC = O(n) and SC = O(n)
// ii) using the two for loop TC = O(n^2) and SC = O(1)
// iii) first sort the list then remove the duplicate from it TC = O(nlogn) and SC = O(1)
// O(logn) TC to sort the list and O(n) to travarse the list


Node *removeDuplicates(Node *head)

{

    unordered_map<int,bool>v;

    Node* curr=head;

    while(curr->next!=NULL){

        v[curr->data]=true;

        if(v[curr->next->data]==true){

            Node* next_next=curr->next->next;

            Node* nodetodelete=curr->next;

            delete(nodetodelete);

            curr->next=next_next;

        }

        else

            curr=curr->next;

    }

    return head;

}