#define ll long long
#define vec vector<long long>
#define ld long double
#define print(v) for(auto c:v)cout<<c<<" "
#define loop(i, n) for (int i = 0; i < n; i++)
#define print_matrix(x) for(int i=0;i<x.size();i++){print(x[i]);cout<<endl;}

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        // vector<vector<vector<int>>>store;
            std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
        vector<vector<int>>mat(n,vector<int>(n,-1));
        for(auto x:edges){
            mat[x[0]][x[1]]=x[2];
            mat[x[1]][x[0]]=x[2];
        }
        loop(i,n)mat[i][i]=0;
        loop(k,n)loop(i,n){
	       loop(j,n){
	        if(mat[i][k]!=-1&&mat[k][j]!=-1){
	            if(mat[i][j]==-1)mat[i][j]=mat[i][k]+mat[k][j];
	            else mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
	        }
	       }
	   }
       vector<int> ans(n,0);
       for(int i=0;i<n;i++){
        loop(j,n){
            if(j!=i&&mat[i][j]!=-1&&mat[i][j]<=distanceThreshold)ans[i]++;
        }
       }
    int city=-1;
    int mini=1e9;
    loop(i,n){
        if(mini>=ans[i]){
            city=i;
            mini=ans[i];
        }
    }
    return city;
    }
};