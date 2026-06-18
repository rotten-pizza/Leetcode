class StockSpanner {
public:
    stack<int>st;
    vector<int>cost;
    StockSpanner() {
        
    }
    
    int next(int price) {
        cost.push_back(price);
        int index=-1;
        while(!st.empty()&&cost[st.top()]<=price){
            st.pop();
        }
        if(!st.empty())index=st.top();
        int ans=cost.size()-index-1;
        st.push(cost.size()-1);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */