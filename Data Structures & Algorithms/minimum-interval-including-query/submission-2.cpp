class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> qq;
        for(int i=0;i<queries.size();i++) qq.push_back({queries[i],i});
        sort(qq.begin(),qq.end());
        multiset<vector<int>> qi;
        vector<int> ans(queries.size(),-1);
        int interval_ind = 0;
        for(int i=0;i<qq.size();i++){

            while(interval_ind<intervals.size() && intervals[interval_ind][0]<=qq[i][0]){
                
                int d = intervals[interval_ind][1]-intervals[interval_ind][0] + 1;
                qi.insert({d,intervals[interval_ind][0],intervals[interval_ind][1]});
                interval_ind++;
            }

            for(auto it=qi.begin();it!=qi.end();){
                if((*it)[2]<qq[i][0]) it = qi.erase(it);
                else break;
            }

            if(!qi.empty()) ans[qq[i][1]] = (*qi.begin())[0];
        }
        return ans;
    }
};
