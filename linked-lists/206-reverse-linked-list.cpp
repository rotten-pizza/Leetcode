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
    ListNode* reverse1(ListNode* head,ListNode*& ans){
        if(head->next==nullptr){
            ans=head;
            return head;
        }
        ListNode* prev=reverse1(head->next,ans);
        prev->next=head;
        head->next = nullptr;
        return head;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode* ans=nullptr;
        reverse1(head,ans)->next=nullptr;
        head->next==nullptr;
        return ans;
    }
};