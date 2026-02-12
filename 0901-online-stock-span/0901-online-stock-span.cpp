class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>>st;
    int next(int price) {
        int currspan=1;
        while(!st.empty()&& st.top().first<=price){
            currspan+=st.top().second;
            st.pop();
        }
        st.push({price,currspan});
        return currspan;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */