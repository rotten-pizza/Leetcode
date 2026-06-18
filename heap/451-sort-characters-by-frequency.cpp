class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>fr;
	for(int i=0;i<256;i++){
		fr.push_back({0,i});
	};
	for(int	i=0;i<s.size();i++ ){
		fr[s[i]].first++;
	}
	sort(fr.begin(),fr.end(),greater<pair<int,char>>());
	int index=0;
	for(int i=0;i<fr.size();i++){
		for(int j=0;j<fr[i].first;j++){
			s[index++]=fr[i].second;
		}
	}
	return s;
    }
};