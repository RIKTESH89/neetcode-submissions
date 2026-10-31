class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> right(n);
        vector<int> left(n);

        for(int i=0;i<n;i++){
            if(i==0){
                left[0] = height[0];
                right[n-1] = height[n-1];
            }
            else{
                left[i] = max(left[i-1],height[i]);
                right[n-1-i] = max(height[n-1-i], right[n-i]);
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<left[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<right[i]<<" ";
        // }
        // cout<<endl;
        int ans = 0;
        for(int i=0;i<n;i++){
            int h = min(left[i],right[i]);
            if(h>height[i]){
                ans+=(h - height[i]);
            }
        }
        return ans;
    }
};
