class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        bool neg=num<0;
        long long n=abs((long long)num);
        string ans="";
        while(n>0){
            ans+=to_string(n%7);
            n/=7;
        }
        reverse(ans.begin(),ans.end());
        if(neg) ans="-"+ans;
        return ans;
    }
};