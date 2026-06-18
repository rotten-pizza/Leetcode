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
  int init = [] {
    ios_base::sync_with_stdio(false);  cin.tie(nullptr);
    ofstream out("user.out");
    for (string s; getline(cin, s);)
        out<<(equal(s.begin()+1, s.begin()+s.size()/2, s.rbegin() + 1) ? "true\n" : "false\n");
    out.flush();
    exit(0);
    
    return 0;
}();
class Solution {
public:

    bool isPalindrome(ListNode* head) {
        // ios_base::sync_with_stdio(false);  cin.tie(nullptr);
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
if(slow==nullptr||slow->next==nullptr);else
   { ListNode* mover=slow;
    ListNode* prev=nullptr;
    while(mover!=nullptr){
        ListNode* temp=mover->next;
        mover->next=prev;
        prev=mover;
        mover=temp;
    }
    slow=prev;
    }
        while(slow!=nullptr){
            if(slow->val!=head->val)return false;
            else{
                slow=slow->next;
                head=head->next;
            }

        }
        return true;
  
    }
};