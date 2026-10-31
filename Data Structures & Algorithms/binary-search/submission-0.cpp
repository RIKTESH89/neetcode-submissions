class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        while(l>=0 && r<n && l<r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid]>target) r=mid-1;
            else l=mid+1;
        }
        int mid = l+(r-l)/2;
        if(nums[l]==target) return l;
        else if(nums[r]==target) return r;
        else if(nums[mid]==target) return mid;
        else return -1;
    }
};
