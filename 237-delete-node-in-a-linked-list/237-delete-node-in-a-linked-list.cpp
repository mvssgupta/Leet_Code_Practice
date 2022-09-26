/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// we should use our master brain to solve this question\U0001f602.
//*here we have access to only to the right side of the reference
//*  1->2->6->8->9
//*for suppose we are asked to delete 6 then we should break the link
//*between 2 and 6 and we should make a link to 8 from 2 and then
//*using delete() operation delete 6


//*But it can done by simply coping the value of 8 to 6
//*simply break the link between 6->8
//*then it looks like 1->2->8->9
//*here another need to be done is we should link the new 8 to 9

class Solution {
public:
    void deleteNode(ListNode* refToNode) {
        ListNode* nextNode = refToNode->next;
        refToNode->val = nextNode->val;
        refToNode->next = refToNode->next->next;
        delete(nextNode);
    }
};