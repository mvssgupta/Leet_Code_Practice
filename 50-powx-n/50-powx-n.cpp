class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            x=1/x;
            n=abs(n);
        }
        if(n==0) return 1;
        double ans = myPow(x,n/2);
        return (n%2==0)?(ans*ans):(x*ans*ans);    
    }
};