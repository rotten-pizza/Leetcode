class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
          ios_base::sync_with_stdio(0);
        cin.tie(0);
        // cout.tie(0);
        	if(arr.size()==1)return arr[0];
	int start=1,end=arr.size()-2;
	//checking for first and last element are single or not
	if(arr[0]!=arr[1])return arr[0];
	if(arr[arr.size()-1]!=arr[arr.size()-2])return arr[arr.size()-1];
	while(start<=end){
		int mid=start+(end-start)/2;
		bool left_equal=arr[mid]==arr[mid-1];
		bool right_equal=arr[mid]==arr[mid+1];
		if(!(left_equal||right_equal)){return arr[mid];}
		else if(left_equal){
			//if elements on right of mid are odd then answer lies there
			if((arr.size()-mid-1)%2==0){end=mid-2;}
			else{start=mid+1;}
		}
		else if(right_equal){
			if((arr.size()-mid-1)%2==0){start=mid+2;}
			else{end=mid-1;}
		}
	}
return -1;
    }
};