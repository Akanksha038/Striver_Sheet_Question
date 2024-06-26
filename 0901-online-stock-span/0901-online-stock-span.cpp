class StockSpanner {
public:
        
        stack<pair<int,int>>st;
        
    StockSpanner() {
            
        
    }
    
    int next(int price) {
            int stockSpan=1;
            
            while(!st.empty()  && st.top().first<=price )
            {
                    stockSpan=stockSpan+st.top().second;
                    st.pop();
            }
            
            st.push({price,stockSpan});
            return stockSpan;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */