class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int start=-1,number_of_chunks=0;
        for(int i=0;i<arr.size();i++){
            // if(start==-1)start=arr[i];
             start=max(start,arr[i]);
            if(i==start){number_of_chunks++;start=-1;}
        }
        // if(start==-1)return 
        return number_of_chunks;
    }
};