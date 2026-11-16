class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length()>k){
        string ans="";
        int maxlen=0;
        int sum=0;
        for(int i=0;i<s.length();i++){
            int num=s[i]-'0';
            sum+=num;
            maxlen++;
            if(maxlen==k){
                ans+=to_string(sum);
                sum=0;
                maxlen=0;
            }
        }
            if(maxlen>0){
                ans+=to_string(sum);
            }
            s=ans;
        }
        return s;
    }
};