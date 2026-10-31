class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,r=n-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }
            else
            r = mid;
        }
        int ln = 0, rn = 0;
        if(nums[l]<=target && target<=nums[n-1]){
            ln = l; rn = n-1;
        }
        else {
            ln = 0;rn=l-1;
        }
        while(ln<=rn){
            int mid = ln+(rn-ln)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) rn=mid-1;
            else if(nums[mid]<target) ln = mid+1;
        }
        return -1;
    }
};
