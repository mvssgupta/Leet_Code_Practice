/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev=head;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            if((curr->val)==val)   //if we found a node with the target "val" then go to into this branch of code otherwise you are not allowed to go inside \U0001f602
            {
                if(curr==head)    //if the val what we are looking for is at headNode of our linkedList then just move head to head->next
                {
                    head=head->next;
                }
                else{ 
                  prev->next = curr->next;  
                }
            }
            else{              //if the current node we are seeing is not having the target "val" then simply go to next set of nodes.
                prev=curr;                
            }
            curr = curr->next;
        }
        return head;
    }
};