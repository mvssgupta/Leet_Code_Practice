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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* dummy = head;
        int count=1;
        while(dummy->next)//this is to find the length of the linkedlist
        {
            dummy=dummy->next;
            count++;
        }
        if(count==1) return NULL;
        int n=count/2;  //finding the middle element position in the linkedlist
        count=0;
        dummy = head;
        ListNode* dummy2 = head->next;
        while(dummy2)
        {
            if(count==n-1)
            {
                dummy->next=dummy2->next;
                break;
            }
            dummy=dummy->next;
            dummy2=dummy2->next;
            count++;
        }
        return head;
    }
};