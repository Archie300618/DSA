class Solution {
public:
    long long removeZeros(long long n) {
        long long ans=0;
        long long place=1;
        while(n!=0){
            int dig=n%10;
            if(dig!=0){
                ans=dig*place+ans;
                place*=10;
            }
            n/=10;
        }
        return ans;
    }
};