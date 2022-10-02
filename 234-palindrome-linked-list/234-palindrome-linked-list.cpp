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

//*Optimized solution
//*The intution is find the mid point of the linkedlist and the break the ll in to two parts
//*and then reverse the second part and then compare it with the first part of ll
//*if it matches return true else false

class Solution {
public:
    
    //brute force solution is 
    // maintaing an string and push each element of the linkedlist and check whether it is palindrome or not
    bool checkForPalindrome(string &s)
    {
        int n = s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1]) return false;
        }
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        string s="";
        while(head!=NULL)
        {
            s.push_back(head->val);
            head = head->next;
        }
        return checkForPalindrome(s);
    }
    
    
    //this is optimized solution.
//     ListNode *reverseLinkedList(ListNode *head)
//     {
//         ListNode *dummyNode = NULL;
//         while (head != NULL)
//         {
//             ListNode* next = head->next;
//             head->next = dummyNode;
//             dummyNode = head;
//             head = next;
//         }
//         return dummyNode;
//     }
    
//     bool isPalindrome(ListNode* head) {
//         ListNode* slowPtr = head, *fastPtr = head->next;
//         while(fastPtr!=NULL && fastPtr->next!=NULL)
//         {
//             slowPtr = slowPtr->next;
//             fastPtr = fastPtr->next->next;
//         }
//         fastPtr = slowPtr->next;
//         slowPtr->next = NULL; //*breaking the linked list into two halves

//         //*now we have to reverse the second half
//         fastPtr = reverseLinkedList(fastPtr);

//         //*checking whether the given LL is palindrome or not
//         while(fastPtr!=NULL)
//         {
//             if(fastPtr->val!=head->val) return false;
//             fastPtr = fastPtr->next;
//             head = head->next;
//         }
//         if(fastPtr==NULL) return true;
//         return false;
//     }
};