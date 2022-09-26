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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 1;
        ListNode* traversingNode = head;
        while(traversingNode!=NULL){   //traversing the linkedlist to get the length of the linked list
            traversingNode = traversingNode->next;
            len++;
        }
        int nthNode = len-n;  //deleting nth node from end means , deleting (lengthOfLL - n)th node from the begining
        int count=1;
        ListNode* dummyNode = NULL;
        if(nthNode==1){       //If the nth from end is first node from starting then we store the head in some dummyNode and simply move the head to next node and delete the dummyNode
            dummyNode = head;
            head = head->next;
            delete(dummyNode);
        }
        else{            //else travse to that node and delete it.
            dummyNode = head;
            ListNode* deletedNode = NULL;
            while(count<nthNode-1){
                dummyNode = dummyNode->next;
                count++;
            }
            deletedNode = dummyNode->next;
            dummyNode->next = dummyNode->next->next;
            delete(deletedNode);
        }
        return head;
        
    }
};