class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int low = 100, high = 0, ans =0;
        for(int i=0;i<n;i++){
            if(i==0) low = prices[0];
            else{
                if(prices[i]<prices[i-1]){
                    if(low>prices[i]){
                        high =0; low = min(low,prices[i]);
                    }
                }
                else if(prices[i]>prices[i-1]){
                    high = max(high,prices[i]);
                }
                if(high>low) ans = max(ans,high-low);
            }
        }
        return ans;   
    }
};
