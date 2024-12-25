class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;
        if(n<0)
        {
            n=-n;
            x=1/x;
        }
        if(n%2==0)  
        {
            double now = myPow(x,n/2);
            return now*now;
        }
        else
        {
            double now = myPow(x,n/2);
            return now*now*x;
        }

        double ans=1;

        return ans;
    }
};