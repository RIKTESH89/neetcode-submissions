class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> pre(n,-1);
        vector<int> suf(n,n);
        stack<int> s;

        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty()){
                pre[i] = s.top();
            }
            s.push(i);
        }
        while(!s.empty()) {
            s.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty()){
                suf[i] = s.top();
            }
            s.push(i);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,(suf[i]-pre[i]-1)*heights[i]);
        }
        return ans;
    }
};
