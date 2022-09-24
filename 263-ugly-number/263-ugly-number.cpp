class Solution {
public:
    bool isUgly(int n) {
        vector<int> primes = {2, 3, 5};
        if (n < 1) return false;
        for (auto p: primes)
        {
            while (n % p == 0)//continuously dividing with that primes , why because if it is only multiple of those three primes(or we can say , its prime factors are only 2,3,5 then we should left with 1.)
//for eg:- i) 6=2*3 , when divided by 2 and 3 continuously we left with 1, this means this is a ugly number
//ii) 14 = 2*7, when we divide it with the primes it left 7 , this means this is not a ugly number.
            {
                n /=p;
            }
        }
        if(n == 1) return true;
        return false;
    }
};