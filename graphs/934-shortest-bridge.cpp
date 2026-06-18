class Solution {
public:
int minManhattanDistance(vector<pair<int, int>> &array1,
                         vector<pair<int, int>> &array2) {
  int min_distance = INT_MAX;
  for (const auto &point1 : array1) {
    for (const auto &point2 : array2) {
      int distance =
          abs(point1.first - point2.first) + abs(point1.second - point2.second);
      min_distance = min(min_distance, distance);
    }
  }
  return min_distance;
}

bool is_valid(int x, int y, int n, int m) {
  return x >= 0 && x < n && y >= 0 && y < m;
}
void dfs(int x,int y,vector<vector<int>>&vis,vector<vector<int>>&arr,vector<pair<int,int>>&move,vector<pair<int,int>>&store){
vis[x][y]=1;
store.push_back({x,y});
    for (auto &movee : move) {
      int childx = movee.first + x;
      int childy = movee.second + y;
      if (is_valid(childx, childy, arr.size(), arr.size()) && vis[childx][childy] == 0 &&
          arr[childx][childy] == 1) {
        dfs(childx,childy,vis,arr,move,store);
      }
    }
 
}
    int shortestBridge(vector<vector<int>>& arr) {
         std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        int n=arr.size(),m=arr.size();
        vector<pair<int, int>> move = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
  vector<vector<int>> vis(n, vector<int>(m, 0));
  vector<pair<int, int>> store1;
  for (int i = 0; i < n; i++) {
    int flag=0;
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 1) {
        flag=1;
        dfs(i,j,vis,arr,move,store1);
        break;
      }

    }
    if(flag)break;
  }
  vector<pair<int, int>> store2;
  for (int i = 0; i < n; i++) {
    int flag=0;
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 1&&vis[i][j]==0) {
        flag=1;
           dfs(i,j,vis,arr,move,store2);
        break;
      }
    }
    if(flag)break;
  }
 
// for(auto x:store1)cout<<'('<<x.first<<" "<<x.second<<") ";
// cout<<endl;
// for(auto x:store2)cout<<'('<<x.first<<" "<<x.second<<") ";
  return minManhattanDistance(store1, store2)-1;
    }
};