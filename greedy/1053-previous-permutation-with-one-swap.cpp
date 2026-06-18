class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

        int break_point=-1,n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i+1]<arr[i]){break_point=i;break;}
        }
        if(break_point==-1)return arr;
        int index_swap=break_point+1;
        for(int i=break_point+2;i<n;i++){
            if(arr[index_swap]<arr[i]){
                if(arr[i]<arr[break_point]){
                    index_swap=i;
                }
            }
        }
        swap(arr[break_point],arr[index_swap]);
        return arr;
    }
};