class TimeMap {
public:

    unordered_map<string,vector<pair<int,string>>> m;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>> v = m[key];
        int l = 0, r = (int)v.size()-1;
        string result = "";
        while(l<=r){
            int mid = l+(r-l)/2;
            if(timestamp >= v[mid].first) {
                result = v[mid].second;
                l = mid+1;
            }
            // else if(timestamp> v[mid].first) l = mid;
            else r = mid-1;
        }
        // if()
        return result;
        // return "";
        
    }
};



//  value which is just small or equal to the timestamp asked
// TTTTT'T'FFF