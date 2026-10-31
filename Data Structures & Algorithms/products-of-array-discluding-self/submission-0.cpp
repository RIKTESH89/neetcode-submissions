class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        
        for(int i=0;i<n;i++){
            if(i==0) {
                pre[i] = nums[i];
                suf[n-i-1] = nums[n-i-1];
            }
            else{
                pre[i] = pre[i-1]*nums[i];
                suf[n-i-1] = suf[n-i]*nums[n-i-1];
            }
        }

        vector<int> ans;

        for(int i=0;i<n;i++){
            if(i==0){
                ans.push_back(suf[i+1]);
            }
            else if(i==n-1){
                ans.push_back(pre[i-1]);
            }
            else {
                int val = pre[i-1]*suf[i+1];
                ans.push_back(val);
            }
        }
        return ans;
    }
};
