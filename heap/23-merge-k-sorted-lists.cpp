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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return nullptr;
        if(lists.size()==1)return lists[0];
        set<pair<int,ListNode*>>store;
        for(int i=0;i<lists.size();i++){
            if(lists[i]!=nullptr){
                store.insert({lists[i]->val,lists[i]});
            }
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* dumm=dummy;
        while(!store.empty()){
            auto temp=*store.begin();
            dummy->next=temp.second;
            store.erase(temp);
            dummy=dummy->next;
            if(dummy->next!=nullptr){store.insert({dummy->next->val,dummy->next});}
            }
            return dumm->next;
        }

};