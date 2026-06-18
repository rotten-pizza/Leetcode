class Solution {
public:
  struct cmp {
        bool operator()(const string& a, const string& b) {
            return a > b;
        }
    };
    vector<string> findItinerary(vector<vector<string>>& tickets) {
          ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        unordered_map<string,vector<string>>graph;
        for(auto x:tickets){
            graph[x[0]].push_back(x[1]);
        }
         unordered_map<string,int> edge_count;
        for(auto &x:graph){
            sort(x.second.begin(),x.second.end(),cmp());
            edge_count[x.first]=x.second.size();
        }
 

        stack<string>curr_path;
        vector<string>path;

    string curr_v = "JFK"; // Current vertex
 curr_path.push("JFK");
    while (!curr_path.empty())
    {
        // If there's remaining edge
        if (edge_count[curr_v])
        {   // Push the vertex
            curr_path.push(curr_v);
            // Find the next vertex using an edge
            string next_v = graph[curr_v].back();
            // and remove that edge
            edge_count[curr_v]--;
            graph[curr_v].pop_back();
            // Move to next vertex
            curr_v = next_v;
        }
        // back-track to find remaining circuit
        else
        {
            path.push_back(curr_v);
 
            // Back-tracking
            curr_v = curr_path.top();
            curr_path.pop();
        }
    }
reverse(path.begin(),path.end());
return path;
    }
};