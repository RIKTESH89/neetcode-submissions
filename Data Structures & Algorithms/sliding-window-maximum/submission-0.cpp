class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        if(n<k) return {};
        multiset<int, greater<int>> m;
        vector<int> ans;
        for(int i=0;i<k;i++){
            m.insert(nums[i]);
        }

        auto it = m.begin();
        ans.push_back(*it);

        for(int i=k;i<n;i++){
            auto itr = m.find(nums[i-k]);
            if(itr != m.end())
            {
                m.erase(itr); 
            }
            m.insert(nums[i]);
            auto ptr = m.begin();
            ans.push_back(*ptr);
        }
        return ans;
    }
};
