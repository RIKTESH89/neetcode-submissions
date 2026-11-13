class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> m;

        for(int i=0;i<hand.size();i++){
            m[hand[i]]++;
        }

        while(!m.empty()){
            int smallest = m.begin()->first;

            for(int i=0;i<groupSize;i++){
                int val = smallest + i;
                if(m.find(val)==m.end()) return false;
                m[val]--;
                if(m[val]==0) m.erase(val);
            }
        }
        return true;
    }
};
