class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            x=1/x;
            n=abs(n);
        }
        if(n==0) return 1;
        //Intution is n^4 = n^2*n^2. It gives logarithmic time complexity , if we do x*x*x*x for x^4 then we will get TLE.
        double ans = myPow(x,n/2);
        return (n%2==0)?(ans*ans):(x*ans*ans);    
    }
};