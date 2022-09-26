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
    
//*here I'm using slow and fast pointers approach
//*In this approach we are using slow and fast pointer and pointing them to the head
//*here my intution is when the fast pointer reaches the end , the slow pointer will be at the middle
//*then I'm returning the slow pointer since it contains the middle element of the LinkedList
    
    ListNode* middleNode(ListNode* head) {
        ListNode *slowPtr = head,*fastPtr = head;
        while (fastPtr != nullptr && fastPtr->next != nullptr) //if the slow pointer reaches the end then we will stop and return the slow pointer
        {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        return slowPtr;
    }
};