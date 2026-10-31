class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
     int first_ind = 0;
     int n = numbers.size();
     int last_ind  = n-1;

     while(first_ind >=0 && last_ind<n && first_ind<last_ind){
        int val = numbers[first_ind] + numbers[last_ind];
        if(val==target){
            return {first_ind+1, last_ind+1};
        }
        else if(val>target) --last_ind;
        else if(val<target) ++first_ind;
     }
     return {};  
    }
};
