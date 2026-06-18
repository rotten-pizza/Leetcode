class Solution {
public:
class disjointset{
	public:
vector<int>Size,parent;
disjointset(int n){
	parent.resize(n+1);
	Size.resize(n+1);
	for(int i=0;i<=n;i++){
		Size[i]=1;
		parent[i]=i;
		}
}
int find_parent(int node){
	if(parent[node]==node){return node;}
	return parent[node]=find_parent(parent[node]);
}
void Union(int a,int b){
	a=find_parent(a);
	b=find_parent(b);
	if(Size[a]<Size[b])swap(a,b);
	parent[b]=parent[a];
	Size[a]+=Size[b];
}
};
    int makeConnected(int n, vector<vector<int>>& connections) {
        //intially number of non connected components =n
int non_connected_components=n,extra_edges=0;
disjointset store(n);
for(auto it:connections){
	int node1=store.find_parent(it[0]);
	int node2=store.find_parent(it[1]);
	if(node1!=node2){
	store.Union(node1,node2);
	non_connected_components--;
	}
	else {extra_edges++;}
}
if(non_connected_components-1>extra_edges)return -1;
return non_connected_components-1;
    }
};