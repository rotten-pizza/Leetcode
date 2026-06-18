class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        // int col[m]={0} matrix[0][j]
	// int row[n]={0} matrix[i][0]
	int col0=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				//row
				matrix[i][0]=0;
				//column
				if(j!=0){matrix[0][j]=0;}
				else col0=0;
			}
		}
	}
	// iterate through everything excpet storage ones 
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][j]!=0){
                                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                                  matrix[i][j] = 0;
                                }
                        }
                }
	}
	//iterate through column store why? as it depends on row one we cant change row first
	if(matrix[0][0]==0){for(auto &x:matrix[0])x=0;}
	//through row store
	if(col0==0){for(int i=0;i<n;i++){matrix[i][0]=0;}}
    }
};