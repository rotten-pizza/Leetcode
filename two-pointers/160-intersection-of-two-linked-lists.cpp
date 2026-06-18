/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int get_length(ListNode* head){
        if(head==nullptr)return 0;
        int count=1;
        while(head!=nullptr){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
        int n=get_length(headA),m=get_length(headB);
        if(n<m){swap(n,m);swap(headA,headB);};
        int diff=n-m;
        for(int i=0;i<diff;i++){
            headA=headA->next;
        }
        while(headA!=nullptr){
            if(headA==headB)return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};