class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int mask = 0;

        for(int i=0;i<triplets.size();i++){
            if(triplets[i][0]>target[0] || triplets[i][1]>target[1] || triplets[i][2]>target[2]) continue;

            if(triplets[i][0]==target[0]) mask |= 1;
            if(triplets[i][1]==target[1]) mask |= 2;
            if(triplets[i][2]==target[2]) mask |= 4;
        }

        return mask==7;
    }
};
