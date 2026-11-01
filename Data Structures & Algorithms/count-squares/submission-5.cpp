class CountSquares {
private: 
    vector<vector<int>> v;

public:
    CountSquares() {
        v = vector<vector<int>>(1001, vector<int>(1001, 0));
    }
    
    void add(vector<int> point) {
        int x = point[0],y=point[1];
        v[x][y] +=1;
    }
    
    int count(vector<int> point) {
        int val1=0,val2=0,val3=0,val4=0;
        int x=point[0],y=point[1];
        for(int i=1;i<1001;i++){
            int x1 = x+i;
            int y1 = y+i;
            if(x1>1000 || y1>1000) break;
            val1 += (v[x][y1]*v[x1][y]*v[x1][y1]);
        }
        for(int i=1;i<1001;i++){
            int x1 = x-i;
            int y1 = y+i;
            if(x1<0 || y1>1000) break;
            val2 += (v[x][y1]*v[x1][y]*v[x1][y1]);
        }
        for(int i=1;i<1001;i++){
            int x1 = x-i;
            int y1 = y-i;
            if(x1<0 || y1<0) break;
            val3 += (v[x][y1]*v[x1][y]*v[x1][y1]);
        }
        for(int i=1;i<1001;i++){
            int x1 = x+i;
            int y1 = y-i;
            if(x1>1000 || y1<0) break;
            val4 += (v[x][y1]*v[x1][y]*v[x1][y1]);
        }
        return val1 + val2 + val3 + val4;
    }
};
