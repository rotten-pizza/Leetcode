class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=1e9;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
           int j=i+1,k=nums.size()-1;
           while(j<k){
                    int number=nums[i]+nums[j]+nums[k];
                    if(number==target){
                        return number;
                    }
                    else if(number>target){
                        if(abs(closest-target)>abs(number-target)){
                            closest=number;
                        }
                        k--;
                    }
                    else{
                        if(abs(closest-target)>abs(number-target)){
                            closest=number;
                        }
                        j++;}

           }
        }
        return closest;
    }
};