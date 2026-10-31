class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = speed.size();
        vector<pair<int,int>> posS;
        for(int i=0;i<n;i++){
            posS.push_back({position[i],speed[i]});
        }   
        sort(posS.begin(),posS.end(),greater<pair<int,int>>());
        stack<float> stk;
        for(int i=0;i<n;i++){

            if(stk.size()>0 && (target-posS[i].first)/(1.0 * posS[i].second) <= stk.top()){
                // stk.pop();
                continue;
                // stk.push((target-posS[i].first)/(1.0 * posS[i].second));
            }
            else{
                stk.push((target-posS[i].first)/(1.0 * posS[i].second));
            }
        }
        return (int)stk.size();

    }
};
