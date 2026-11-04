/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> diff(1000006, 0);
        for(int i=0;i<intervals.size();i++){
            diff[intervals[i].start] += 1;
            diff[intervals[i].end] += -1;
        }
        int ans =0;
        for(int i=1;i<diff.size();i++){
            diff[i] += diff[i-1];
            ans=max(ans,diff[i]);
        }
        return ans;
    }
};
