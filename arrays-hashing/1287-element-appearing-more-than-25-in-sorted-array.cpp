class Solution {
public:
    
    int findSpecialInteger(vector<int>& arr) {
       int count=arr.size()/4;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                count--;
            }
            else count=arr.size()/4;
            if(count==0)return arr[i];
        }
        return arr[0];
    }
};