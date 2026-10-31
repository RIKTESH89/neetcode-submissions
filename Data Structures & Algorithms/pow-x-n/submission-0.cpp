class Solution {
public:

    double ans(double x, int n){
        if(n==0) return 1.0; 
        if(n%2==0){
            double val = ans(x,n/2);
            return val*val;
        }
        else{
            double val = ans(x,n/2);
            return val*val*x;
        }
    }

    double myPow(double x, int n) {
        if(n<0){
            return ans(1/x,-n);
        }
        else return ans(x,n);
    }
};
