class Solution {
public:
    void dfs(int i,int j,int initial,int fin,vector<vector<int>>& image){
        int n=image.size();
        int m=image[0].size();
        if(i<0||j<0)return;
        if(i>=n||j>=m)return;
        if(image[i][j]!=initial)return;
        image[i][j]=fin;
        dfs(i-1,j,initial,fin,image);
        dfs(i,j-1,initial,fin,image);
        dfs(i+1,j,initial,fin,image);
        dfs(i,j+1,initial,fin,image);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int final) {
    int initial=image[sr][sc];
    if(initial!=final)dfs(sr,sc,initial,final,image);
return image;
    }
};