/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
  int init = [] {
    ios_base::sync_with_stdio(false);  cin.tie(nullptr);
    // ofstream out("user.out");
    // for (string s; getline(cin, s);)
    //     out<<(equal(s.begin()+1, s.begin()+s.size()/2, s.rbegin() + 1) ? "true\n" : "false\n");
    // out.flush();
    // exit(0);
    
    return 0;
}();
class Solution {
public:
ListNode* findStart(ListNode* entry,ListNode* slow){
    while(entry!=slow){
        entry=entry->next;
        slow=slow->next;
    }
    return entry;
}
    ListNode *detectCycle(ListNode *head) {
          ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=nullptr&& fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findStart(head,slow);
        }
    }
    return nullptr;
    }
};