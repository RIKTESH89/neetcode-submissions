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

    static bool compare(Interval a, Interval b){
        return a.start < b.start;
    } 

    bool canAttendMeetings(vector<Interval>& intervals) {
        sort(intervals.begin(),intervals.end(), compare);
        int prevend = intervals[0].end;
        int prevstart = intervals[0].start;

        for(int i=1;i<intervals.size();i++){
            if(intervals[i].start <prevend && intervals[i].end >prevstart){
                return false;
            }
            else {
                prevend = intervals[i].end; prevstart = intervals[i].start;
            }
        }
        return true;
    }
};
