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
ListNode* reverseLinkedList(ListNode *head)
{
    if(head==nullptr||head->next==nullptr)return head;
    ListNode* newHead=reverseLinkedList(head->next);
    ListNode* front=head->next;
    front->next=head;
    head->next=nullptr;
    return newHead;
}
ListNode * findKthNode(ListNode* head,int k){
    int cnt=1;
    while(head!=nullptr&& head->next!=nullptr){
        head=head->next;
        cnt++;
        if(cnt==k)return head;
    }
    return nullptr;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
         if(k==1)return head;
    ListNode* temp=head;
    ListNode* prevNode=nullptr;
    while(temp!=nullptr){
        ListNode* kthNode=findKthNode(temp,k);
        if(kthNode==nullptr){
            if(prevNode){prevNode->next=temp;}
            break;
        }
        ListNode* nextNode=kthNode->next;
        kthNode->next=nullptr;
        kthNode=reverseLinkedList(temp);
        if(temp==head){
            head=kthNode;
        }
        else{
            prevNode->next=kthNode;
        }
        prevNode=temp;
        temp=nextNode;
    }
return head;
    }
};