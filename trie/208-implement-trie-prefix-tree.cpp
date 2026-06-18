class Node{
    public:
    Node* child[256];
    int is_end=false;
    Node(){
        for(int i=0;i<256;i++){
            this->child[i]=nullptr;
        }
    }
};
class Trie {
public:
    Node* root1=new Node();
    Trie() {
    }
    void insert(string word) {
        
    Node* root=root1;
    for(int i=0;i<word.size();i++){
        char x=word[i];
        if(root->child[x]!=nullptr){
            root=root->child[x];
        }
        else{
            root->child[x]=new Node();
            root=root->child[x];
        }
    }
        root->is_end=true;
    }
    
    bool search(string word) {
    Node* root=root1;
        
        for(int i=0;i<word.size();i++){
        char x=word[i];
        if(root->child[x]!=nullptr){
            root=root->child[x];
        }
        else{
            return false;
        }
    }
    return root->is_end==true;
    }
    
    bool startsWith(string prefix) {
    Node* root=root1;
        
        for(int i=0;i<prefix.size();i++){
        char x=prefix[i];
        if(root->child[x]!=nullptr){
            root=root->child[x];
        }
        else{
            return false;
        }
    }
    return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */