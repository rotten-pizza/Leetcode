class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
          int n=nums.size();
          vector<int>arr=nums;
          int c=abs(target);
    int sum=0,zeroes=0;
    for (size_t i = 0; i < n; i++)
    {
        sum+=arr[i];
        if(arr[i]==0)zeroes++;
    }
          if(c>sum)return 0;
    int factor=1;
    for (size_t i = 0; i < zeroes; i++)
    {
        factor=((factor%1000000007)*2)%1000000007;
    }
    
    int t[n+1][sum+1];
    for (size_t i = 0; i < n+1; i++)
    {
        for (size_t j = 0; j < sum+1; j++)
        {
            if(j==0)t[i][j]=1;
            else if(i==0)t[i][j]=0;
        }
        
    }
    for (size_t i = 1; i < n+1; i++)
    {
        for (size_t j = 1; j < sum+1; j++)
        {   if(arr[i-1]==0)t[i][j]=t[i-1][j];
          else if(arr[i-1]<=j)t[i][j]=(t[i-1][j-arr[i-1]])+(t[i-1][j]);
           else t[i][j]=t[i-1][j];
        }
        
    }
if((sum%2==0&&c%2==0)||(sum%2!=0&&c%2!=0))return (t[n][(sum-c)/2])*factor;
else return 0;
    }
};