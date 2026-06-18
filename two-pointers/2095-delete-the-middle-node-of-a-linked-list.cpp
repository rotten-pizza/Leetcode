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
         ListNode* slow=head;
    // ListNode* prev=nullptr;
    ListNode* fast=head;
    if(head->next!=nullptr) fast=head->next->next;
    while(fast!=nullptr&& fast->next!=nullptr){
        // prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast==slow)return head->next;
    // prev->next=prev->next->next;
    slow->next=slow->next->next;
    return head;
    }
};