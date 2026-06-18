class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0,ans=0,end=letters.size()-1;
        while(start<=end){
            int mid=(start+end)>>1;
            if(letters[mid]>target){
                ans=mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return letters[ans];
    }
};