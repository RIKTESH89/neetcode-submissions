class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;

        int n = temperatures.size();
        vector<int> ans(n,0);
        // for(int i=0;i<n;i++){

        // }   
        int r=0;
        while(r<n){
            if(s.size()>0 && temperatures[s.top()]<temperatures[r]){
                ans[s.top()] = (r-s.top());
                s.pop();
                continue;
            }
            else{
                s.push(r); ++r;
            }
            // s.push(temperatures[r]);

        }
        int l = ans.size();
        // for(int i=l;i<n;i++){
        //     ans.push_back(0);
        // }
        return ans;
    }
};
