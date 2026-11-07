class Solution {
public:
    string processStr(string s) {
        string res="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                res+=s[i];
            }
            if(s[i]=='*' && !res.empty()){
                res.pop_back();
            }
            if(s[i]=='#'){
                res+=res;
            }
            if(s[i]=='%'){
                reverse(res.begin(),res.end());
            }
        }
        return res;
    }
};