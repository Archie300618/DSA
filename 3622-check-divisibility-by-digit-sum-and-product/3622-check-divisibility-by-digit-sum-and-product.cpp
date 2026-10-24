class Solution {
public:
    bool checkDivisibility(int n) {
        int num=n;
        int sum=0;
        int prod=1;
        while(num>0){
            int dig=num%10;
            sum+=dig;
            prod*=dig;
            num/=10;
        }
        return n%(sum+prod)==0;
    }
};