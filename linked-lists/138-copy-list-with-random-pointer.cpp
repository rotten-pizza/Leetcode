/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* mover=head;
        while(mover!=nullptr){
	Node* temp=new Node (mover->val);
	temp->next=mover->next;
	mover->next=temp;
	mover=mover->next->next;
}
//filling random nodes
mover=head;
while(mover!=nullptr){
	if(mover->random)mover->next->random=mover->random->next;
	mover=mover->next->next;
}
//connecting the copied nodes
Node* dummy=new Node(-1);
Node* dumm=dummy;
mover=head;
while(mover!=nullptr){
	dummy->next=mover->next;
	dummy=dummy->next;
	mover->next=mover->next->next;
	if(mover)mover=mover->next;

}
return dumm->next;
    }
};