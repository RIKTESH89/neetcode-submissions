class Solution {
public:

    static bool sortsecond(vector<int> a, vector<int> b){
        return b[1]>a[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(), sortsecond);

        int removals = 0;
        int prevend = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(prevend <= intervals[i][0]){
                prevend = intervals[i][1];
            }
            else{
                removals++;
            }
        }
        return removals;
    }
};
