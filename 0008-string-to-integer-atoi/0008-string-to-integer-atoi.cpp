class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        bool negative=false;
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        if(i<s.size() && s[i]=='-'){
            negative=true;
            i++;
        }else if(i<s.size() && s[i]=='+'){
            i++;
        }
        while(i<s.size() && isdigit(s[i])){
            int digit=s[i]-'0';
            if(ans > INT_MAX / 10 ||
              (ans == INT_MAX / 10 && digit > 7)) {
                return negative ? INT_MIN : INT_MAX;
            }
            ans=ans*10+digit;
            i++;
        }
            if(negative){
                ans=-ans;
            }
            return int(ans);
    }
};