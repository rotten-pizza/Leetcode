class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        // topsort
        vector<vector<int>>graph(numCourses);
        vector<int>inorder(numCourses);
        for(auto &x:prerequisites){
            graph[x[1]].push_back(x[0]);
            inorder[x[0]]++;
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(inorder[i]==0)q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto &child:graph[node]){
                inorder[child]--;
                if(inorder[child]==0)q.push(child);
            }
            ans.push_back(node);
        }
        if(ans.size()!=numCourses)return {};
        return ans;
    }
};