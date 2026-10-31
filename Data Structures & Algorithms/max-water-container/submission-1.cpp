class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int p1 = 0, p2 = n-1;
        int ans = 0;
        while(p1<p2 && p1<n && p2>=0){
            ans = max(ans, (p2-p1)*min(heights[p1],heights[p2]));
            if(heights[p1]<heights[p2]) ++p1;
            else --p2;
        }
        return ans;
    }
};
