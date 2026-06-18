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
    ListNode* rotateRight(ListNode* head, int k) {
         ios_base::sync_with_stdio(0);
        ListNode* curr = head;
        ListNode* slow = head;
    if(head==nullptr||head->next==nullptr)return head;
        int cnt = 0;
        for (int i = 0; curr; i++) {
            curr = curr->next;
            cnt++;
        }
        k=k%cnt;
        if(k==0)return head;
        ListNode* prev=head;
        curr=head->next;
        for(int i=0;i<cnt-k-1;i++){
            curr=curr->next;
            prev=prev->next;
        }
        ListNode* temp=curr;
        while(curr->next!=nullptr)curr=curr->next;
        prev->next=nullptr;
        curr->next=head;
        return temp;
    }
};