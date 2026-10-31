class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxm = 0;
        for(auto pile:piles) maxm = max(maxm,pile);
        
        int l = 1, r = maxm;
        while(l<r && l>=0 && r<=maxm){
            int mid = l + (r-l)/2;
            int hrs = 0;
            for(auto pile:piles){
                int pile_val = pile;
                hrs += (pile_val+mid-1)/mid;
            }
            if(hrs>h) {
                l = mid+1;
            }
            else {
                r = mid;
            }
        }
        return l;
    }
};
